
@echo off

set DOUBANGO_HOME="C:\Projects\doubango\branches\2.0\doubango"

set BIN_DIR=C:\Program Files\Microsoft SDKs\Windows\v6.0A\bin
set NAMESPACE="BogheCore.Generated"

set COMMAND="%BIN_DIR%/xsd.exe" /c /order /out:Generated.tmp

REM -----------------------------
REM "Genarating IETF schemas..."
REM -----------------------------

%COMMAND% /namespace:%NAMESPACE%.im_iscomposing %DOUBANGO_HOME%/schemas/im-iscomposing.xsd
::%COMMAND% /namespace:%NAMESPACE%.regingo %DOUBANGO_HOME%/schemas/reginfo.xsd
::%COMMAND% /namespace:%NAMESPACE%.pidf %DOUBANGO_HOME%/schemas/pidf.xsd
::%COMMAND% /namespace:%NAMESPACE%.common_schema %DOUBANGO_HOME%/schemas/common-schema.xsd
::%COMMAND% /namespace:%NAMESPACE%.data_model %DOUBANGO_HOME%/schemas/data-model.xsd
::%COMMAND% /namespace:%NAMESPACE%.rpid %DOUBANGO_HOME%/schemas/rpid.xsd
::%COMMAND% /namespace:%NAMESPACE%.pidf_caps %DOUBANGO_HOME%/schemas/pidf-caps.xsd



REM -----------------------------
REM "Genarating OMA schemas..."
REM -----------------------------
::%COMMAND% /namespace:%NAMESPACE%.oma.pidf_pres %DOUBANGO_HOME%/schemas/prs_pidf_omapres-v1_0.xsd





pause