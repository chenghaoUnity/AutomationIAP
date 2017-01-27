using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class HeroTable  {

	public static Dictionary<int, Dictionary<string, object>> HeroInfoTable = new Dictionary<int, Dictionary<string, object>>() {
		{0, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName0"},		//弓箭手
				{"introduction", "Text_Hero0"},
				{"price", 0},
				{"maxHealth", 100},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0f},
				{"jumpForceTuning", 0f}, 	// 0 / 0 = 1
			}
		},
		{1, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName1"},		//野蛮人
				{"introduction", "Text_Hero1"},
				{"price", 10},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", -0.1f},
				{"jumpForceTuning", -0.1f},		// 2 / 2 = 1
			}
		},
		{2, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName2"},		//弑龙者
				{"introduction", "Text_Hero2"},
				{"price", 10},
				{"maxHealth", 100},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", -0.1f},
				{"jumpForceTuning", +0.1f},		//1 / 1 = 1
			}
		},
		{3, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName3"},		//火焰领主
				{"introduction", "Text_Hero3"},
				{"price", 20},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", -0.05f},
				{"jumpForceTuning", -0.05f},		//2 / 1 = 2
			}
		},
		{4, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName4"},		//牧师
				{"introduction", "Text_Hero4"},
				{"price", 20},
				{"maxHealth", 150},
				{"recovSpeed", 20},
				{"moveSpeedTuning", 0f},
				{"jumpForceTuning", 0f},		//2 / 0 = 2+
			}
		},
		{5, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName5"},		//草药师
				{"introduction", "Text_Hero5"},
				{"price", 20},
				{"maxHealth", 150},
				{"recovSpeed", 15},
				{"moveSpeedTuning", -0.1f},
				{"jumpForceTuning", -0.05f},		//3 / 1.5 = 2
			}
		},
		{6, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName6"},		//铁骑士
				{"introduction", "Text_Hero6"},
				{"price", 20},
				{"maxHealth", 350},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", -0.05f},
				{"jumpForceTuning", -0.1f},		//3 / 1.5 = 2
			}
		},
		{7, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName7"},		//御林军
				{"introduction", "Text_Hero7"},
				{"price", 40},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0},
				{"jumpForceTuning", +0.1f},			//3 / 0 = 3+
			}
		},
		{8, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName8"},		//圣光骑士
				{"introduction", "Text_Hero8"},
				{"price", 40},
				{"maxHealth", 250},
				{"recovSpeed", 10},
				{"moveSpeedTuning", -0.05f},
				{"jumpForceTuning", -0.1f},		//4 / 1.5 ~ 2.7
			}
		},
		{9, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName9"},		//商人
				{"introduction", "Text_Hero9"},
				{"price", 40},
				{"maxHealth", 200},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", +0.1f},
				{"jumpForceTuning", +0.1f},		//3 / 0 = 3+
			}
		},
		{10, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName10"},	//忍者
				{"introduction", "Text_Hero10"},
				{"price", 60},
				{"maxHealth", 100},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", +0.25f},
				{"jumpForceTuning", +0.25f},		//5 / 0 = 5+
			}
		},
		{11, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName11"},	//猎人
				{"introduction", "Text_Hero11"},
				{"price", 60},
				{"maxHealth", 200},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", +0.15f},
				{"jumpForceTuning", +0.15f},		//4 / 0 = 4+
			}
		},
		{12, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName12"},	//药剂师
				{"introduction", "Text_Hero12"},
				{"price", 60},
				{"maxHealth", 200},
				{"recovSpeed", 5},
				{"moveSpeedTuning", 0},
				{"jumpForceTuning", 0},			//4 / 0 = 4+
			}
		},
		{13, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName13"},	//神射手
				{"introduction", "Text_Hero13"},
				{"price", 60},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0.2f},
				{"jumpForceTuning", 0},		//4 / 0 = 4+
			}
		},
		{14, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName14"},	//斥候
				{"introduction", "Text_Hero14"},
				{"price", 60},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0f},
				{"jumpForceTuning", 0.2f},			//4 / 0 = 4+
			}
		},
		{15, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName15"},	//阴暗领主
				{"introduction", "Text_Hero15"},
				{"price", 80},
				{"maxHealth", 350},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0.1f},
				{"jumpForceTuning", 0.2f},		//6 / 0 = 6+
			}
		},
		{16, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName16"},	//召唤师
				{"introduction", "Text_Hero16"},
				{"price", 80},
				{"maxHealth", 250},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", +0.1f},
				{"jumpForceTuning", +0.3f},		//6 / 0 = 6+
			}
		},
		{17, 
			new Dictionary<string, object> {
				{"name", "Text_HeroName17"},	//破晓死神
				{"introduction", "Text_Hero17"},
				{"price", 150},
				{"maxHealth", 500},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0.1f},
				{"jumpForceTuning", 0.1f},
			}
		},
		{18, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName18"},	//龙战骑士
				{"introduction", "Text_Hero18"},
				{"price", 150},
				{"maxHealth", 500},
				{"recovSpeed", int.MaxValue},
				{"moveSpeedTuning", 0.1f},
				{"jumpForceTuning", 0.1f},
			}
		},
		{19, 
			new Dictionary<string, object>() {
				{"name", "Text_HeroName19"},	//大灵动家
				{"introduction", "Text_Hero19"},
				{"price", 150},
				{"maxHealth", 200},
				{"recovSpeed", 1},
				{"moveSpeedTuning", 0.1f},
				{"jumpForceTuning", 0.1f},
			}
		},
	};




}
