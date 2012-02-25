
<block condition="or(or(ne({ScreenWidth},320),ne({ScreenHeight},240)),not(QueryFeature('iscolour')))">

	<rectangle
	 x="0" width="{ScreenWidth}" y="0" height="{ScreenHeight}"
	 color="#ColorDisplayErrorBackground" filled="yes"
	/>

	<text
	 x="5" width="sub({ScreenWidth},10)" y="0" height="{ScreenHeight}"
	 color="#ColorDisplayErrorForeground"
	 valign="middle" align="center" multiline="yes" font="FontDisplayError"
	>
		#MessageDisplayError
	</text>

</block>
