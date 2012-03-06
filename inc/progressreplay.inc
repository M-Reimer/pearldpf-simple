
<variable id="ReplayProgress" default="0" value="div(mul({ReplayPositionIndex},320),{ReplayDurationIndex})" condition="gt({ReplayPositionIndex},0)"/>
<image
 x="0" width="#ReplayProgress" y="165" height="30" scale="fill"
 path="#ProgessBarForeground#ColorSchemeNormal#ProgessBarForegroundExt"
 condition="and(not({IsRecording}),not({VolumeIsMute}))"
/>
<image
 x="0" width="#ReplayProgress" y="165" height="30" scale="fill"
 path="#ProgessBarForeground#ColorSchemeNormalMute#ProgessBarForegroundExt"
 condition="and(not({IsRecording}),{VolumeIsMute})"
/>
<image
 x="0" width="#ReplayProgress" y="165" height="30" scale="fill"
 path="#ProgessBarForeground#ColorSchemeRecord#ProgessBarForegroundExt"
 condition="and({IsRecording},not({VolumeIsMute}))"
/>
<image
 x="0" width="#ReplayProgress" y="165" height="30" scale="fill"
 path="#ProgessBarForeground#ColorSchemeRecordMute#ProgessBarForegroundExt"
 condition="and({IsRecording},{VolumeIsMute})"
/>
