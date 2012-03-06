
<block condition="ne(FontTextWidth('FontBar',{PresentTitle}),0)">
	<variable id="LiveProgress" default="0" value="div(mul({PresentProgress},320),{PresentDuration})" condition="gt({PresentProgress},0)"/>
	<image
	 x="0" width="#LiveProgress" y="165" height="30" scale="fill"
	 path="#ProgessBarForeground#ColorSchemeNormal#ProgessBarForegroundExt"
	 condition="and(not({IsRecording}),not({VolumeIsMute}))"
	/>
	<image
	 x="0" width="#LiveProgress" y="165" height="30" scale="fill"
	 path="#ProgessBarForeground#ColorSchemeNormalMute#ProgessBarForegroundExt"
	 condition="and(not({IsRecording}),{VolumeIsMute})"
	/>
	<image
	 x="0" width="#LiveProgress" y="165" height="30" scale="fill"
	 path="#ProgessBarForeground#ColorSchemeRecord#ProgessBarForegroundExt"
	 condition="and({IsRecording},not({VolumeIsMute}))"
	/>
	<image
	 x="0" width="#LiveProgress" y="165" height="30" scale="fill"
	 path="#ProgessBarForeground#ColorSchemeRecordMute#ProgessBarForegroundExt"
	 condition="and({IsRecording},{VolumeIsMute})"
	/>
</block>
