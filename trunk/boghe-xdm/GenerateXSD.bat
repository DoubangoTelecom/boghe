
@echo off

set DOUBANGO_HOME="C:\Projects\Doubango"

set BIN_DIR=C:\Program Files\Microsoft SDKs\Windows\v6.0A\bin
set NAMESPACE="BogheXdm.Generated"

set COMMAND="%BIN_DIR%/xsd.exe" /c /order /out:Generated

REM "Genarating IETF schemas..."

%COMMAND% /namespace:%NAMESPACE%.xcap_caps %DOUBANGO_HOME%/schemas/xcap-caps.xsd



pause