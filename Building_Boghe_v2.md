
This wiki page is for Windows Desktop (XP, Vista, 7 and 8).

To build the source code you need Visual Studio 2008 or later with the .NET Framework 3.5 **SP1**.<br />
Please note that Boghe v2.x requires [Doubango v2.x](http://code.google.com/p/doubango/) <br />

## Supported systems ##
  * Windows XP SP3 with .NET Framework 3.5 **SP1**
  * Windows Vista, 7 and 8

## Thirdparties ##
  * [Platform/Windows SDK](https://www.google.fr/search?q=windows+sdk&rlz=1C1CHFX_frFR519FR519&oq=windows+sdk&aqs=chrome.0.57j0l3j62l2.2531j0&sourceid=chrome&ie=UTF-8): Depends on your system.
  * Microsoft DirectX SDK (Not needed if you're using [Windows SDK 8](http://msdn.microsoft.com/en-us/library/windows/desktop/hh852363.aspx)): http://www.microsoft.com/downloads/en/details.aspx?FamilyID=c72d9f1e-53f3-4747-8490-6801d8e8b4ef
After the installation you should add both the **lib** and **include** folders to the visual studio search paths like this:
  * Open "Tools -> Options -> Projects and Solutions -> VC++ Directories -> Include Files" and add **$(WindowsSdkDir)\include** and **$(DXSDK\_DIR)include**
  * Open "Tools -> Options -> Projects and Solutions -> VC++ Directories -> Library Files" and add **$(WindowsSdkDir)\lib** and **$(DXSDK\_DIR)lib\x86**
Please note that for old Platform SDK the varenv name is **PSDK\_DIR** instead of **WindowsSdkDir**. <br />
It's highly recommended to restart your PC after DirectX SDK installation.

## Building the source code ##
  * Create new directory named **myboghe**
```
mkdir myboghe
cd myboghe
```
  * Checkout doubango source code into **myboghe**. Important: The destination directory MUST be called **doubango**
```
svn checkout http://doubango.googlecode.com/svn doubango
```
  * Checkout Boghe source code into **myboghe**
```
svn checkout http://boghe.googlecode.com/svn boghe
```

<br />
To open & build all projects, open **myboghe\boghe\branches\2.0\boghe\boghe-win32.sln**

### Building standalone plugins (DLLs) ###
All standalone plugins are optional and provide different features. You should deploy them all regardless the target OS and let the loader choose the best ones. For example, both **pluginWinMF** and **pluginDirectShow** will be included in the installer and the loader will choose the first one for Win7/Win8 and the second for XP/Vista.
<table width='100%' border='1'>
<tr>
<td><b>Name</b></td>
<td><b>Features</b></td>
<td><b>Requires</b></td>
<td><b>MinOS</b></td>
<td><b>Comment</b></td>
</tr>

<tr>
<td>pluginWinMF</td>
<td>
<ul><li>Video Consumer (video display)<br>
</li><li>Video Producer (camera access)<br>
</li><li><a href='http://www.intel.com/content/www/us/en/architecture-and-technology/quick-sync-video/quick-sync-video-general.html'>Intel Quick Sync</a> H.264 encoder and decoder<br>
</li><li>Microsoft H.264 encoder and decoder<br>
</li><li>Video Converter (Chroma conversion, re-sizer, framerate adapter...)<br>
</td>
<td>
</li><li><a href='http://www.microsoft.com/en-us/download/details.aspx?id=3138'>Windows SDK 7.0</a> or later.<br>
</td>
<td>Win7</td>
<td>
</li><li>No need for Intel Quick Sync SDK because we only use the Media Foundation Transform.<br>
</li><li>Intel Quick Sync will only be used on PCs with Intel GPU and up to date drivers.<br>
</li><li>This plugin has higher priority than FFmpeg H.264 implementation.<br>
</li><li>Intel Quick Sync H.264 implementation has higher priority than MS impl.<br>
</li><li>To have support for Video you'll need at least this plugin or <b>pluginDirectShow</b>.<br>
</td>
</tr></li></ul>

<tr>
<td>pluginDirectShow</td>
<td>
<ul><li>Video Consumer (video display)<br>
</li><li>Video Producer (camera access)<br>
</td>
<td>
</li><li>Windows SDK 5.0 or later.<br>
</td>
<td>XP</td>
<td>
</li><li>To have support for Video you'll need at least this plugin or <b>pluginWinMF</b>.<br>
</td>
<tr></li></ul>

<tr>
<td>
pluginCUDA<br>
</td>
<td>
<ul><li>NVIDIA H.264 GPU accelerated codec<br>
</td>
<td>
</li><li><a href='https://developer.nvidia.com/cuda-downloads'>NVIDIA GPU Computing Toolkit</a>
</td>
<td>XP</td>
<td>
</li><li>This plugin has higher priority than <b>pluginWinMF</b> and FFmpeg H.264 implementations.<br>
</td>
</tr></li></ul>

<tr>
<td>pluginWASAPI</td>
<td>
<ul><li>Audio consumer (speaker playback)<br>
</li><li>Audio Producer (microphone recorder)<br>
</td>
<td>
</li><li>Windows SDK 6.0 or later.<br>
</td>
<td>Vista</td>
<td>
</li><li>The application has two built-in audio back-ends: DirectSound and WaveAPI. WASAPI is another back-end with very low audio latency (less than 3ms).<br>
</td>
</tr></li></ul>

<tr>
<td>pluginAudioDSP</td>
<td>
<ul><li>Microsoft Audio Resampler DSP<br>
</li><li>Microsoft Voice capture DSP (AEC, AGC, VAD, Noise suppression...)<br>
</td>
<td>
</li><li>Windows SDK 6.0 or later.<br>
</td>
<td>Vista</td>
<td>
</li><li>The application has two built-in audio resamplers and capture DSP: SpeexDSP and WebRTC. <b>pluginAudioDSP</b> offers highly optimized back-ends from Windows OS.<br>
</td></li></ul>

<table>

<h3>Building commercial version</h3>
To disable GPL code:<br>
If you are license owner then, you can build a non-GPL version of Doubango and Boghe by disabling GPL code.<br>
<br>
<ul><li>From Visual Studio, right click on <b>tinyDAV</b> project and select <b>Properties</b> -> <b>C/C++</b> -> <b>Preprocessor</b> -> <b>Preprocessor Definitions</b>.<br>
<ol><li>Disable <b>x264</b> by adding (or changing) <b>HAVE_H264</b> value to zero.<br>
<pre><code> HAVE_H264=0<br>
</code></pre>
</li><li>Disable G.729 codec if you don't have license by setting <b>HAVE_G729</b> value to zero.<br>
<pre><code>HAVE_G729=0<br>
</code></pre>
</li><li>Disable AMR codec if you don't have license by setting <b>HAVE_OPENCORE_AMR</b> value to zero.<br>
<pre><code>HAVE_OPENCORE_AMR=0<br>
</code></pre></li></ol></li></ul>

<ul><li>From Visual Studio, right click on <b>tinyDAV</b> project and select <b>Properties</b> -> <b>Linker</b> -> <b>Input</b> -> <b>Additional Dependencies</b>.<br>
<ol><li>Link to LGPL version of FFmpeg by replacing <b>libavcodec.a</b>, <b>libavutil.a</b>, <b>libswscale.a</b> and <b>libavcore.a</b> with <b>libavcodec-lgpl.a</b>, <b>libavutil-lgpl.a</b>, <b>libswscale-lgpl.a</b> and <b>libavcore-lgpl.a</b> respectively.<br>
</li><li>Remove <b>libx264.a</b> from the list.</li></ol></li></ul>

<h2>Technical help</h2>
Please check our <a href='http://code.google.com/p/webrtc2sip/issues/list'>issue tracker</a> or <a href='https://groups.google.com/group/doubango'>developer group</a> if you have any problem.<br>
<br>
For more information about third-parties libraries, please visit <a href='http://code.google.com/p/doubango/wiki/Licensing'>this page</a>.