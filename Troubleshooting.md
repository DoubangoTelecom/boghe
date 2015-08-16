

This wiki page help you troubleshooting issues related to the client.

# Troubleshooting "Boghe - IMS/RCS Client has stopped working" #

## Cheeking for .NET Framework 3.5 SP1 ##
To check that .NET framework 3.5 SP1 is correctly installed on your machine yous should:
  1. Download the .NET verifier from here: [http://boghe.googlecode.com/svn/branches/2.0/boghe/boghe-thirdparties/win32/netfx\_setupverifier\_new.zip](http://boghe.googlecode.com/svn/branches/2.0/boghe/boghe-thirdparties/win32/netfx_setupverifier_new.zip)
  1. Unzip the file and run **netfx\_setupverifier.exe**. From the dialog box (see below), select **.NET Framework 3.5 SP1** and press on **Verify Now**.

<table>
<tr>
<td><img src='http://boghe.googlecode.com/svn/branches/2.0/boghe/screenshots/netfx_setupverifier.png' /></td>
</tr>
<tr>
<td align='center'><i>.NET Framework Verifier</i></td>
</tr>
</table>

To download .NET Framework 3.5 SP1: http://www.microsoft.com/downloads/en/details.aspx?FamilyID=ab99342f-5d1a-413d-8319-81da479ab0d7&displaylang=en

## Checking for C++ Runtime ##
  1. Download Dependency walker (http://www.dependencywalker.com/) and Install it
  1. Open Dependency walker
  1. Drag&Drop **tinyWRAP.dll** into Dependency Walker
  1. If the C++ runtime is missing then, Dependency walker will fail to find **MSVCR90.DLL**.

To download C++ Runtime for x86: http://www.microsoft.com/downloads/en/details.aspx?familyid=A5C84275-3B97-4AB7-A40D-3802B2AF5FC2&displaylang=en


# Troubleshooting "Failed to start service manager" #

On Windows Vista and 7 this is most likely caused by insufficient rights to create files in the current folder. As a workaround right click on **BogheApp.exe** and select **Run as administrator**.