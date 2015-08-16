

To build the source code you need Visual Studio 2008 with the .NET Framework 3.5 **SP1**.

## Supported systems ##
  * Windows XP SP3 with .NET Framework 3.5 **SP1**
  * Windows Vista
  * Windows 7

## Thirdparties ##
  * Microsoft DirectX SDK: http://www.microsoft.com/downloads/en/details.aspx?FamilyID=c72d9f1e-53f3-4747-8490-6801d8e8b4ef
  * Windows Platform SDK: Depends on your system.

## Building the source code ##
  * Create new directory named **myboghe**
```
mkdir myboghe
cd myboghe
```
  * Checkout doubango source code into **myboghe**. Important: The destination directory MUST be called **doubango**
```
svn checkout http://doubango.googlecode.com/svn/trunk/ doubango
```
  * Checkout Boghe source code into **myboghe**
```
svn checkout http://boghe.googlecode.com/svn/trunk/ boghe
```

You **MUST** have something like this:
<br />
<br />
![http://boghe.googlecode.com/svn/branches/1.0/boghe/screenshots/Folders.png](http://boghe.googlecode.com/svn/branches/1.0/boghe/screenshots/Folders.png)
<br />
<br />
To open & build all projects, open **myboghe/boghe/boghe-win32.sln**