$(document).ready(function() {
	$("#child_window").hide();
	browserRedirect();//调用判断当前访问页面是手机端还是移动端
});

function browserRedirect() {
	var sUserAgent = navigator.userAgent.toLowerCase();
	var bIsIpad = sUserAgent.match(/ipad/i) == "ipad";
	var bIsIphoneOs = sUserAgent.match(/iphone os/i) == "iphone os";
	var bIsMidp = sUserAgent.match(/midp/i) == "midp";
	var bIsUc7 = sUserAgent.match(/rv:1.2.3.4/i) == "rv:1.2.3.4";
	var bIsUc = sUserAgent.match(/ucweb/i) == "ucweb";
	var bIsAndroid = sUserAgent.match(/android/i) == "android";
	var bIsCE = sUserAgent.match(/windows ce/i) == "windows ce";
	var bIsWM = sUserAgent.match(/windows mobile/i) == "windows mobile";
	if (!(bIsIpad || bIsIphoneOs || bIsMidp || bIsUc7 || bIsUc || bIsAndroid || bIsCE || bIsWM) ){
		//电脑端
		//加载css
		var linkNode = document.createElement("link");
		linkNode.setAttribute("rel","stylesheet");
		linkNode.setAttribute("type","text/css");
		linkNode.setAttribute("href","css/my.css");
		document.head.appendChild(linkNode);
		//加载js
		//var scriptNode = document.createElement("script");
		//scriptNode.setAttribute("type", "text/javascript");
		//scriptNode.setAttribute("src", "../../js/index.min.js");
		//document.head.appendChild(scriptNode);
	}else{
		//手机端
		//加载css
		var oMeta = document.createElement('meta');
		oMeta.name = 'viewport';
		oMeta.content = 'width=device-width, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0, user-scalable=no';
		document.getElementsByTagName('head')[0].appendChild(oMeta);
		var linkNode = document.createElement("link");
		linkNode.setAttribute("rel","stylesheet");
		linkNode.setAttribute("type","text/css");
		linkNode.setAttribute("href","css/my_phone.css");
		document.head.appendChild(linkNode);
		//加载js
		//var scriptNode = document.createElement("script");
		//scriptNode.setAttribute("type", "text/javascript");
		//scriptNode.setAttribute("src", "../../js/phone.min.js");
		//document.head.appendChild(scriptNode);
	}
}

var state = 0;
var flag = 0;

// 跳转 说明页面
function show_help()
{
	if(state == 0)
	{
		state = 1;
		$("#child_window").show(3000);
	}
	else
	{
		$("#child_window").hide(3000);
		state = 0;
	}
	//window.open("help.html");
}

// 播放对应音频
function reply(str)
{
	document.body.style.backgroundImage = "url('img/1.jpg')";
	var common_head = "./sound/";
	var mp3 = common_head + str;
	var mp3 = new Audio(mp3);
	mp3.play(); //播放 mp3这个音频对象
}

// 播放对应音频
function reply2(str)
{
	document.body.style.backgroundImage = "url('img/saber.jpg')";
	var common_head = "./sound/";
	var mp3 = common_head + str;
	var mp3 = new Audio(mp3);
	mp3.play(); //播放 mp3这个音频对象
}

