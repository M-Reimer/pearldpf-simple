
<image
 x="0" y="0"
 path="#LogoBackground#FrontmaskNormal#LogoBackgroundExt"
 condition="and(not({IsRecording}),not({VolumeIsMute}))"
/>
<image
 x="0" y="0"
 path="#LogoBackground#FrontmaskNormalMute#LogoBackgroundExt"
 condition="and(not({IsRecording}),{VolumeIsMute})"
/>
<image
 x="0" y="0"
 path="#LogoBackground#FrontmaskRecord#LogoBackgroundExt"
 condition="and({IsRecording},not({VolumeIsMute}))"
/>
<image
 x="0" y="0"
 path="#LogoBackground#FrontmaskRecordMute#LogoBackgroundExt"
 condition="and({IsRecording},{VolumeIsMute})"
/>
