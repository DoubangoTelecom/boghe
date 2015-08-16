
@echo off

set DOUBANGO_HOME="C:\Projects\Doubango"

set BIN_DIR=C:\Program Files\Microsoft SDKs\Windows\v6.0A\bin
set NAMESPACE="BogheXdm.Generated"

set COMMAND="%BIN_DIR%/xsd.exe" /c /order /out:Generated.tmp

REM -----------------------------
REM "Genarating IETF schemas..."
REM -----------------------------

::%COMMAND% /namespace:%NAMESPACE%.xcap_caps %DOUBANGO_HOME%/schemas/xcap-caps.xsd
::%COMMAND% /namespace:%NAMESPACE%.resource_lists %DOUBANGO_HOME%/schemas/resource-lists.xsd
::%COMMAND% /namespace:%NAMESPACE%.rls_services %DOUBANGO_HOME%/schemas/rls-services.xsd %DOUBANGO_HOME%/schemas/resource-lists.xsd
::%COMMAND% /namespace:%NAMESPACE%.xcap_error %DOUBANGO_HOME%/schemas/xcap-error.xsd
::%COMMAND% /namespace:%NAMESPACE%.regingo %DOUBANGO_HOME%/schemas/reginfo.xsd
::%COMMAND% /namespace:%NAMESPACE%.watcherinfo %DOUBANGO_HOME%/schemas/watcherinfo.xsd
::%COMMAND% /namespace:%NAMESPACE%.common_policy %DOUBANGO_HOME%/schemas/common-policy.xsd


REM -----------------------------
REM "Genarating OMA schemas..."
REM -----------------------------

::%COMMAND% /namespace:%NAMESPACE%.oma.xcap_directory %DOUBANGO_HOME%/schemas/xdm_xcapDirectory-v1_0.xsd
::%COMMAND% /namespace:%NAMESPACE%.oma.pres_content %DOUBANGO_HOME%/schemas/OMA-SUP-XSD_prs_presContent-V1_0-20081223-C.xsd
::%COMMAND% /namespace:%NAMESPACE%.oma.common_policy %DOUBANGO_HOME%/schemas/xdm_commonPolicy-v1_0.xsd
::%COMMAND% /namespace:%NAMESPACE%.oma.pres_rules %DOUBANGO_HOME%/schemas/OMA-SUP-XSD_prs_pubRules-V1_0-20081223-C.xsd






pause