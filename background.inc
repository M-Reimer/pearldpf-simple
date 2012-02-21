
<image x="0" y="0" path="#LogoBackgroundLeft" condition="not({VolumeIsMute})"/>

<image x="276" y="0" path="#LogoBackgroundRight" condition="not({VolumeIsMute})"/>

<image x="0" y="0" path="#MuteLeft" condition="{VolumeIsMute}"/>

<image x="276" y="0" path="#MuteRight" condition="{VolumeIsMute}"/>

<image x="30" y="10" path="#LogoEmpty"/>

<image x1="0" y="165" path="#ProgessBarBackground"/>

<rectangle x="0" width="320" y="195" height="45" color="#BarBackground" filled="yes"/>


<block condition="{ExtDataIsAvailable:ALERT}">

	<image x="30" y="10" path="#LogoEmptyMessage"/>

	<text x="40" width="240" y="20" height="126" color="black" valign="middle" align="left" multiline="yes" font="FontMessage">
		{ExtDataItem:ALERT.TITLE}
		{ExtDataItem:ALERT.ORGIN}
		{ExtDataItem:ALERT.MESSAGE}
		{ExtDataItem:ALERT.TYPE}
		{ExtDataItem:ALERT.ICON}
	</text>

</block>

<block condition="and(not({ExtDataIsAvailable:ALERT}),and(lt({DateTime:%S},30),{SettingShowTimebar}))">
	<text x="40" width="240" y="20" height="126" color="black" valign="middle" align="center" multiline="no" font="FontClock">
		{DateTime:%H}:{DateTime:%M}
	</text>
</block>
