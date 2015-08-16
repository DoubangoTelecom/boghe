
This wiki page is for Windows Phone 8 or later.

## Getting the source code ##
The desktop (XP, Vista, 7, 8) and Mobile (WP8, RT, Surface) share the same base code which means you only need to follow this section if you never checked out the code.
  * Create new directory named **myboghe**
```
mkdir myboghe
cd myboghe
```
  * Checkout doubango source code into **myboghe**. Important: The destination directory MUST be named **doubango**
```
svn checkout http://doubango.googlecode.com/svn doubango
```
  * Checkout Boghe source code into **myboghe**
```
svn checkout http://boghe.googlecode.com/svn boghe
```

## Building the source code ##
Building **Boghe** for Windows Phone 8 is as easy as installing the [Windows Phone SDK 8.0](http://www.microsoft.com/en-us/download/details.aspx?id=35471), opening _myboghe\boghe\branches\2.0\boghe\boghe-wp8.sln_ and running **Boghe-wp8** target project. <br />
Please don't forget to change the CPU type (x86, WIN32, ARM) depending on your target type (Emulator or Device).

## Technical help ##
Please check our [issue tracker](http://code.google.com/p/webrtc2sip/issues/list) or [developer group](https://groups.google.com/group/doubango) if you have any problem.