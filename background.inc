
<image x="0" y="0" path="#LogoBackgroundLeft" condition="not({VolumeIsMute})"/>

<image x="276" y="0" path="#LogoBackgroundRight" condition="not({VolumeIsMute})"/>

<image x="0" y="0" path="#MuteLeft" condition="{VolumeIsMute}"/>

<image x="276" y="0" path="#MuteRight" condition="{VolumeIsMute}"/>

<image x="30" y="10" path="#LogoEmpty"/>

<image x1="0" y="165" path="#ProgessBarBackground" condition="not({IsRecording})"/>
<image x1="0" y="165" path="#ProgessBarRecBackground" condition="{IsRecording}"/>

<rectangle x="0" width="320" y="195" height="45" color="#BarBackground" filled="yes" condition="not({IsRecording})"/>
<rectangle x="0" width="320" y="195" height="45" color="#BarRecBackground" filled="yes" condition="{IsRecording}"/>


<block condition="{ExtDataIsAvailable:ALERT}">

	<image x="30" y="10" path="#LogoEmptyError" condition="eq({ExtDataItem:ALERT.TYPE},'ERROR')"/>
	<image x="30" y="10" path="#LogoEmptyWarning" condition="eq({ExtDataItem:ALERT.TYPE},'WARNING')"/>
	<image x="30" y="10" path="#LogoEmptyMessage" condition="eq({ExtDataItem:ALERT.TYPE},'INFO')"/>
	<image x="30" y="10" path="#LogoEmpty" condition="not(or(or(eq({ExtDataItem:ALERT.TYPE},'ERROR'),eq({ExtDataItem:ALERT.TYPE},'WARNING')),eq({ExtDataItem:ALERT.TYPE},'INFO')))"/>

	<image x="40" y="20" width="48" height="48" scale="auto" path="{ExtDataItem:ALERT.ICON}" condition="file({ExtDataItem:ALERT.ICON})"/>
	<block condition="not(file({ExtDataItem:ALERT.ICON}))">
		<image x="40" y="20" width="48" height="48" scale="auto" path="#MessageError" condition="eq({ExtDataItem:ALERT.TYPE},'ERROR')"/>
		<image x="40" y="20" width="48" height="48" scale="auto" path="#MessageWarning" condition="eq({ExtDataItem:ALERT.TYPE},'WARNING')"/>
		<image x="40" y="20" width="48" height="48" scale="auto" path="#MessageInformation" condition="eq({ExtDataItem:ALERT.TYPE},'INFO')"/>
		<image x="40" y="20" width="48" height="48" scale="auto" path="#MessageHelp" condition="not(or(or(eq({ExtDataItem:ALERT.TYPE},'ERROR'),eq({ExtDataItem:ALERT.TYPE},'WARNING')),eq({ExtDataItem:ALERT.TYPE},'INFO')))"/>
	</block>

	<text x="93" width="192" y="22" height="20" color="black" valign="middle" align="left" font="FontMessageTitle">
		{ExtDataItem:ALERT.TITLE}
	</text>
	<text x="93" width="192" y="44" height="20" color="black" valign="middle" align="left" font="FontMessageSubTitle">
		von {ExtDataItem:ALERT.ORGIN}
	</text>
	<text x="40" width="240" y1="73" y2="151" color="black" valign="middle" align="left" multiline="yes" font="FontMessageSubTitle">
		{ExtDataItem:ALERT.MESSAGE}
	</text>

</block>

<block condition="and(not({ExtDataIsAvailable:ALERT}),and(lt({DateTime:%S},30),{SettingShowTimebar}))">
	<text x="40" width="240" y="20" height="126" color="black" valign="middle" align="center" multiline="no" font="FontClock">
		{DateTime:%H}:{DateTime:%M}
	</text>
</block>