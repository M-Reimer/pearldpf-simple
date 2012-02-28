
<image
 x1="0" y="165"
 path="#ProgessBarBackground"
 condition="not({IsRecording})"
/>
<rectangle
 x="0" y="195" width="320" height="45"
 color="#ColorBarBackgroundNormal" filled="yes"
 condition="not({IsRecording})"
/>

<image
 x1="0" y="165"
 path="#ProgessBarRecBackground"
 condition="{IsRecording}"
/>
<rectangle x="0" y="195" width="320" height="45"
 color="#ColorBarBackgroundRecord" filled="yes"
 condition="{IsRecording}"
/>


<block condition="{ExtDataIsAvailable:ALERT}">

	<rectangle
	 x="30" y="10" width="260" height="146"
	 color="#ColorMessageError" filled="yes"
	 condition="eq({ExtDataItem:ALERT.TYPE},'ERROR')"
	/>
	<rectangle
	 x="30" y="10" width="260" height="146"
	 color="#ColorMessageWarning" filled="yes"
	 condition="eq({ExtDataItem:ALERT.TYPE},'WARNING')"
	/>
	<rectangle
	 x="30" y="10" width="260" height="146"
	 color="#ColorMessageWarning" filled="yes"
	 condition="eq({ExtDataItem:ALERT.TYPE},'INFO')"
	/>
	<rectangle
	 x="30" y="10" width="260" height="146"
	 color="#ColorMessageBlank" filled="yes"
	 condition="not(or(or(eq({ExtDataItem:ALERT.TYPE},'ERROR'),eq({ExtDataItem:ALERT.TYPE},'WARNING')),eq({ExtDataItem:ALERT.TYPE},'INFO')))"
	/>

	<image
	 x="40" y="20" width="48" height="48" scale="auto"
	 path="{ExtDataItem:ALERT.ICON}"
	 condition="file({ExtDataItem:ALERT.ICON})"
	/>
	<block condition="not(file({ExtDataItem:ALERT.ICON}))">

		<image
		 x="40" y="20" width="48" height="48" scale="auto"
		 path="#MessageError"
		 condition="eq({ExtDataItem:ALERT.TYPE},'ERROR')"
		/>
		<image
		 x="40" y="20" width="48" height="48" scale="auto"
		 path="#MessageWarning"
		 condition="eq({ExtDataItem:ALERT.TYPE},'WARNING')"
		/>
		<image
		 x="40" y="20" width="48" height="48" scale="auto"
		 path="#MessageInformation"
		 condition="eq({ExtDataItem:ALERT.TYPE},'INFO')"
		/>
		<image
		 x="40" y="20" width="48" height="48" scale="auto"
		 path="#MessageHelp"
		 condition="not(or(or(eq({ExtDataItem:ALERT.TYPE},'ERROR'),eq({ExtDataItem:ALERT.TYPE},'WARNING')),eq({ExtDataItem:ALERT.TYPE},'INFO')))"
		/>

	</block>

	<text
	 x="93" width="192" y="22" height="20"
	 color="#ColorMessageForegroundTitle"
	 valign="middle" align="left" font="FontMessageTitle"
	 altcondition="not({ExtDataIsAvailable:ALERT.TITLE})" alttext="#MessageAlertNoTitle"
	>
		{ExtDataItem:ALERT.TITLE}
	</text>
	<text
	 x="93" width="192" y="44" height="20"
	 color="#ColorMessageForegroundOrgin"
	 valign="middle" align="left" font="FontMessageSubTitle"
	 altcondition="not({ExtDataIsAvailable:ALERT.ORGIN})" alttext="#MessageAlertNoOrgin"
	>
		#MessageAlertFrom {ExtDataItem:ALERT.ORGIN}
	</text>
	<text
	 x="40" width="240" y1="73" y2="151"
	 color="#ColorMessageForegroundText"
	 valign="middle" align="left" multiline="yes" font="FontMessageSubTitle"
	 altcondition="not({ExtDataIsAvailable:ALERT.MESSAGE})" alttext="#MessageAlertNoText"
	>
		{ExtDataItem:ALERT.MESSAGE}
	</text>

</block>


<block condition="and(not({ExtDataIsAvailable:ALERT}),and(lt({DateTime:%S},30),{SettingShowTimebar}))">

	<rectangle
	 x="30" width="260" y="10" height="146"
	 color="#ColorMessageBlank" filled="yes"
	/>
	<text
	 x="40" width="240" y="20" height="96"
	 color="#ColorClockForeground"
	 valign="middle" align="center" font="FontClock"
	>
		{DateTime:%H}:{DateTime:%M}
	</text>
	<text
	 x="40" width="240" y="116" height="30"
	 color="#ColorClockForeground"
	 valign="middle" align="left" font="FontClockDay"
	>
		{DateTime:%A}
	</text>
	<text
	 x="40" width="240" y="116" height="30"
	 color="#ColorClockForeground"
	 valign="middle" align="right" font="FontClockDate"
	>
		{DateTime:%d}.{DateTime:%m}.{DateTime:%Y}
	</text>

</block>

<image
 x="0" y="0"
 path="#LogoBackground"
 condition="not({VolumeIsMute})"
/>
<image
 x="0" y="0"
 path="#LogoBackgroundMute"
 condition="{VolumeIsMute}"
/>
