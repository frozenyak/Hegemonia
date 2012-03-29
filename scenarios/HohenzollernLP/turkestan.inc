#####################
# Country main data #
#####################

country =
{ tag                    = TUR
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 1200
  money                  = 50
  manpower               = 199
  transports             = 30
  escorts                = 0
  capital                = 1099
  SpyInfo                = { country = "TUR" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 2
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = CYN value = 125 }
    #relation = { tag = IND value = -150 }
    relation = { tag = AFG value = 150 access = yes }
  }
   nationalprovinces      = {
	#afghanistan
	2172 2168 #1529 2173 2171 2169 2170 1537
	#east persia
	1091 1092 1093 1094 1095
	#sinkiang
	1273 1279 1280 1281 1277 1274 1275 1282 1276 1278
	#kazakhstan
	498 499 500 501 502 503
	#turkestan
	504 505 506 507
	#melkosopotjnik
	1108 1109 1110 1111 1112
	#Kirgiz Steppe
	1113 1114 1115 1116 1117 1118
	#turkmenistan
	1097 1098
	#uzbekh
	1099 1100 1101 1102 1103
	#tadzjikistan
	1104 1105
	#kirgiztan
	1106 1107
	#pakistan
	1538
	#india
	1533
	}
   ownedprovinces         = {
	#afghanistan
	2172 2168 #2173 2171 2169 2170 1529 1537
	#east persia
	1091 1092 1093 1094 1095
	#sinkiang
	1273 1279 1280 1281 1277 1274 1275 1282 1276 1278
	#kazakhstan
	498 499 500 501 502 503
	#turkestan
	504 505 506 507
	#melkosopotjnik
	1108 1109 1110 1111 1112
	#Kirgiz Steppe
	1113 1114 1115 1116 1117 1118
	#turkmenistan
	1097 1098
	#uzbekh
	1099 1100 1101 1102 1103
	#tadzjikistan
	1104 1105
	#kirgiztan
	1106 1107
	}
   controlledprovinces    = {
	#afghanistan
	2172 2168 #2173 2171 2169 2170 1529 1537
	#east persia
	1091 1092 1093 1094 1095
	#sinkiang
	1273 1279 1280 1281 1277 1274 1275 1282 1276 1278
	#kazakhstan
	498 499 500 501 502 503
	#turkestan
	504 505 506 507
	#melkosopotjnik
	1108 1109 1110 1111 1112
	#Kirgiz Steppe
	1113 1114 1115 1116 1117 1118
	#turkmenistan
	1097 1098
	#uzbekh
	1099 1100 1101 1102 1103
	#tadzjikistan
	1104 1105
	#kirgiztan
	1106 1107
	}

  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber
	4130 #Early Bomber

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply
	1110 #Early Mountaineers

	##Land Doctrines - Sup Firepower##
	6010 #Firepower Focus
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	
	3810 #Troopship
  }
  headofstate            = { type = 9 id = 12011 }
  headofgovernment       = { type = 9 id = 12012 }
  foreignminister        = { type = 9 id = 12003 }
  armamentminister       = { type = 9 id = 12048 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12068 }
  chiefofstaff           = { type = 9 id = 12007 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12079 }
  chiefofair             = { type = 9 id = 12010 }
  #Army
  landunit =
  { id       = { type = 10700 id = 816 }
    location = 1116
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10700 id = 817 }
      name   = "1. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
    division =
    { id     = { type = 10700 id = 50 }
      name   = "50. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 68 }
      name   = "68. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
  }
  landunit =
  { id       = { type = 10700 id = 818 }
    location = 1099
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10700 id = 819 }
      name   = "2. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
    division =
    { id     = { type = 10700 id = 51 }
      name   = "51. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
    division =
    { id     = { type = 10700 id = 69 }
      name   = "69. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
      extra  = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 820 }
    location = 1094
    name     = "3rd Cavalry Corps"
    division =
    { id     = { type = 10700 id = 821 }
      name   = "3. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 52 }
      name   = "52. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
    division =
    { id     = { type = 10700 id = 67 }
      name   = "67. Süvari Tümeni"
      type   = cavalry
      model  = 1
	  strength = 60
    }
  }
  landunit =
  { id       = { type = 10700 id = 822 }
    location = 1091
    name     = "1st Army Corps"
    division =
    { id     = { type = 10700 id = 823 }
      name   = "1. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 65 }
      name   = "65. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 66 }
      name   = "66. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10700 id = 824 }
    location = 1095
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10700 id = 825 }
      name   = "2. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 63 }
      name   = "63. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 64 }
      name   = "64. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10700 id = 826 }
    location = 1092
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10700 id = 827 }
      name   = "3. Piyade Tümeni"
      type   = bergsjaeger
      model  = 0
	  strength = 60
    }
    division =
    { id     = { type = 10700 id = 53 }
      name   = "53. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 54 }
      name   = "54. Piyade Tümeni"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10700 id = 828 }
    location = 1114
    name     = "1st Border Guards"
    division =
    { id     = { type = 10700 id = 829 }
      name   = "1. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 55 }
      name   = "55. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 830 }
    location = 2171
    name     = "2nd Border Guards"
    division =
    { id     = { type = 10700 id = 831 }
      name   = "2. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 56 }
      name   = "56. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 832 }
    location = 2169
    name     = "3rd Border Guards"
    division =
    { id     = { type = 10700 id = 833 }
      name   = "3. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 57 }
      name   = "57. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 834 }
    location = 2170
    name     = "4th Border Guards"
    division =
    { id     = { type = 10700 id = 835 }
      name   = "4. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 58 }
      name   = "58. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 836 }
    location = 1279
    name     = "5th Border Guards"
    division =
    { id     = { type = 10700 id = 837 }
      name   = "5. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 59 }
      name   = "59. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 838 }
    location = 1274
    name     = "6th Border Guards"
    division =
    { id     = { type = 10700 id = 839 }
      name   = "6. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 60 }
      name   = "60. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 840 }
    location = 1093
    name     = "7th Border Guards"
    division =
    { id     = { type = 10700 id = 841 }
      name   = "7. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 61 }
      name   = "61. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10700 id = 842 }
    location = 1094
    name     = "8th Border Guards"
    division =
    { id     = { type = 10700 id = 843 }
      name   = "8. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10700 id = 62 }
      name   = "62. Kuvayi Milliye Birligi"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  #Air Force
  airunit =
  { location = 1099
    base     = 1099
    id       = { type = 10500 id = 900 }
    name     = "Turkestan Air Force"
    division =
    { id     = { type = 10500 id = 901 }
      name   = "1. Avci Filo"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 902 }
      name   = "2. Avci Filo"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 903 }
      name   = "3. Avci Filo"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 904 }
      name   = "1. Taktik Bombardiman Filosu"
      type   = tactical_bomber
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 905 }
    name     = "Turkestan Navy"
    location = 1091
    base     = 1091
    division =
    { id     = { type = 10500 id = 906 }
      name   = "TCG Yavuz"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 907 }
      name   = "TCG Canakkale"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 908 }
      name   = "TCG Residiye"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 909 }
      name   = "TCG Kesan"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 910 }
      name   = "TCG Sariyer"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 911 }
      name   = "1. Destroyer Filotilla"
      type   = destroyer
      model  = 0
    }
  }
}
