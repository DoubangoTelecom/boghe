This application contains all features supported by [Doubango framework](https://code.google.com/p/doubango/) with some extra features provided through standalone plugins.

<table width='100%' border='1'>
<tr>
<td><b>Name</b></td>
<td><b>Features</b></td>
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
<td>Win7</td>
<td>
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
<td>Vista</td>
<td>
</li><li>The application has two built-in audio resamplers and capture DSP: SpeexDSP and WebRTC. <b>pluginAudioDSP</b> offers highly optimized back-ends from Windows OS.<br>
</td></li></ul>

<table>