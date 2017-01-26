using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class HeroTable  {

	public static Dictionary<int, string> HeroNameinChinese = new Dictionary<int, string>() {
		// order - > price
		{0, "弓箭手"},		// Archer
		{1, "野蛮人"},		// Barbarian
		{2, "弑龙者"},		// Dragon Slayer
		{3, "火焰领主"},		// Fire
		{4, "牧师"},			// Healer
		{5, "草药师"},		// Harbalist
		{6, "铁骑士"},		// Knight
		{7, "御林军"},		// Lancer
		{8, "圣光骑士"},		// Light
		{9, "商人"},			// Merchant
		{10, "忍者"},		// Ninja
		{11, "猎人"},		// Pet Caller
		{12, "药剂师"},		// Poisoner
		{13, "神射手"},		// Ranger
		{14, "斥候"},		// Scout
		{15, "阴暗领主"},		// Shadow Keeper
		{16, "召唤师"},		// Summoner
		{17, "破晓死神"},		// The Black Harvester
		{18, "龙战骑士"},		// The Frost Dragon
		{19, "大灵动家"},		// Water
	};

	public static Dictionary<int, string> HeroNameinEnglish = new Dictionary<int, string>() {
		// order - > price
		{0, "Archer"},			// Archer
		{1, "Barbarian"},		// Barbarian
		{2, "Dragon Slayer"},	// Dragon Slayer
		{3, "Fire"},			// Fire
		{4, "Healer"},			// Healer
		{5, "Harbalist"},		// Harbalist
		{6, "Knight"},			// Knight
		{7, "Lancer"},			// Lancer
		{8, "Light"},			// Light
		{9, "Merchant"},		// Merchant
		{10, "Ninja"},			// Ninja
		{11, "Pet Caller"},		// Pet Caller
		{12, "Poisoner"},		// Poisoner
		{13, "Ranger"},			// Ranger
		{14, "Scout"},			// Scout
		{15, "Shadow Keeper"},	// Shadow Keeper
		{16, "Summoner"},		// Summoner
		{17, "The Black Harvester"},	// The Black Harvester
		{18, "The Frost Dragon"},		// The Frost Dragon
		{19, "Water"},			// Water
	};

	public static Dictionary<int, Dictionary<string, int>> HeroInfoTable = new Dictionary<int, Dictionary<string, int>>() {
		{0, 
			new Dictionary<string, int>() {
				{"price", 0},
				{"maxHealth", 100},
				{"recovSpeed", 10},
			}
		},
		{1, 
			new Dictionary<string, int>() {
				{"price", 10},
				{"maxHealth", 100},
				{"recovSpeed", 9},
			}
		},
		{2, 
			new Dictionary<string, int>() {
				{"price", 10},
				{"maxHealth", 100},
				{"recovSpeed", 9},
			}
		},
		{3, 
			new Dictionary<string, int>() {
				{"price", 10},
				{"maxHealth", 100},
				{"recovSpeed", 9},
			}
		},
		{4, 
			new Dictionary<string, int>() {
				{"price", 10},
				{"maxHealth", 100},
				{"recovSpeed", 9},
			}
		},
		{5, 
			new Dictionary<string, int>() {
				{"price", 20},
				{"maxHealth", 200},
				{"recovSpeed", 9},
			}
		},
		{6, 
			new Dictionary<string, int>() {
				{"price", 20},
				{"maxHealth", 200},
				{"recovSpeed", 9},
			}
		},
		{7, 
			new Dictionary<string, int>() {
				{"price", 30},
				{"maxHealth", 200},
				{"recovSpeed", 8},
			}
		},
		{8, 
			new Dictionary<string, int>() {
				{"price", 30},
				{"maxHealth", 200},
				{"recovSpeed", 8},
			}
		},
		{9, 
			new Dictionary<string, int>() {
				{"price", 30},
				{"maxHealth", 200},
				{"recovSpeed", 8},
			}
		},
		{10, 
			new Dictionary<string, int>() {
				{"price", 50},
				{"maxHealth", 300},
				{"recovSpeed", 8},
			}
		},
		{11, 
			new Dictionary<string, int>() {
				{"price", 50},
				{"maxHealth", 300},
				{"recovSpeed", 8},
			}
		},
		{12, 
			new Dictionary<string, int>() {
				{"price", 50},
				{"maxHealth", 300},
				{"recovSpeed", 8},
			}
		},
		{13, 
			new Dictionary<string, int>() {
				{"price", 50},
				{"maxHealth", 300},
				{"recovSpeed", 8},
			}
		},
		{14, 
			new Dictionary<string, int>() {
				{"price", 50},
				{"maxHealth", 300},
				{"recovSpeed", 8},
			}
		},
		{15, 
			new Dictionary<string, int>() {
				{"price", 80},
				{"maxHealth", 300},
				{"recovSpeed", 7},
			}
		},
		{16, 
			new Dictionary<string, int>() {
				{"price", 80},
				{"maxHealth", 300},
				{"recovSpeed", 7},
			}
		},
		{17, 
			new Dictionary<string, int>() {
				{"price", 120},
				{"maxHealth", 500},
				{"recovSpeed", 5},
			}
		},
		{18, 
			new Dictionary<string, int>() {
				{"price", 120},
				{"maxHealth", 500},
				{"recovSpeed", 5},
			}
		},
		{19, 
			new Dictionary<string, int>() {
				{"price", 120},
				{"maxHealth", 500},
				{"recovSpeed", 5},
			}
		},
	};




}
