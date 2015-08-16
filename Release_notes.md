

## 2.0.173.972 RockStar ##
  * Align with Doubango 972
  * Adds support for NVIDIA CUDA H.264 codec (pluginCUDA)
  * Adds support for Intel Quick Sync H.264 codec (pluginWinMF)
  * Adds support for Microsoft H.264 codec (pluginWinMF)
  * Adds support for DXVA2 (pluginWinMF)
  * Adds support for Media Foundation video capture and rendering (pluginWinMF)
  * Adds Microsoft audio resampler DSP (pluginWinAudioDSP)
  * Adds support for Microsoft voice capture DSP (pluginWinAudioDSP)
  * Adds support for WASAPI back-end (pluginWASAPI)
  * Adds support for Microsoft Color Converter, Frame Rate Converter and Video Resizer DSPs (pluginWinMF)
  * Adds support Microsoft Video Processor MFT (pluginWinMF)
  * Fix video latency issues on DirectShow (now using Direct3D for immediate rendering and RGB32 instead of RGB24 for better quality). tinyDSHOW is now replaced with pluginDirectShow.
  * Fix sound latency issue on DirectSound playback module
  * ...and many bug fixes

## 2.0.132.808 ##
  * Align with Doubango 807
  * First version implementing all required feature to talk directly to Firefox Nightly

## 2.0.130.804 ##
  * Align with Doubango 804
  * Adds support for DTLS-SRTP (rfc5763 and rfc5764)
  * Complete support for rfc5939
  * and many other bug fix

## 2.0.121.757 ##
  * Align with Doubango 757 (check doubango release note for more information about bug fix)
  * Update media engine to allow interop with chrome 23.0.1271.64 m

## 2.0.112.744 ##
  * Align with Doubango 744
  * Improve noise suppression algorithm
  * Use VP8 v1.1.0
  * Fix issues

## 2.0.104.731 ##
  * Fix on-way video when calling Chrome 21.0.1180.60-m

## 2.0.104.715 ##
  * Fix [issue 48](https://code.google.com/p/boghe/issues/detail?id=48)
  * Fix installation issue (Remove previous version before new install)
  * Fix AEC (echo) issue introduced in previous release

## 2.0.100.699 ##
  * ICE (Interactive Connectivity Establishment): Full implementation of RFC 5245 for NAT Traversal
  * 1080p (Full HD): all platforms supports full HD video negotiation. Off course it depends on your CPU and network bandwidth. The preferred video size could be changed from the QoS/QoS screen.
  * Adaptive video jitter buffer: A video jitter buffer with advanced features like error correction, packet loss retransmission, delay recovery...
  * RTP/AVPF profile as per RFC 4585
  * RTCP: Full support for RTCP (3550) and many extensions such as: PLI (RFC 4585), SLI (RFC 4585), RPSI (RFC 4585), FIR (RFC 5104), NACK (4585), TMMBN (RFC 5104)...
  * rtcp-mux as per 5761
  * Negotiation of Generic Image Attributes in the SDP as per RFC 6236
  * Source-Specific Media Attributes in SDP as per draft-lennox-mmusic-sdp-source-attributes-01
  * Explicit Call Transfer as per 3GPP TS 24.629
  * SRTP