/* 
    Copyright (c) 2012 Microsoft Corporation.  All rights reserved.
    Use of this sample source code is subject to the terms of the Microsoft license 
    agreement under which you licensed this sample source code and is provided AS-IS.
    If you did not accept the terms of the license agreement, you are not authorized 
    to use this sample source code.  For the terms of the license, please see the 
    license agreement between you and Microsoft.
*/
/*Copyright (C) 2013 Doubango Telecom <http://www.doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*/
#pragma once
#include "windows.h"
#include <robuffer.h>
#include <wrl.h>
#include <wrl/implements.h>
#include <wrl\client.h>
#include <windows.storage.streams.h>

namespace doubango_rt
{
    namespace BackEnd
    {

        /// <summary>
        /// The purpose of this class is to transform byte buffers into an IBuffer
        /// </summary>
        class NativeBuffer : public Microsoft::WRL::RuntimeClass<
                           Microsoft::WRL::RuntimeClassFlags< Microsoft::WRL::RuntimeClassType::WinRtClassicComMix >,
                           ABI::Windows::Storage::Streams::IBuffer,
                           Windows::Storage::Streams::IBufferByteAccess,
                           Microsoft::WRL::FtmBase>
        {

        public:
            virtual ~NativeBuffer()
            {
                if (m_pBuffer && m_bIsOwner)
                {
                    delete[] m_pBuffer;
                    m_pBuffer = NULL;
                }
            }

            STDMETHODIMP RuntimeClassInitialize(UINT totalSize)
            {
                m_uLength = totalSize;
                m_uFullSize = totalSize;
                m_pBuffer = new BYTE[totalSize];
                m_bIsOwner = TRUE;
                return S_OK;
            }

            STDMETHODIMP RuntimeClassInitialize(BYTE* pBuffer, UINT totalSize, BOOL fTakeOwnershipOfPassedInBuffer)
            {
                m_uLength = totalSize;
                m_uFullSize = totalSize;
                m_pBuffer = pBuffer;
                m_bIsOwner = fTakeOwnershipOfPassedInBuffer;
                return S_OK;
            }

            STDMETHODIMP Buffer( BYTE **value)
            {
                *value = m_pBuffer;
                return S_OK;
            }

             STDMETHODIMP get_Capacity(UINT32 *value)
             {
                 *value = m_uFullSize;
                 return S_OK;
             }
                        
            STDMETHODIMP get_Length(UINT32 *value)
            {
                *value = m_uLength;
                return S_OK;
            }
                        
            STDMETHODIMP put_Length(UINT32 value)
            {
                if(value > m_uFullSize)
                {
                    return E_INVALIDARG;
                }
                m_uLength = value;
                return S_OK;
            }

            static Windows::Storage::Streams::IBuffer^ GetIBufferFromNativeBuffer(Microsoft::WRL::ComPtr<NativeBuffer> spNativeBuffer)
            {
                auto iinspectable = reinterpret_cast<IInspectable*>(spNativeBuffer.Get());
                return reinterpret_cast<Windows::Storage::Streams::IBuffer^>(iinspectable);
            }
            static BYTE* GetBytesFromIBuffer(Windows::Storage::Streams::IBuffer^ buffer)
            {
                auto iinspectable = (IInspectable*)reinterpret_cast<IInspectable*>(buffer);
                Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBufferByteAccess> spBuffAccess;
                HRESULT hr = iinspectable->QueryInterface(__uuidof(Windows::Storage::Streams::IBufferByteAccess), (void **)&spBuffAccess);
                UCHAR * pReadBuffer;
                spBuffAccess->Buffer(&pReadBuffer);
                return pReadBuffer;
            }
        private:
            UINT32 m_uLength;
            UINT32 m_uFullSize;
            BYTE* m_pBuffer;
            BOOL m_bIsOwner;
        };
    }
}
