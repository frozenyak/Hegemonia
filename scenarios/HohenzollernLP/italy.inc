#####################
# Country main data #
#####################

country =
{ tag                    = RSI
	regular_id = ITA
	intrinsic_gov_type = leninist
  #regular_id = U00 #similar to AUS/GER hack
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes ai_set = yes } }
	ai = "italy.ai"
  dissent		 = 5
  puppet		 = U00
#Major Power
  energy                 = 2500
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 180
  transports             = 100
  escorts                = 10
  capital		 = 419
  SpyInfo                = { country = "RSI" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 10
    freedom           = 3
    free_market       = 2
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
	nationalprovinces      = {
		430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 350 343
		403 402 413 417 435 432 405 404 94 399 371 429 394 395 418 426 427 428 433
		#91 390
		#406
		349 #Ljubljana
		#france
		87 90 91
	}
	ownedprovinces    = {
		430  431  425  422  424  421  420  416  423  415  414  419 412 411 400 394 434
		410 418 426 427 428 433  413 417 435 432
		#429 #malta
		94 #corsica
	}

	controlledprovinces    = {
		430  431  425  422  424  421  420  416  423  415  414  419 412 411 400 394 434
		410 418 426 427 428 433  413 417 435 432
		#429 #malta
		94 #corsica
	}
	claimedprovinces =  {
		#349 #Ljubljana
	}
  peacetime_ic_mod = 0.7
	diplomacy =
  {
    relation = { tag = VIC value = 200 }
    relation = { tag = U00 value = 200 access = yes }
    relation = { tag = U06 value = 200 }
    relation = { tag = GER value = -200 }
  }
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	9040 #Battlefield Dest
	#9090 #Operational Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	#4050 #Basic Escort
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	#4190 #Basic Naval Bomber
	#4220 #Basic Strat Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2030 #Early Tank
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	2330 #Basic Artillery
	2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5060 #Improved Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	#5320 #Basic Computer
	
	7550 #Rocket Testing

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	#1150 #Early Marines
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1310 #Rear Area Supply
	1340 #Rear Area Repair

	1230 #Basic Motorized Division
	1120 #Basic Mountaineers

	##Land Doctrines##
	14000 #Great War Hospital
	
	6010 #Firepower Focus
	6020 #Superior Firepower
	6040 #Delay

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being
	
	82300 #Basic Amphib Warfare

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3150 #Basic Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3270 #Basic Battleship
	3320 #GW Carrier
	3330 #Early Carrier
	3340 #Basic Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	3430 #Long Range Sub
	
	12100 12110 12120 #CVL
	4900 4910 #CAG
	3810 #Troopship
  }
  headofstate            = { type = 9 id = 885034 }
  headofgovernment       = { type = 9 id = 885035 }
  foreignminister        = { type = 9 id = 885009 }
  armamentminister       = { type = 9 id = 885012 }
  ministerofsecurity     = { type = 9 id = 885016 }
  ministerofintelligence = { type = 9 id = 885022 }
  chiefofstaff           = { type = 9 id = 885025 }
  chiefofarmy            = { type = 9 id = 885026 }
  chiefofnavy            = { type = 9 id = 885029 }
  chiefofair             = { type = 9 id = 885032 }
  #Army
  landunit =
  { id       = { type = 10000 id = 972 }
    location = 400
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 973 }
      name   = "1a Divisione"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 974 }
      name   = "2a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 975 }
      name   = "3a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 976 }
    location = 412
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 977 }
      name   = "4a Divisione"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 978 }
      name   = "5a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 979 }
      name   = "6a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 980 }
    location = 411
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 981 }
      name   = "7a Divisione"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 982 }
      name   = "8a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 983 }
      name   = "9a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 1016 }
    location = 419
    name     = "4th Army Corps"
    division =
    { id     = { type = 10000 id = 1017 }
      name   = "10a Divisione"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 1018 }
      name   = "11a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 1019 }
      name   = "12a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 958 }
    location = 410
    name     = "5th Army Corps"
    division =
    { id     = { type = 10000 id = 959 }
      name   = "1a Armata"
      type   = hq
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 960 }
      name   = "13a Divisione"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 961 }
      name   = "14a Divisione"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 962 }
      name   = "15a Divisione"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 963 }
      name   = "16a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 964 }
      name   = "17a Divisione"
      type   = infantry
      model  = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 1026 }
    location = 434
    name     = "Sardinia Garrison"
    division =
    { id     = { type = 10000 id = 1027 }
      name   = "18a Divisione"
      type   = garrison
      model  = 0
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 1028 }
    location = 430
    name     = "Sicily Garrison"
    division =
    { id     = { type = 10000 id = 1029 }
      name   = "19a Divisione"
      type   = garrison
      model  = 0
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 1030 }
    location = 94
    name     = "Corsica Garrison"
    division =
    { id     = { type = 10000 id = 1031 }
      name   = "20a Divisione"
      type   = garrison
      model  = 0
	  strength = 35
    }
  }
  #union
  landunit =
  { id       = { type = 10700 id = 943 }
    location = 417
    name     = "2nd Armored Cavalry"
    division =
    { id     = { type = 10700 id = 944 }
      name   = "4. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 945 }
      name   = "5. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 946 }
      name   = "25. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1000 }
    location = 418
    name     = "7th Army Corps"
    division =
    { id     = { type = 10700 id = 1001 }
      name   = "37. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 1002 }
      name   = "38. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1003 }
      name   = "39. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1012 }
    location = 423
    name     = "10th Army Corps"
    # division =
    # { id     = { type = 10700 id = 1013 }
      # name   = "46. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
      # extra  = engineer
      # brigade_model = 0
    # }
    division =
    { id     = { type = 10700 id = 1014 }
      name   = "47. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1015 }
      name   = "48. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    # division =
    # { id     = { type = 10700 id = 1005 }
      # name   = "40. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
      # extra  = artillery
      # brigade_model = 2
    # }
    division =
    { id     = { type = 10700 id = 1006 }
      name   = "41. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    # division =
    # { id     = { type = 10700 id = 1007 }
      # name   = "Italian HQ"
      # type   = hq
      # model  = 0
    # }
  }
  airunit =
  { location = 419
    base     = 419
    id       = { type = 10500 id = 1036 }
    name     = "Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 1037 }
      name   = "1o Gruppo Caccia"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1038 }
      name   = "2o Gruppo Caccia"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1039 }
      name   = "3o Gruppo Caccia"
      type   = interceptor
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1100 }
    name     = "Gulf of Salerno Fleet"
    location = 421
    base     = 421
    division =
    { id     = { type = 10500 id = 1101 }
      name   = "SURN Res Publica"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1102 }
      name   = "SURN Proletarian"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1103 }
      name   = "SURN Unity"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1104 }
      name   = "SURN Corinth"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1107 }
      name   = "SURN Antioch"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1108 }
      name   = "SURN Ferrara"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1110 }
      name   = "SURN Venice"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1111 }
      name   = "SURN Albania"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1112 }
      name   = "SURN Rimini"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1113 }
      name   = "SURN Florence"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1114 }
      name   = "SURN Pescara"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1115 }
      name   = "SURN Thessalonike"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1118 }
      name   = "SURN Larisa"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1119 }
      name   = "SURN Agrinio"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1120 }
      name   = "SURN Edessa"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1121 }
      name   = "9. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1122 }
      name   = "10. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1123 }
      name   = "11. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1124 }
    name     = "Ionian Sea Fleet"
    location = 422
    base     = 422
    division =
    { id     = { type = 10500 id = 1125 }
      name   = "SURN Consul"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1126 }
      name   = "SURN Tribune"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1127 }
      name   = "SURN Commune"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1128 }
      name   = "SURN Belgrade"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1129 }
      name   = "SURN Roma"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1130 }
      name   = "SURN Rhodos"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1131 }
      name   = "SURN Patras"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1132 }
      name   = "SURN Marmara"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1133 }
      name   = "SURN Anzio"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1134 }
      name   = "SURN Cassino"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1135 }
      name   = "SURN Tirana"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1136 }
      name   = "SURN Nov Pazar"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1137 }
      name   = "SURN Bursa"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1138 }
      name   = "SURN Malta"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1139 }
      name   = "SURN Teheran"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1140 }
      name   = "SURN Persia"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1141 }
      name   = "SURN Armenia"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1142 }
      name   = "SURN Baku"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1144 }
      name   = "SURN Baghdad"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1143 }
      name   = "SURN Calabria"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1165 }
      name   = "12. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1169 }
      name   = "13. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1170 }
      name   = "14. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1171 }
      name   = "15. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
  }
}
