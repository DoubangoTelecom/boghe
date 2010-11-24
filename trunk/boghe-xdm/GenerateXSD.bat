
@echo off

set DOUBANGO_HOME="C:\Projects\Doubango"

set BIN_DIR=C:\Program Files\Microsoft SDKs\Windows\v6.0A\bin
set NAMESPACE="BogheXdm.Generated"

set COMMAND="%BIN_DIR%/xsd.exe" /c /order /out:Generated

REM -----------------------------
REM "Genarating IETF schemas..."
REM -----------------------------

::%COMMAND% /namespace:%NAMESPACE%.xcap_caps %DOUBANGO_HOME%/schemas/xcap-caps.xsd
::%COMMAND% /namespace:%NAMESPACE%.resource_lists %DOUBANGO_HOME%/schemas/resource-lists.xsd
%COMMAND% /namespace:%NAMESPACE%.rls_services %DOUBANGO_HOME%/schemas/rls-services.xsd %DOUBANGO_HOME%/schemas/resource-lists.xsd

REM -----------------------------
REM "Genarating OMA schemas..."
REM -----------------------------

::%COMMAND% /namespace:%NAMESPACE%.oma.xcap_directory %DOUBANGO_HOME%/schemas/xdm_xcapDirectory-v1_0.xsd


pause