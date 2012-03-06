
<variable evaluate="once" id="StartTime" value="{DateTime}"/>

<block condition="and(gt(add(#StartTime,180),{DateTime}),eq(#Fontcheck,0))">

	<rectangle
	 x="0" y="195" width="320" height="45"
	 color="#ColorAttentionBackground" filled="yes"
	/>

	<image
	 x="5" y="200" width="35" height="35" scale="auto"
	 path="#MessageError"
	/>

	<text
	 x1="45" x2="314" y="195" height="45"
	 color="#ColorAttentionForeground"
	 valign="middle" align="left" multiline="yes" font="FontAttention"
	>
		#MessageAttention
	</text>

</block>