// 点击发送按钮
function send_info()
{
	//alert(window.location.pathname);
	// 获取输入框内容
	var info = document.getElementById('info').value;
	document.getElementById('info').value = "";
	
	//alert(info);
	
	// sound下音频文件路径二维数组
	var reply_info = [
		["1-1/不能中止命令,我就是这样被制造的.mp3", "1-1/初次见面,我是玩赏用人造天使.mp3", "1-1/-对卡片的解释.mp3",
		"1-1/铭刻开始.mp3", "1-1/什么都可以.mp3", "1-1/是的.mp3", "1-1/无法中止命令.mp3", "1-1/早上好,主人.mp3"
		],
		["1-2/不，没事的.mp3", "好的，主人2.mp3", "1-2/好的-主人.mp3", "1-2/那主人，这个给你.mp3", "1-2/胖次是吗。。。.mp3",
		"1-2/是的，这张卡片自动结束了，已经没事了.mp3", "1-2/锁链的应对措施.mp3", "1-2/遇到麻烦了吗，主人.mp3", "1-2/主人？.mp3"
		],
		["1-3/对不起.mp3", "好的，主人.mp3", "1-3/好的，主人2.mp3", "1-3/好的，主人3.mp3", "1-3/开心？开心.mp3", "1-3/是的.mp3",
		"1-3/是的2.mp3", "1-3/是的3.mp3", "1-3/我和主人在一起，怎么说呢，心有种轻飘飘的感觉.mp3", "1-3/我吗.mp3",
		"1-3/我是以24马赫的速度飞过去的.mp3", "1-3/这是作业.mp3", "1-3/主人和我一起开心吗.mp3", "1-3/主人为什么在笑呢.mp3"
		],
		["1-4/但是，主人他.mp3", "1-4/朋友？我没有朋友.mp3", "1-4/在家里面.mp3", "1-4/主人遇到麻烦了.mp3"
		],
		["1-5/好的，主人.mp3", "1-5/好的，主人2.mp3", "1-5/好的.mp3", "1-5/在的，主人.mp3"
		],
		["1-6/啊.mp3", "诶.mp3", "1-6/嗯？.mp3", "1-6/那个，这个翅膀是可变式羽翼.mp3", "1-6/那个，主人，睡觉是怎么一回事.mp3",
		"1-6/是.mp3", "1-6/是2.mp3", "1-6/是3.mp3", "1-6/是4.mp3", "1-6/是5.mp3", "1-6/一直在主人身旁，在主人睡醒前，一直.mp3",
		"1-6/这样吗，主人.mp3"
		],
		["1-7/没事的，人的背后有看不见的，很大的翅膀.mp3", "1-7/是，主人.mp3", "1-7/是，主人2.mp3", "1-7/是，主人3.mp3",
		"1-7/是.mp3", "1-7/这些话是什么，不知道是什么意思却很让人在意.mp3"
		],
		["1-8/不，没想到自己也.mp3", "1-8/诶？.mp3", "1-8/没事的.mp3", "1-8/是，主人.mp3", "1-8/是.mp3",
		"1-8/我是玩赏用天使，我要回到主人的身边.mp3", "1-8/主人明明叫我安静待着的，主人.mp3"
		],
		["1-9/人类是说谎的生物，我是普通的人类.mp3", "1-9/是.mp3", "1-9/我什么也不知道.mp3", "1-9/我是，人类.mp3",
		"1-9/我想在主人身边，从今往后.mp3", "1-9/要更像人类才行.mp3"
		],
		["1-10/fallen_down.mp3", "1-10/班上的朋友怎么都拜托我帮忙.mp3", "1-10/不，是因为大家的演奏，我才能唱的.mp3",
		"1-10/对不起，主人.mp3", "1-10/对了，加油努力，让主人表扬我的话，肯定.mp3", "1-10/欢迎光临，主人.mp3",
		"1-10/没什么.mp3", "1-10/妮姆芙，这里的天空很广阔哦.mp3", "1-10/我是主人最讨厌的，兵器.mp3",
		"1-10/我也想牵主人的手.mp3", "1-10/我一点都帮不上主人的忙.mp3", "1-10/怎样才能牵主人的手呢.mp3",
		"1-10/这样真的好吗，过得幸福.mp3"
		],
		["1-11/非常可爱哦，主人.mp3", "1-11/没那回事.mp3", "1-11/是.mp3", "1-11/说谎不行吗.mp3", "1-11/我很高兴，楚原把我当普通人来对待.mp3",
		"1-11/我是主人最讨厌的兵器，这样瞒住主人真的好吗.mp3", "1-11/我有事情瞒着主人.mp3", "1-11/我有重要的事情要说.mp3",
		"1-11/要找主人说出真相才行.mp3", "1-11/这是主人的命令呢.mp3", "1-11/主人！.mp3", "1-11/主人，请.mp3", "1-11/主人在想些什么呢.mp3"
		],
		["1-12/（看见主人和妮姆芙牵手）.mp3", "1-12/niali.mp3", "1-12/nidali.mp3", "1-12/nigoli.mp3", "1-12/并且最近，一直在为什么烦恼的样子.mp3",
		"1-12/不，还没有.mp3", "1-12/不简单，因为，我从没见过，妮姆芙你笑过.mp3", "1-12/赤色的花，白色的花.mp3", "1-12/从来没有看到过.mp3",
		"1-12/从前，一直，没看到，妮姆芙，笑过.mp3", "1-12/动力炉，好疼.mp3", "1-12/动力炉百分比机能正常.mp3", "1-12/对不起，主人.mp3",
		"1-12/呃.mp3", "1-12/诶.mp3", "1-12/诶2.mp3", "1-12/恩.mp3", "1-12/恩？.mp3", "1-12/好不容易的约会，我一点也没有笑.mp3", "1-12/呵嗯.mp3",
		"1-12/和主人的约会很开心，但总感觉不对劲.mp3", "1-12/脸很红呦，主人.mp3", "1-12/那是为什么，我也不清楚.mp3", "1-12/是，主人.mp3",
		"1-12/是.mp3", "1-12/是因为我是战斗用的原因.mp3", "1-12/谁知道呢.mp3", "1-12/万岁是吗.mp3", "1-12/为什么，不会笑呢.mp3", 
		"1-12/早上好，主人.mp3", "1-12/怎么回事，我有点跃跃欲试.mp3", "1-12/怎么了吗.mp3", "1-12/这样如何，主人.mp3", "1-12/只要表情？.mp3", 
		"1-12/主人，很开心的样子.mp3", "1-12/主人，他会，感到高兴.mp3", "1-12/主人，他会，感到高兴2.mp3", "1-12/主人，这是.mp3"
		],
		["1-13/（道别）.mp3", "1-13/（惊吓）.mp3", "1-13/（笑）.mp3", "1-13/model空之女王ON.mp3", "1-13/niali.mp3",
		"1-13/type阿尔法，伊卡洛斯，出击.mp3", "1-13/不用，但是.mp3", "1-13/对不起.mp3", "1-13/诶.mp3",
		"1-13/呵嗯.mp3", "1-13/就是，那个，去买个东西.mp3", "1-13/可变式羽翼，限制解除.mp3", "1-13/没什么.mp3",
		"1-13/目标多半是我，我将以主人讨厌的兵器战斗，不能再回到主人的身边，不能再一次.mp3", "1-13/那是？.mp3",
		"1-13/妮姆芙的信号.mp3", "1-13/你醒了吗，主人.mp3", "1-13/是，主人.mp3", "1-13/是.mp3", "1-13/是2.mp3", "1-13/是3.mp3",
		"1-13/是的，昨天一晚上没回来.mp3", "1-13/太好了.mp3", "1-13/我知道.mp3", "1-13/怎么了.mp3", "1-13/这个.mp3",
		"1-13/主人，非常抱歉，一直以来欺骗你.mp3", "1-13/主人.mp3", "1-13/主人2.mp3", "1-13/最喜欢你了，我的主人，永别了.mp3"
		],
		["1-14/没事的，不管发生什么，主人还是我的主人，从今往后一直都是.mp3", "1-14/人造天使，翅膀吸水会变重的.mp3",
		"1-14/天降之物F.mp3", "一切正常，主人.mp3", "1-14/泳池被禁止使用，去换衣服了.mp3", "1-14/这是主人的命令.mp3",
		"1-14/主人（关心）.mp3", "1-14/主人，精神不稳定的话，变身会.mp3"
		],
		// 14
		["2-1/早上好，主人", "2-1/诶.mp3", "2-1/我开动了.mp3"
		],
		["2-2/主人，茶泡好了.mp3", "2-2/主人去山上了.mp3", "2-2/主人好像在这里.mp3", "2-2/我去看看主人的状况.mp3", "2-2/主人，这是那么危险的东西吗.mp3",
		"2-2/了解，对主人有害的东西，进行消除.mp3", "2-2/是，主人.mp3", "2-2/主人没什么事，但没什么精神.mp3", "2-2/欢迎回来，主人.mp3",
		"2-2/要洗澡吗.mp3", "2-2/主人没什么精神，难道不应该把那个消除吗.mp3", "2-2/卡片启动.mp3", "2-2/太好了，主人感到幸福的话，我就足够了.mp3"
		],
		["2-3/主人有危险.mp3"
		],
		["2-4/我的雷达性能没有妮姆芙的高.mp3", "2-4/现在开始准备.mp3", "2-4/别勉强自己.mp3", "2-4/Astraea的情况又怎么样呢.mp3", "2-4/应该是受西纳普斯的主人的命令才来这里的.mp3",
		"2-4/希望她不会痛苦.mp3", "2-4/真舒服.mp3", "2-4/你在做什么，Astraea.mp3", "2-4/不管是谁下的命令，一旦主人有什么三长两短，我决不轻饶.mp3"
		],
		["2-5/为什么.mp3", "2-5/啊.mp3", "2-5/给.mp3", "2-5/这是什么.mp3", "2-5/主人，您还好吗.mp3",
		"2-5/不管发生什么，我都会在主人身边.mp3"
		],
		["2-6/是，主人.mp3", "2-6/好的，主人.mp3"
		],
		// 20
		["2-7/你怎么了，主人.mp3", "2-7/主人和妮姆芙.mp3", "2-7/为什么会有这样的心情呢.mp3", "2-7/动力炉好疼.mp3", "2-7/为什么会有这种心情完整句子.mp3"
		],
		["2-8/妮姆芙.mp3", "2-8/不可原谅，可变式羽翼，制御解除，锁定敌方不明机体，Artemis.mp3", "2-8/命令.mp3", "2-8/快逃.mp3", "2-8/对不起，主人.mp3",
		"2-8/主人的人造天使.mp3", "2-8/是.mp3", "2-8/我不知道，我也不知道爱是什么.mp3", "2-8/阿斯特莱雅，你知道什么是爱吗", "2-8/我不知道.mp3",
		"2-8/不知道爱是什么.mp3", "2-8/我也和她一样.mp3", "2-8/好想赶快见到主人.mp3", "2-8/是，主人.mp3"
		],
		["2-9/是的.mp3", "2-9/好像很开心.mp3", "2-9/我这段时间都不想下水.mp3", "2-9/chaos.mp3", "2-9/回老家求婚，是什么意思呢.mp3",
		"2-9/爱是什么.mp3", "2-9/我不明白，到底什么是爱.mp3", "2-9/不过，动力炉却时不时地作痛，让我很难受.mp3", "2-9/是.mp3", "2-9/求婚.mp3",
		"2-9/永远在一起.mp3", "2-9/学习爱.mp3", "2-9/主人.mp3", "2-9/主人你上次的求婚.mp3", "2-9/之前在庙会的时候.mp3",
		"2-9/要我去买东西吗.mp3", "2-9/想先摸摸他们.mp3", "2-9/恩.mp3", "2-9/想在你身边.mp3", "2-9/主人你刚才是不是说我们会永远在一起.mp3",
		"2-9/对.mp3", "2-9/主人2.mp3", "2-9/惹主人生气了.mp3", "2-9/不是实物看来真的不行.mp3", "2-9/诶，可是.mp3",
		"2-9/我知道了.mp3", "2-9/有了.mp3", "2-9/主人，我.mp3", "2-9/就像守形学长说的那样，主人很高兴等.mp3", "2-9/为什么呢.mp3",
		"2-9/明明这只是我想要的东西，并不是主人想要的.mp3", "2-9/主人，你刚才是不是说我们会永远在一起.mp3", "2-9/那难道是求婚吗.mp3"
		],
		["2-10/主人，他.mp3", "2-10/一直没从厕所出来.mp3", "2-10/为了避免这种情况的发生，在温水洗菊马桶里安装了遥控装置.mp3", "2-10/人类是很怕烫的.mp3", "2-10/一直没从壁橱里出来.mp3",
		"2-10/我对今早的事进行了反省.mp3", "2-10/太好了.mp3", "2-10/恩，我有准备.mp3", "2-10/没事，这样就行.mp3", "2-10/被主人训斥了.mp3",
		"2-10/是的.mp3", "2-10/结婚.mp3", "2-10/楚原小姐，那个.mp3", "2-10/只要求婚后，就会结婚吗.mp3", "2-10/结婚仪式.mp3",
		"2-10/那个，主人向我求.mp3", "2-10/啊，没什么.mp3", "2-10/刚才到底是什么.mp3", "2-10/主人不会有事吧.mp3", "2-10/这是什么，明明那时候，完全没有这样的感觉.mp3",
		"2-10/看来我的动力炉，真的出了点毛病，主人.mp3", "2-10/动力炉过热，自动修复程序启动，过热原因推测为，关于樱井智树的记忆，自动删除开始.mp3"
		],
		["2-11/爱？爱是什么我不知道，但是，但是。。。.mp3", "2-11/分析数据接收完毕，阿尔忒密斯发射.mp3", "2-11/刚才是谁.mp3", "2-11/乖乖呆在那里别动，aegis展开.mp3", "2-11/可变式羽翼限制解除，阿尔忒密斯全力发射.mp3",
		"2-11/没事的.mp3", "2-11/是，主人.mp3", "2-11/我们不是因为知道了爱才变弱的。。。.mp3", "2-11/这是去动物园那次，这是夏日祭那次（忘记）.mp3"
		],
		["2-12/knock，门，敲打.mp3", "2-12/knock.mp3", "2-12/啊哦，忘记询问了.mp3", "2-12/变形作业马上开始.mp3", "2-12/得尽快商量.mp3",
		"2-12/对了，厕所要敲门.mp3", "2-12/诶.mp3", "2-12/恩，没事，谢谢.mp3", "2-12/非常抱歉，主人.mp3", "2-12/求婚噶.mp3",
		"2-12/如你所见.mp3", "2-12/是，主人.mp3", "2-12/是，主人2.mp3", "2-12/是.mp3", "2-12/是2.mp3",
		"2-12/是3.mp3", "2-12/想起来了，被主人求婚的事.mp3", "2-12/想起来了.mp3", "2-12/知道主人在哪里吗.mp3", "2-12/主人，没事吧.mp3",
		"2-12/主人，其实，我想找你商量一下求婚的事.mp3", "2-12/主人，我有事找你商量.mp3", "2-12/主人？.mp3"
		]
	];
	
	// FGO主题
	var reply_info2 = [
		["fgo/saber宝具.mp3"]
	];
	
	// A
	if(info.indexOf("啊") != -1)
	{
		if(info.indexOf("啊？你在说什么") != -1)
		{
			//从来没有看到过
			$("#reply_span").text("从来没有看到过。从前，一直，没看到，妮姆芙，笑过");
			reply(reply_info[11][8]);
			sleep(2);
			//从前，一直，没看到，妮姆芙，笑过
			reply(reply_info[11][9]);
			return;
		}
		if(info.indexOf("啊，焦成一团黑了") != -1)
		{
			//对不起
			$("#reply_span").text("对不起");
			reply(reply_info[12][7]);
			return;
		}
		if(info.indexOf("啊嘞，大家呢") != -1)
		{
			//泳池被禁止使用，去换衣服了
			$("#reply_span").text("泳池被禁止使用，去换衣服了");
			reply(reply_info[13][4]);
			return;
		}
		if(info.indexOf("啊拉，又走不见了") != -1)
		{
			$("#reply_span").text("得尽快商量");
			reply(reply_info[25][4]);
			return;
		}
	}
	
	if(info.indexOf("阿") != -1)
	{
		if(info.indexOf("阿尔法") != -1)
		{
			$("#reply_span").text("可变式羽翼限制解除，阿尔忒密斯全力发射");
			reply(reply_info[24][4]);
			return;
		}
		if(info.indexOf("阿尔法，全都想起来了吗") != -1)
		{
			$("#reply_span").text("想起来了");
			reply(reply_info[25][17]);
			return;
		}
	}
	
	// B
	if(info.indexOf("把") != -1)
	{
		if(info.indexOf("把西瓜带回来了吗") != -1)
		{
			//是的3
			$("#reply_span").text("是的");
			reply(reply_info[2][7]);
			return;
		}
		if(info.indexOf("把那座山轰平吧") != -1)
		{
			//现在开始准备
			$("#reply_span").text("现在开始准备");
			reply(reply_info[17][1]);
			return;
		}
	}
	
	if(info.indexOf("不") != -1)
	{
		if(info.indexOf("不觉得麻烦吗") != -1)
		{
			//不，没事的
			$("#reply_span").text("不，没事的");
			reply(reply_info[1][0]);
		}
		if(info.indexOf("不会的是吧") != -1)
		{
			//是的2
			$("#reply_span").text("是的");
			reply(reply_info[2][6]);
		}
		if(info.indexOf("不要太在意") != -1)
		{
			//好的
			$("#reply_span").text("好的");
			reply(reply_info[4][2]);
		}
		if(info.indexOf("不能勉强说谎哦") != -1)
		{
			//说谎不行吗
			$("#reply_span").text("说谎不行吗");
			reply(reply_info[10][3]);
		}
		return;
	}
	
	if(info.indexOf("拜托") != -1)
	{
		if(info.indexOf("拜托你了，伊卡洛斯，救救妮姆芙") != -1)
		{
			//type阿尔法，伊卡洛斯，出击
			$("#reply_span").text("type阿尔法，伊卡洛斯，出击");
			reply(reply_info[12][5]);
		}
		return;
	}
	
	// C
	if(info.indexOf("楚原") != -1)
	{
		if(info.indexOf("楚原呢") != -1)
		{
			//在家里面
			$("#reply_span").text("在家里面");
			reply(reply_info[3][2]);
		}
		return;
	}
	
	if(info.indexOf("才") != -1)
	{
		if(info.indexOf("才不是") != -1)
		{
			//是
			$("#reply_span").text("是");
			reply(reply_info[5][6]);
		}
		return;
	}
	
	if(info.indexOf("差") != -1)
	{
		if(info.indexOf("差不多该回去了") != -1)
		{
			//是
			$("#reply_span").text("是");
			reply(reply_info[5][8]);
		}
		return;
	}
	
	if(info.indexOf("赤色的花，白色的花") != -1)
	{
		//赤色的花，白色的花
		$("#reply_span").text("赤色的花，白色的花");
		reply(reply_info[11][7]);
		return;
	}
	
	if(info.indexOf("厕所的规则都不知道，到底有多没常识呀你") != -1)
	{
		$("#reply_span").text("非常抱歉，主人");
		reply(reply_info[25][8]);
		return;
	}
	
	// D
    if(info.indexOf("都") != -1)
    {
        if(info.indexOf("都是伊卡洛斯的功劳呢") != -1)
        {
            $("#reply_span").text("不，是因为大家的演奏，我才能唱的");
			reply(reply_info[9][2]);
            return;
        }
    }

    if(info.indexOf("对") != -1)
    {
        if(info.indexOf("对，只要表情就行") != -1)
        {
            $("#reply_span").text("这样如何，主人");
			reply(reply_info[11][32]);
            return;
        }
    }

    if(info.indexOf("打") != -1)
    {
        if(info.indexOf("打电话拜托在买东西的智树这样的话") != -1)
        {
            $("#reply_span").text("不用，但是");
			reply(reply_info[12][6]);
            return;
        }
    }

    if(info.indexOf("多") != -1)
    {
        if(info.indexOf("多亏了你，现在可以拯救朋友了") != -1)
        {
            $("#reply_span").text("是，主人");
			reply(reply_info[12][17]);
            return;
        }
    }
	
	if(info.indexOf("但") != -1)
    {
        if(info.indexOf("但是用不了厕所不是很叫人困扰吗") != -1)
        {
            $("#reply_span").text("为了避免这种情况的发生，在温水洗菊马桶里安装了遥控装置");
			reply(reply_info[23][2]);
            return;
        }
		if(info.indexOf("但是吃饭又该怎么办呢，要是继续准备宅下去的话有什么准备呢") != -1)
        {
            $("#reply_span").text("恩，我有准备");
			reply(reply_info[23][7]);
            return;
        }
    }

    // E

    // F
    if(info.indexOf("放") != -1)
    {
        if(info.indexOf("放开我的手") != -1)
        {
            $("#reply_span").text("没事的，人的背后有看不见的，很大的翅膀。在那其中，主人有很大的翅膀，我知道的，不知道怎么说，但我知道...主人被天空召唤着");
			reply(reply_info[6][0]);
            return;
        }
    }

    if(info.indexOf("fallen down") != -1 || info.indexOf("FALLEN DOWN") != -1)
    {
        $("#reply_span").text("曲名为：《fallen down》");
		reply(reply_info[9][0]);
        return;
    }

	if(info.indexOf("分") != -1)
	{
	    if(info.indexOf("分析完毕，攻击模式出来了") != -1)
	    {
	        $("#reply_span").text("分析数据接收完毕，阿尔忒密斯发射");
			reply(reply_info[24][1]);
	        return;
	    }
	}
	
	if(info.indexOf("烦") != -1)
	{
	    if(info.indexOf("烦死了，把它修好") != -1)
	    {
	        $("#reply_span").text("是");
			reply(reply_info[25][13]);
	        return;
	    }
	}

    // G
    if(info.indexOf("命令") != -1)
    {
        if(info.indexOf("刚才的命令不算好吗") != -1)
        {
            $("#reply_span").text("无法中止命令");
			reply(reply_info[0][6]);
            return;
        }
    }

    // H
    if(info.indexOf("还") != -1)
    {
        if(info.indexOf("还需要练习呢") != -1)
        {
            $("#reply_span").text("对不起");
			reply(reply_info[2][0]);
            return;
        }
		if(info.indexOf("还有不要忘了问一下") != -1)
		{
		    $("#reply_span").text("是，主人");
			reply(reply_info[25][11]);
		    return;
		}
    }

    if(info.indexOf("好") != -1)
    {
        if(info.indexOf("好，今天已经睡醒了") != -1)
        {
            $("#reply_span").text("诶");
			reply(reply_info[5][1]);
            return;
        }
		if(info.indexOf("好久不见呀，那么，开干吧") != -1)
		{
		    $("#reply_span").text("是，主人");
			reply(reply_info[25][12]);
		    return;
		}
    }

    if(info.indexOf("话") != -1)
    {
        if(info.indexOf("话先说在前头，你们两个千万不要来学校哦") != -1)
        {
            $("#reply_span").text("是");
			reply(reply_info[6][4]);
            return;
        }
    }

    // I

    // J
    if(info.indexOf("脚") != -1)
    {
        if(info.indexOf("脚踢起来，我牵着你的手呢") != -1)
        {
            $("#reply_span").text("这样吗，主人");
			reply(reply_info[5][11]);
            return;
        }
    }

    if(info.indexOf("尽") != -1)
    {
        if(info.indexOf("尽情地舒展一下翅膀吧") != -1)
        {
            $("#reply_span").text("是");
			reply(reply_info[5][7]);
            return;
        }
    }
	
	if(info.indexOf("既") != -1)
	{
	    if(info.indexOf("既然知道了，有件事想拜托你") != -1)
	    {
	        $("#reply_span").text("诶");
			reply(reply_info[25][6]);
	        return;
	    }
	}

    // K
    if(info.indexOf("卡片") != -1)
    {
        if(info.indexOf("卡片是什么") != -1)
        {
            $("#reply_span").text("（解释）");
			reply(reply_info[0][2]);
            return;
        }
        if(info.indexOf("卡片还能做什么") != -1)
        {
            $("#reply_span").text("什么都可以");
			reply(reply_info[0][4]);
            return;
        }
    }

    if(info.indexOf("快") != -1)
    {
        if(info.indexOf("快点回去睡觉") != -1)
        {
            $("#reply_span").text("那个，主人，睡觉是怎么一回事。我们人造天使没有被设定睡觉这一功能，所以不知道睡觉、做梦是怎么一回事");
			reply(reply_info[5][4]);
            return;
        }
    }

    if(info.indexOf("可") != -1)
    {
        if(info.indexOf("可能会抢走智树也没关系吗") != -1)
        {
            $("#reply_span").text("没事的，不管发生什么，主人还是我的主人，从今往后一直都是");
			reply(reply_info[13][0]);
            return;
        }
		if(info.indexOf("可还是很想跟喜欢的人在一起对吧") != -1)
        {
            $("#reply_span").text("是");
			reply(reply_info[22][8]);
            return;
        }
    }
	
	if(info.indexOf("开") != -1)
    {
        if(info.indexOf("开炮，伊卡洛斯") != -1)
        {
            $("#reply_span").text("诶");
			reply(reply_info[14][1]);
            return;
        }
    }
	
	if(info.indexOf("卡") != -1)
	{
	    if(info.indexOf("卡奥斯怎么样了") != -1)
	    {
	        $("#reply_span").text("如你所见");
			reply(reply_info[25][10]);
	        return;
	    }
	}

    // L

    // M
    if(info.indexOf("没") != -1)
    {
        if(info.indexOf("没事吧，怎么伤痕累累的") != -1)
        {
            $("#reply_span").text("没事的");
			reply(reply_info[7][2]);
            return;
        }
		if(info.indexOf("没事吧，伊卡洛斯小姐") != -1)
        {
            $("#reply_span").text("是的");
			reply(reply_info[23][10]);
            return;
        }
    }

    if(info.indexOf("马上") != -1)
    {
        if(info.indexOf("马上正式比赛了，多练习一下") != -1)
        {
            $("#reply_span").text("对不起，主人");
			reply(reply_info[9][3]);
            return;
        }
    }

    if(info.indexOf("嘛") != -1)
    {
        if(info.indexOf("嘛，笑一下很简单的事情") != -1)
        {
            $("#reply_span").text("不简单，因为，我从没见过，妮姆芙你笑过");
			reply(reply_info[11][6]);
            return;
        }
    }

    // N
    if(info.indexOf("那") != -1)
    {
        if(info.indexOf("那我出门了") != -1)
        {
            $("#reply_span").text("好的，主人");
			reply(reply_info[1][2]);
            return;
        }
        if(info.indexOf("那么，伊卡洛斯，笔直回家，好吗") != -1)
        {
            $("#reply_span").text("好的，主人");
			reply(reply_info[1][1]);
            return;
        }
        if(info.indexOf("那当然是因为开心咯") != -1)
        {
            $("#reply_span").text("开心？开心");
            reply(reply_info[2][4]);
            return;
        }
        if(info.indexOf("那么，走吧，伊卡洛斯") != -1)
        {
            $("#reply_span").text("但是，主人他。。。");
            reply(reply_info[3][0]);
            return;
        }
        if(info.indexOf("那个，伊卡洛斯") != -1)
        {
            $("#reply_span").text("在的，主人");
            reply(reply_info[4][3]);
            return;
        }
        if(info.indexOf("那你在我睡觉的时候都在干什么呢") != -1)
        {
            $("#reply_span").text("一直在主人身旁，在主人睡醒前，一直");
            reply(reply_info[5][10]);
            return;
        }
        if(info.indexOf("那我出门了，看家拜托了") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[6][1]);
            return;
        }
        if(info.indexOf("那我出发了") != -1)
        {
            $("#reply_span").text("是，主人");
           reply(reply_info[6][2]);
            return;
        }
        if(info.indexOf("那这样的事，不要做第二次了") != -1)
        {
            $("#reply_span").text("诶？");
            reply(reply_info[7][1]);
            return;
        }
        if(info.indexOf("那么，伊卡洛斯，把带着的卡片全部交出来") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[10][2]);
            return;
        }
        if(info.indexOf("那么，阿尔法，稍微会笑一点了吗") != -1)
        {
            $("#reply_span").text("不，还没有");
            reply(reply_info[11][5]);
            return;
        }
        if(info.indexOf("那一起想办法吧，如何才能让我们人造天使笑，呐") != -1)
        {
            $("#reply_span").text("恩");
            reply(reply_info[11][16]);
            return;
        }
        if(info.indexOf("那样的人生来就是杀人的道具，太过分了") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[12][20]);
            return;
        }
        if(info.indexOf("那么怎么用那东西呢") != -1)
        {
            $("#reply_span").text("我对今早的事进行了反省，既然主人想呆在里面，那么对他进行辅助便是我们天使机器人的使命");
            reply(reply_info[23][5]);
            return;
        }
    }

    if(info.indexOf("你") != -1)
    {
        if(info.indexOf("你是怎么去亚马逊的") != -1)
        {
            $("#reply_span").text("我是以24马赫的速度飞过去的");
            reply(reply_info[2][10]);
            return;
        }
        if(info.indexOf("你在干什么，伊卡洛斯") != -1)
        {
            $("#reply_span").text("这是作业death");
            reply(reply_info[2][11]);
            return;
        }
        if(info.indexOf("你怎么在这") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[5][5]);
            return;
        }
        if(info.indexOf("你一直珍惜的西瓜，大概里面早就烂掉了，一团糟了呢") != -1)
        {
            $("#reply_span").text("啊");
            reply(reply_info[5][0]);
            return;
        }
        if(info.indexOf("你还是这样子好") != -1)
        {
            $("#reply_span").text("嗯？");
            reply(reply_info[5][2]);
            return;
        }
        if(info.indexOf("你是知道没事的，才帮我挡子弹的吗") != -1)
        {
            $("#reply_span").text("不，没想到自己也");
            reply(reply_info[7][0]);
            return;
        }
        if(info.indexOf("你是什么") != -1)
        {
            $("#reply_span").text("我是，人类death");
            reply(reply_info[8][3]);
            return;
        }
        if(info.indexOf("你在做什么") != -1)
        {
            $("#reply_span").text("妮姆芙，这里的天空很广阔哦");
            reply(reply_info[9][7]);
            return;
        }
        if(info.indexOf("你是战斗特化的天使，没有那方面的机能吧") != -1)
        {
            $("#reply_span").text("是因为我是战斗用的原因");
            reply(reply_info[11][25]);
            return;
        }
        if(info.indexOf("你要去哪里，伊卡洛斯") != -1)
        {
            $("#reply_span").text("就是，那个，去买个东西");
            reply(reply_info[12][10]);
            return;
        }
        if(info.indexOf("你刚才笑了一下吧") != -1)
        {
            $("#reply_span").text("诶");
            reply(reply_info[12][8]);
            return;
        }
		if(info.indexOf("你是什么东西") != -1)
        {
            $("#reply_span").text("主人的人造天使，type α Ikaros，请随心所欲命令我");
            reply(reply_info[21][5]);
            return;
        }
		if(info.indexOf("你在干什么") != -1)
        {
            $("#reply_span").text("想先摸摸他们");
            reply(reply_info[22][16]);
            return;
        }
		if(info.indexOf("你居然还想到了对策") != -1)
        {
            $("#reply_span").text("人类是很怕烫的");
            reply(reply_info[23][3]);
            return;
        }
		if(info.indexOf("你怎么了，伊卡洛斯小姐") != -1)
        {
            $("#reply_span").text("那个，主人向我求");
            reply(reply_info[23][15]);
            return;
        }
		if(info.indexOf("你能发誓无论是顺利的时候还是艰辛的时候，深爱着对方，尊敬着对方，白头到老吗") != -1)
		{
		    $("#reply_span").text("是");
		    reply(reply_info[25][14]);
		    return;
		}
    }

    if(info.indexOf("呐") != -1)
    {
        if(info.indexOf("呐，伊卡洛斯") != -1)
        {
			if(info.indexOf("呐，伊卡洛斯，我们约定过不说谎的吧") != -1)
			{
				$("#reply_span").text("呵嗯");
				reply(reply_info[12][9]);
				return;
			}
			if(info.indexOf("呐，伊卡洛斯，我讨厌兵器是因为我觉得你太可怜了") != -1)
			{
				$("#reply_span").text("是");
				reply(reply_info[12][19]);
				return;
			}
            $("#reply_span").text("是");
            reply(reply_info[5][9]);
            return;
        }
		if(info.indexOf("呐，我想知道爱是什么呀，爱，爱，爱") != -1)
        {
            $("#reply_span").text("我不知道，我也不知道爱是什么，不过，一想到主人，动力炉就很疼、很疼。为什么一想到主人，动力炉就会那么疼，这就是爱吗，搞不懂呀...");
            reply(reply_info[21][7]);
            return;
        }
    }

    if(info.indexOf("妮姆芙") != -1)
    {
        if(info.indexOf("妮姆芙为什么回来了") != -1)
        {
            $("#reply_span").text("我什么也不知道");
            reply(reply_info[8][2]);
            return;
        }
        if(info.indexOf("妮姆芙呢") != -1)
        {
            $("#reply_span").text("这个");
            reply(reply_info[12][25]);
            return;
        }
        if(info.indexOf("妮姆芙又没有回来吗") != -1)
        {
            $("#reply_span").text("是的，昨天一晚上没回来");
            reply(reply_info[12][21]);
            return;
        }
    }

    if(info.indexOf("n") != -1)
    {
        if(info.indexOf("nico") != -1)
        {
            $("#reply_span").text("ni a li");
            reply(reply_info[11][1]);
            return;
        }
    }
	
	if(info.indexOf("能") != -1)
    {
        if(info.indexOf("能让智树开心的东西") != -1)
        {
            $("#reply_span").text("嗯");
            reply(reply_info[22][17]);
            return;
        }
    }

    // O

    // P
    if(info.indexOf("胖次") != -1)
    {
        if(info.indexOf("胖次嘎") != -1)
        {
            $("#reply_span").text("胖次是吗，那么把半径xxkm内的胖次全部收集起来");
            reply(reply_info[1][4]);
            return;
        }
    }

    if(info.indexOf("普通") != -1)
    {
        if(info.indexOf("普通人会飞着去买东西吗") != -1)
        {
            $("#reply_span").text("是的");
            reply(reply_info[2][5]);
            return;
        }
    }

    if(info.indexOf("骗") != -1)
    {
        if(info.indexOf("骗了你很抱歉，其实我想要把你带回天上") != -1)
        {
            $("#reply_span").text("我知道");
            reply(reply_info[12][23]);
            return;
        }
    }

    // Q

    // R
    if(info.indexOf("人") != -1)
    {
        if(info.indexOf("人类都有一两个秘密，不是吗") != -1)
        {
            $("#reply_span").text("主人！");
            reply(reply_info[10][10]);
            return;
        }
    }

    if(info.indexOf("如") != -1)
    {
        if(info.indexOf("如果可以逃走的话，智树会感到高兴的吧") != -1)
        {
            $("#reply_span").text("主人，他会，感到高兴");
            reply(reply_info[11][35]);
            return;
        }
    }

    // S
    if(info.indexOf("什么") != -1)
    {
        if(info.indexOf("什么都可以吗") != -1)
        {
            $("#reply_span").text("是的");
            reply(reply_info[0][5]);
            return;
        }
    }

    if(info.indexOf("算") != -1)
    {
        if(info.indexOf("算了，你们两个明天也来学校，知道了吗，就是这么回事") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[6][2]);
            return;
        }
		if(info.indexOf("算了，既然你们都平安回来了，就原谅你们吧") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[21][13]);
            return;
        }
    }

    if(info.indexOf("是") != -1)
    {
        if(info.indexOf("是这样吗，伊卡洛斯") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[8][1]);
            return;
        }
    }
	
	if(info.indexOf("saber") != -1)
	{
		if(info.indexOf("saber，宝具解放！") != -1)
        {
            $("#reply_span").text("集结的星之吐息，闪耀的生命奔流-- 接下吧，誓约胜利之剑！");
            reply2(reply_info2[0][0]);
            return;
        }
	}
	
	if(info.indexOf("首先") != -1)
	{
		if(info.indexOf("首先是右手") != -1)
        {
            $("#reply_span").text("是");
            reply2(reply_info2[21][6]);
            return;
        }
	}
	
	if(info.indexOf("生") != -1)
	{
		if(info.indexOf("生的怎么行啊，会吃坏肚子的") != -1)
        {
            $("#reply_span").text("没事，这样就行");
            reply2(reply_info2[23][8]);
            return;
        }
	}
	
	if(info.indexOf("所") != -1)
	{
		if(info.indexOf("所以绝对不要死了") != -1)
	    {
	        $("#reply_span").text("是，主人");
	        reply2(reply_info2[24][6]);
	        return;
	    }
	}
	
	if(info.indexOf("商") != -1)
	{
		if(info.indexOf("商量？") != -1)
	    {
	        $("#reply_span").text("求婚噶");
	        reply2(reply_info2[25][9]);
	        return;
	    }
	}
	
	// T
	if(info.indexOf("听") != -1)
	{
		if(info.indexOf("听好了，上厕所先knock") != -1)
	    {
	        $("#reply_span").text("knock");
	        reply2(reply_info2[25][1]);
	        return;
	    }
	}
	

    // W
    if(info.indexOf("晚安") != -1)
    {
        if(info.indexOf("晚安") != -1)
        {
            $("#reply_span").text("晚安，我的主人");
            return;
        }
    }

    if(info.indexOf("为") != -1)
    {
        if(info.indexOf("为什么你在这") != -1)
        {
            $("#reply_span").text("班上的朋友怎么都拜托我帮忙");
            reply(reply_info[9][1]);
            return;
        }
        if(info.indexOf("为什么这些动物被关在笼子里呢") != -1)
        {
            $("#reply_span").text("sa（谁知道呢）");
            reply(reply_info[11][26]);
            return;
        }
		if(info.indexOf("为了不妨碍他人，你单独教她吧") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[19][1]);
            return;
        }
		if(info.indexOf("为什么伊卡洛斯前辈没有进泳池呢") != -1)
        {
            $("#reply_span").text("我这段时间都不想下水");
            reply(reply_info[22][2]);
            return;
        }
		if(info.indexOf("为什么过来，阿尔法，这种状态战斗的话") != -1)
		{
		    $("#reply_span").text("没事的");
		    reply(reply_info[24][5]);
		    return;
		}
    }

    if(info.indexOf("我") != -1)
    {
        if(info.indexOf("我一直把伊卡洛斯当成普通的人类，忘记你是人造天使的事情了") != -1)
        {
            $("#reply_span").text("我很高兴，楚原把我当普通人来对待");
            reply(reply_info[10][4]);
            return;
        }
        if(info.indexOf("我们人造天使，可能从来没有发自内心的笑过吧") != -1)
        {
            $("#reply_span").text("并且最近，一直在为什么烦恼的样子");
            reply(reply_info[11][4]);
            $("#reply_span").text("那是为什么，我也不清楚");
            reply(reply_info[11][22]);
            return;
        }
		if(info.indexOf("我能做什么呢") != -1)
        {
            $("#reply_span").text("什么都可以");
            reply(reply_info[0][4]);
            return;
        }
		if(info.indexOf("我想看胖次") != -1)
        {
            $("#reply_span").text("胖次是吗。。。");
            reply(reply_info[3][4]);
            return;
        }
		if(info.indexOf("我回来了") != -1)
        {
            $("#reply_span").text("欢迎回来，主人");
            reply(reply_info[15][8]);
            return;
        }
		if(info.indexOf("我觉得暂时保持这样也不错，像这样大家一起快乐的过日子") != -1)
		{
		    $("#reply_span").text("是");
		    reply(reply_info[25][15]);
		    return;
		}
    }

    if(info.indexOf("喂") != -1)
    {
        if(info.indexOf("喂，伊卡洛斯") != -1)
        {
			if(info.indexOf("喂，伊卡洛斯，早上不是刚教你吗，厕所要") != -1)
			{
			    $("#reply_span").text("对了，厕所要敲门");
			    reply(reply_info[25][5]);
			    return;
			}
            $("#reply_span").text("是，主人");
            reply(reply_info[11][15]);
            $("#reply_span").text("早上好，主人");
            reply(reply_info[11][21]);
            return;
        }
		if(info.indexOf("喂，你是不是在生气") != -1)
        {
            $("#reply_span").text("想在你身边");
            reply(reply_info[22][18]);
            return;
        }
    }
	
	if(info.indexOf("哇") != -1)
    {
        if(info.indexOf("哇，这是什么，第一次看见这么危险的东西") != -1)
        {
            $("#reply_span").text("主人，这是那么危险的东西吗");
			reply(reply_info[15][4]);
            return;
        }
    }
	
	if(info.indexOf("完") != -1)
    {
        if(info.indexOf("完了以后要回老家求婚了") != -1)
        {
            $("#reply_span").text("回老家求婚，是什么意思呢");
			reply(reply_info[22][4]);
            return;
        }
    }

    // X
    if(info.indexOf("先") != -1)
    {
        if(info.indexOf("先把要买什么听了再说") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[2][3]);
            return;
        }
    }

    // Y
    if(info.indexOf("要") != -1)
    {
        if(info.indexOf("要像普通人一样哦") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[2][2]);
            return;
        }
    }

    if(info.indexOf("伊卡") != -1)
    {
        if(info.indexOf("伊卡洛斯，你先回去，乖乖看家，知道了吗") != -1)
        {
            $("#reply_span").text("那主人，这个给你");
            reply(reply_info[1][3]);
            return;
        }
        if(info.indexOf("伊卡洛斯，你过去看看吧") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[2][1]);
            return;
        }
        if(info.indexOf("伊卡洛斯，要不要尝试一下数学题") != -1)
        {
            $("#reply_span").text("我吗");
            reply(reply_info[2][9]);
            return;
        }
        if(info.indexOf("伊卡洛斯，背后的翅膀怎么了") != -1)
        {
            $("#reply_span").text("那个，这个翅膀是可变式羽翼，可以缩小到这种程度的大小");
            reply(reply_info[5][3]);
            return;
        }
        if(info.indexOf("伊卡洛斯！") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[7][4]);
            return;
        }
        if(info.indexOf("伊卡洛斯，你试试万岁看看") != -1)
        {
            $("#reply_span").text("万岁是吗");
            reply(reply_info[11][27]);
            return;
        }
        if(info.indexOf("伊卡洛斯，不用那么快，停，停") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[12][18]);
            return;
        }
		if(info.indexOf("伊卡洛斯，抱一个") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[4][1]);
            return;
        }
		if(info.indexOf("伊卡洛斯，干得漂亮，足够了，你回去吧") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[15][6]);
            return;
        }
		if(info.indexOf("伊卡洛斯酱做得到吗") != -1)
        {
            $("#reply_span").text("我的雷达性能没有妮姆芙的高，如果是挖的话倒是能帮忙");
            reply(reply_info[17][0]);
            return;
        }
		if(info.indexOf("伊卡洛斯,给我卡片") != -1)
        {
            $("#reply_span").text("给");
            reply(reply_info[18][2]);
            return;
        }
		if(info.indexOf("伊卡洛斯,带她去更衣室") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[19][0]);
            return;
        }
		if(info.indexOf("伊卡洛斯，把妮姆芙毁掉") != -1)
        {
            $("#reply_span").text("命令");
            reply(reply_info[21][2]);
            return;
        }
		if(info.indexOf("伊卡洛斯，你回来啦") != -1)
        {
            $("#reply_span").text("主人，我...");
            reply(reply_info[22][27]);
            return;
        }
		if(info.indexOf("伊卡洛斯小姐") != -1)
        {
            $("#reply_span").text("啊，没什么");
            reply(reply_info[23][16]);
            return;
        }
		if(info.indexOf("伊卡洛斯前辈，坐起来没事吗") != -1)
		{
		    $("#reply_span").text("恩，没事，谢谢");
		    reply(reply_info[25][7]);
		    return;
		}
    }

    if(info.indexOf("已经") != -1)
    {
        if(info.indexOf("已经没你事了，乖乖待着") != -1)
        {
            $("#reply_span").text("是，主人");
            reply(reply_info[7][3]);
            return;
        }
    }

    if(info.indexOf("有") != -1)
    {
        if(info.indexOf("有什么隐情吗") != -1)
        {
            $("#reply_span").text("人类是说谎的生物，我是普通的人类death");
            reply(reply_info[8][0]);
            return;
        }
		if(info.indexOf("有翅膀的话，这种事情超简单的说") != -1)
        {
            $("#reply_span").text("别勉强自己");
            reply(reply_info[17][2]);
            return;
        }
		if(info.indexOf("有什么能让樱井君高兴的事") != -1)
        {
            $("#reply_span").text("对");
            reply(reply_info[22][20]);
            return;
        }
    }

    if(info.indexOf("约") != -1)
    {
        if(info.indexOf("约会呢，回到家，才算约会") != -1)
        {
            $("#reply_span").text("是");
            reply(reply_info[11][24]);
            return;
        }
    }

    if(info.indexOf("又") != -1)
    {
        if(info.indexOf("又是那个奇怪的梦嘎") != -1)
        {
            $("#reply_span").text("你醒了吗，主人");
            reply(reply_info[12][16]);
            return;
        }
    }
	
	if(info.indexOf("永") != -1)
    {
        if(info.indexOf("永远会跟你在一起的，你还是先坐远一点吧") != -1)
        {
            $("#reply_span").text("主人你刚才是不是说我们会永远在一起");
            reply(reply_info[22][19]);
            return;
        }
    }

    // Z
    if(info.indexOf("在") != -1)
    {
        if(info.indexOf("在旁边的海里随便捡点海货过来吧") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[1][1]);
            return;
        }
    }

    if(info.indexOf("早") != -1)
    {
        if(info.indexOf("早上好") != -1)
        {
            $("#reply_span").text("早上好，主人");
            reply(reply_info[0][7]);
            return;
        }
    }

    if(info.indexOf("怎么") != -1)
    {
        if(info.indexOf("怎么了") != -1)
        {
			if(info == "怎么了")
			{
				if(flag == 0)
				{
					$("#reply_span").text("主人遇到麻烦了");
					reply(reply_info[3][3]);
					flag++;
					return;
				}
				else if(flag == 1)
				{
					$("#reply_span").text("没什么");
					reply(reply_info[9][6]);
					flag++;
					return;
				}
				else if(flag == 2)
				{
					$("#reply_span").text("不管发生什么，我都会在主人身边");
					reply(reply_info[18][5]);
					flag++;
					return;
				}
				else if(flag == 3)
				{
					$("#reply_span").text("爱是什么");
					reply(reply_info[22][5]);
					flag++;
					return;
				}
				else if(flag == 4)
				{
					$("#reply_span").text("主人，他");
					reply(reply_info[23][0]);
					flag++;
					return;
				}
				else if(flag == 5)
				{
					$("#reply_span").text("只要求婚后，就会结婚吗");
					reply(reply_info[23][13]);
					flag = 0;
					return;
				}
				else
				{
					flag = 0;
				}
			}
			
			if(info.indexOf("怎么了，没什么精神呢") != -1)
			{
				$("#reply_span").text("我一点都帮不上主人的忙");
				reply(reply_info[9][10]);
				return;
			}	
			if(info.indexOf("怎么了，伊卡洛斯") != -1)
			{
				$("#reply_span").text("没什么");
				reply(reply_info[12][12]);
				return;
			}
			if(info.indexOf("怎么了，伊卡洛斯，又是不好的玩笑是吗") != -1)
			{
				$("#reply_span").text("最喜欢你了，我的主人，永别了");
				reply(reply_info[12][29]);
				return;
			}
        }       
        if(info.indexOf("怎么样，这套内衣") != -1)
        {
            $("#reply_span").text("非常可爱哦，主人");
            reply(reply_info[10][0]);
            return;
        }
        if(info.indexOf("怎么样，伊卡洛斯") != -1)
        {
			if(flag == 0)
			{
				flag = 1;
				$("#reply_span").text("太好了");
				reply(reply_info[12][22]);
				return;
			}
			else
			{
				flag = 0;
				$("#reply_span").text("主人没什么事，但没什么精神");
				reply(reply_info[15][7]);
				return;
			}
        }
    }

    if(info.indexOf("这") != -1)
    {
        if(info.indexOf("这个锁链如何是好") != -1)
        {
            $("#reply_span").text("那个，锁链可以自由控制...");
            reply(reply_info[1][6]);
            return;
        }
        if(info.indexOf("这就解决了吗") != -1)
        {
            $("#reply_span").text("是的，这张卡片自动结束了，已经没事了death");
            reply(reply_info[1][5]);
            return;
        }
        if(info.indexOf("这才是正式表演，伊卡洛斯") != -1)
        {
            $("#reply_span").text("曲名为：《fallen down》");
            reply(reply_info[9][0]);
            return;
        }
        if(info.indexOf("这些孩子们从这里出去，变得自由后，会不会感觉到开心呢") != -1)
        {
            $("#reply_span").text("诶");
            reply(reply_info[11][14]);
            return;
        }
		if(info.indexOf("这一定是某人的阴谋，之后我来处理吧") != -1)
        {
            $("#reply_span").text("了解，对主人有害的东西，进行消除");
            reply(reply_info[15][5]);
            return;
        }
		if(info.indexOf("这个怎么样") != -1)
        {
            $("#reply_span").text("诶，可是");
            reply(reply_info[22][24]);
            return;
        }
		if(info.indexOf("这次，又怎么了") != -1)
        {
            $("#reply_span").text("一直没从壁橱里出来");
            reply(reply_info[23][4]);
            return;
        }
    }

    if(info.indexOf("至今") != -1)
    {
        if(info.indexOf("至今为止没和朋友去购过物吗") != -1)
        {
            $("#reply_span").text("朋友？我没有朋友");
            reply(reply_info[3][1]);
            return;
        }
    }

    if(info.indexOf("走") != -1)
    {
        if(info.indexOf("走吧，伊卡洛斯") != -1)
        {
            $("#reply_span").text("好的，主人");
            reply(reply_info[4][0]);
            return;
        }
    }

    if(info.indexOf("做") != -1)
    {
        if(info.indexOf("做这种事，不会被人当成傻瓜吗") != -1)
        {
            $("#reply_span").text("这是主人的命令呢");
            reply(reply_info[10][9]);
            return;
        }
        if(info.indexOf("做这种事，不觉得很傻吗") != -1)
        {
            $("#reply_span").text("这是主人的命令");
            reply(reply_info[13][5]);
            return;
        }
    }

    if(info.indexOf("真") != -1)
    {
        if(info.indexOf("真羡慕你呢，没有什么烦恼") != -1)
        {
            $("#reply_span").text("没那回事");
            reply(reply_info[10][1]);
            return;
        }
    }

    if(info.indexOf("只") != -1)
    {
        if(info.indexOf("只有表情也行，笑一个") != -1)
        {
            $("#reply_span").text("只要表情？");
            reply(reply_info[11][33]);
            return;
        }
    }

    if(info.indexOf("自") != -1)
    {
        if(info.indexOf("自顾自走掉，伤痕累累回来") != -1)
        {
            $("#reply_span").text("对不起，主人");
            reply(reply_info[11][12]);
            return;
        }
    }

    if(info.indexOf("再") != -1)
    {
        if(info.indexOf("再试一次") != -1)
        {
            $("#reply_span").text("ni a li");
            reply(reply_info[12][4]);
            return;
        }
    }
	
	if(info.indexOf("智树") != -1)
    {
        if(info.indexOf("智树在吗") != -1)
        {
            $("#reply_span").text("主人去山上了");
            reply(reply_info[15][1]);
            return;
        }
		if(info.indexOf("智树应该也会很高兴的") != -1)
        {
            $("#reply_span").text("我知道了");
            reply(reply_info[22][25]);
            return;
        }
		if(info.indexOf("智树好像很高兴") != -1)
        {
            $("#reply_span").text("太好了");
            reply(reply_info[23][6]);
            return;
        }
    }

    // #
    if(info.indexOf("（") != -1)
    {
        if(info.indexOf("（笑）") != -1)
        {
            $("#reply_span").text("主人为什么在笑呢");
            reply(reply_info[2][13]);
            return;
        }
        if(info.indexOf("（和妮姆芙牵手）") != -1)
        {
			if(flag == 0)
			{
				$("#reply_span").text("扫描系统开始，@#*￥*&@，身体构造没有异常，动力炉没有异常，￥@*，刚才那是什么，动力炉在一瞬间，感觉到疼痛");
				reply(reply_info[11][0]);
				flag++;
				return;
			}
			if(flag == 1)
			{
				$("#reply_span").text("为什么会有这样的心情呢?主人就是我的主人，明明就只有这样，动力炉好疼");
				reply(reply_info[20][4]);
				flag = 0;
				return;
			}
        }
    }
	
	// 无搜索结果
	reply("tip/音频库无对应回复.mp3");
	return;
	
}
