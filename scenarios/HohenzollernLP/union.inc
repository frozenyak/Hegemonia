#####################
# Country main data #
#####################

country =
{ 
	tag                    = U00
	regular_id = U09
	intrinsic_gov_type     = leninist
	ai = "union.ai"
  dissent		 = 10
#Great Power
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 1000
  money                  = 500
  manpower               = 193
  transports             = 300
  escorts                = 20
  capital                = 409
  SpyInfo                = { country = "U00" NumberOfSpies = 10 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 10
    freedom           = 3
    free_market       = 3 #2
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  research_mod = 0.75
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = ARA value = 200 access = yes }
    relation = { tag = U01 value = -100 }
    relation = { tag = EGY value = -200 guaranteed = { day = 5 month = january year = 1933 } }
    relation = { tag = VIC value = 200 }
    relation = { tag = RSI value = 200 access = yes }
    relation = { tag = IND value = -200 }
    relation = { tag = RUS value = 50 }
  }
   nationalprovinces      = {
	363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383
	#alb
	359 362 361 360
	#bul
	318 323 325 324 321 320 319 322
	317 326
	#tur
	409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 384 1077 1072 1073 1055 1056
	#yug
	338 353 350 355 354 356 343 332 330 342 329  333 328  357 358 351 340 339 335 327 331 334
	337 #345 344 352 347
	#mandate syria/lebanon
	1018 1019 1020 1021 1054 1014 1015 1016 1017
	#persia
	1083 1081 1080 1085 1082 1084 1087 1089 1090 1088 1086
	#palestine
	1008 1009 1010 1011 1013 1172
	#cyprus
	387 388
	#armenia-azerbaijan
	711 712 713 714
	#malta
	429
	}
   ownedprovinces      = {
	363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 381 383
	#alb
	359 362 361 360
	#bul
	318 323 325 324 321 320 319 322
	317 326
	#tur
	409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 384 1077 1072 1073 1055 1056
	#yug
	338 353 350 355 354 356 343 332 330 342 329  333 328  357 358 351 340 339 335 327 331 334
	337 #345 344 352 347
	#mandate syria/lebanon
	1018 1019 1020 1021 1054 1014 1015 1016 1017
	#persia
	1083 1081 1080 1085 1082 1084 1087 1089 1090 1088 1086
	#palestine
	1008 1009 1010 1011 1013 1172
	#cyprus
	387 388
	#armenia-azerbaijan
	711 712 713 714
	#malta
	429
	}
	controlledprovinces      = {
	363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 381 383
	#alb
	359 362 361 360
	#bul
	318 323 325 324 321 320 319 322
	317 326
	#tur
	409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 384 1077 1072 1073 1055 1056
	#yug
	338 353 350 355 354 356 343 332 330 342 329  333 328  357 358 351 340 339 335 327 331 334
	337 #345 344 352 347
	#mandate syria/lebanon
	1018 1019 1020 1021 1054 1014 1015 1016 1017
	#persia
	1083 1081 1080 1085 1082 1084 1087 1089 1090 1088 1086
	#palestine
	1008 1009 1010 1011 1013 1172
	#cyprus
	387 388
	#armenia-azerbaijan
	711 712 713 714
	#malta
	429
	}
	claimedprovinces	= {
		#italy
		#403 404 405 406
		#croatia
		#349 352 347 #344 345
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
	#6310 #Large Front
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

	8120 # Battlefleet Concentration Doctrine
	8310 # Floating Fortress Doctrine
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
  headofstate            = { type = 9 id = 102044 }
  headofgovernment       = { type = 9 id = 102063 }
  foreignminister        = { type = 9 id = 102211 }
  armamentminister       = { type = 9 id = 102139 }
  ministerofsecurity     = { type = 9 id = 102003 }
  ministerofintelligence = { type = 9 id = 102133 }
  chiefofstaff           = { type = 9 id = 102160 }
  chiefofarmy            = { type = 9 id = 102194 }
  chiefofnavy            = { type = 9 id = 102173 }
  chiefofair             = { type = 9 id = 102171 }
  #Army
  landunit =
  { id       = { type = 10700 id = 894 }
    location = 359
    name     = "3. Mountain Corps"
    division =
    { id     = { type = 10700 id = 895 }
      name   = "7. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 896 }
      name   = "8. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 897 }
      name   = "9. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
  }
  # landunit =
  # { id       = { type = 10700 id = 898 }
    # location = 1018
    # name     = "Palestine Army"
    # division =
    # { id     = { type = 10700 id = 899 }
      # name   = "Palestine HQ"
      # type   = hq
      # model  = 0
    # }
    # division =
    # { id     = { type = 10700 id = 900 }
      # name   = "81. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
      # extra  = anti_air
      # brigade_model = 0
    # }
    # division =
    # { id     = { type = 10700 id = 901 }
      # name   = "82. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
      # extra  = artillery
      # brigade_model = 0
    # }
    # division =
    # { id     = { type = 10700 id = 902 }
      # name   = "83. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
      # extra  = engineer
      # brigade_model = 0
    # }
    # division =
    # { id     = { type = 10700 id = 903 }
      # name   = "84. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
    # }
    # division =
    # { id     = { type = 10700 id = 904 }
      # name   = "84. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
    # }
  # }
  landunit =
  { id       = { type = 10700 id = 905 }
    location = 321
    name     = "11th Army Corps"
    division =
    { id     = { type = 10700 id = 907 }
      name   = "75. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 908 }
      name   = "76. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 909 }
      name   = "77. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 910 }
    location = 339
    name     = "12th Army Corps"
    division =
    { id     = { type = 10700 id = 911 }
      name   = "45. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 912 }
      name   = "46. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 913 }
      name   = "47. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 914 }
    location = 1054
    name     = "23rd Army Corps"
    division =
    { id     = { type = 10700 id = 915 }
      name   = "225. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 916 }
      name   = "226. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 906 }
      name   = "227. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 917 }
    location = 713
    name     = "2. Mountain Corps"
    division =
    { id     = { type = 10700 id = 918 }
      name   = "6. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 919 }
      name   = "5. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 920 }
      name   = "4. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 921 }
    location = 1089
    name     = "Persian Army"
    division =
    { id     = { type = 10700 id = 923 }
      name   = "Persia HQ"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10700 id = 924 }
      name   = "121. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 925 }
      name   = "122. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 926 }
      name   = "123. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 927 }
      name   = "124. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 928 }
      name   = "124. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 932 }
    location = 1088
    name     = "1. Mountain Corps"
    division =
    { id     = { type = 10700 id = 931 }
      name   = "3. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 930 }
      name   = "1. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 929 }
      name   = "2. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 937 }
    location = 321
    name     = "5th Armored Cavalry"
    division =
    { id     = { type = 10700 id = 936 }
      name   = "12. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 938 }
     name   = "35. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 947 }
    location = 1021
    name     = "3rd Armored Cavalry"
    division =
    { id     = { type = 10700 id = 948 }
      name   = "7. Tethorakismeno Taxiarchia"
      type   = cavalry
      model  = 1
	  strength = 50
	  extra = armored_car
	  brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 949 }
      name   = "8. Tethorakismeno Taxiarchia"
      type   = cavalry
      model  = 1
	  strength = 50
	  extra = armored_car
	  brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 957 }
      name   = "5. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 939 }
    location = 338
    name     = "1st Armored Cavalry"
    division =
    { id     = { type = 10700 id = 940 }
      name   = "1. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 941 }
      name   = "2. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 971 }
      name   = "15. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
 landunit =
  { id       = { type = 10700 id = 1024 }
    location = 409
    name     = "4th Armored Cavalry"
    division =
    { id     = { type = 10700 id = 942 }
      name   = "3. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 950 }
      name   = "91. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 935 }
      name   = "11. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 951 }
    location = 409
    name     = "1st Army Corps"
    # division =
    # { id     = { type = 10700 id = 952 }
      # name   = "1. Elliniki stratos"
      # type   = hq
      # model  = 0
    # }
    division =
    { id     = { type = 10700 id = 953 }
      name   = "1. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 954 }
      name   = "2. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 955 }
      name   = "3. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = engineer
      brigade_model = 0
    }
    # division =
    # { id     = { type = 10700 id = 956 }
      # name   = "4. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
    # }
    # division =
    # { id     = { type = 10700 id = 934 }
      # name   = "34. Stratiotis Diairesi"
      # type   = infantry
      # model  = 0
    # }
  }
  landunit =
  { id       = { type = 10700 id = 965 }
    location = 355
    name     = "Illyrian Army"
    division =
    { id     = { type = 10700 id = 966 }
      name   = "Illyria HQ"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10700 id = 967 }
      name   = "11. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 968 }
      name   = "12. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 969 }
      name   = "13. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 970 }
      name   = "14. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 933 }
      name   = "84. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 984 }
    location = 386
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10700 id = 985 }
      name   = "25. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 986 }
      name   = "26. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 987 }
      name   = "27. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 988 }
    location = 377
    name     = "4th Army Corps"
    division =
    { id     = { type = 10700 id = 989 }
      name   = "28. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 990 }
      name   = "29. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 991 }
      name   = "30. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 992 }
    location = 1086
    name     = "5th Army Corps"
    division =
    { id     = { type = 10700 id = 993 }
      name   = "31. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 994 }
      name   = "32. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 995 }
      name   = "33. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 996 }
    location = 1019
    name     = "6th Army Corps"
    division =
    { id     = { type = 10700 id = 997 }
      name   = "34. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 998 }
      name   = "35. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 999 }
      name   = "36. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1008 }
    location = 1078
    name     = "9th Army Corps"
    division =
    { id     = { type = 10700 id = 1009 }
      name   = "43. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 1010 }
      name   = "44. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1011 }
      name   = "45. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1020 }
    location = 1085
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10700 id = 1021 }
      name   = "1. Ippiko Diairesi"
      type   = cavalry
      model  = 2
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1022 }
      name   = "2. Ippiko Diairesi"
      type   = cavalry
      model  = 2
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1023 }
      name   = "3. Ippiko Diairesi"
      type   = cavalry
      model  = 2
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1032 }
    location = 388
    name     = "Cyprus Garrison"
    division =
    { id     = { type = 10700 id = 1033 }
      name   = "55. Stratiotis Diairesi"
      type   = garrison
      strength = 35
    }
  }
  landunit =
  { id       = { type = 10700 id = 1034 }
    location = 429
    name     = "Malta Garrison"
    division =
    { id     = { type = 10700 id = 1035 }
      name   = "125. Stratiotis Diairesi"
      type   = garrison
      strength = 35
      locked   = yes
    }
  }
  landunit =
  { id       = { type = 10700 id = 1036 }
    location = 342
    name     = "22nd Armored Cavalry"
    division =
    { id     = { type = 10700 id = 1037 }
      name   = "44. Tethorakismeno Taxiarchia"
      type   = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1038 }
      name   = "45. Ippiko Diairesi"
      type   = cavalry
      model  = 1
	  strength = 50
	  extra = armored_car
	  brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 1039 }
      name   = "65. Stratiotis Diairesi"
      type   = motorized
      model  = 0
	  strength = 50
	  extra = light_armor_brigade
	  brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 10700 id = 1040 }
    location = 358
    name     = "37th Army Corps"
    division =
    { id     = { type = 10700 id = 1041 }
      name   = "77. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10700 id = 1042 }
      name   = "78. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1043 }
      name   = "79. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10700 id = 1044 }
    location = 1067
    name     = "30th Army Corps"
    division =
    { id     = { type = 10700 id = 1045 }
      name   = "46. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1046 }
      name   = "68. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10700 id = 1047 }
      name   = "40. Stratiotis Diairesi"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  #Air Force
  airunit =
  { location = 1021
    base     = 1021
    id       = { type = 10500 id = 1032 }
    name     = "Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 1033 }
      name   = "1. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1034 }
      name   = "2. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1035 }
      name   = "3. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 355
    base     = 355
    id       = { type = 10500 id = 1040 }
    name     = "Tactical Bomber Squadron"
    division =
    { id     = { type = 10500 id = 1041 }
      name   = "1. Bombardistiko Taktikos Sygkrotima"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1042 }
      name   = "1. Bombardistiko Taktikos Sygkrotima"
      type   = tactical_bomber
      model  = 0
    }
   }
  airunit =
  { location = 373
    base     = 373
    id       = { type = 10500 id = 1093 }
    name     = "Naval Bomber Squadron"
    division =
    { id     = { type = 10500 id = 1043 }
      name   = "1. Bombardistiko Naftikos Sygkrotima"
      type   = naval_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1044 }
      name   = "2. Bombardistiko Naftikos Sygkrotima"
      type   = naval_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 1045 }
    name     = "Transport Fleet"
    location = 409
    base     = 409
    division =
    { id     = { type = 10500 id = 1046 }
      name   = "1. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1047 }
      name   = "2. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1048 }
      name   = "1. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1049 }
      name   = "2. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1050 }
      name   = "3. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1051 }
      name   = "4. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1052 }
      name   = "5. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1053 }
      name   = "6. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1054 }
      name   = "7. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1055 }
      name   = "8. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1056 }
      name   = "9. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1057 }
      name   = "10. Metafero Naftiko"
      type   = transport
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1058 }
    name     = "Submarine Fleet"
    location = 377
    base     = 377
    division =
    { id     = { type = 10500 id = 1059 }
      name   = "1. Ypobrychio Naftiko"
      type   = submarine
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1060 }
      name   = "2. Ypobrychio Naftiko"
      type   = submarine
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1061 }
      name   = "3. Ypobrychio Naftiko"
      type   = submarine
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1062 }
      name   = "4. Ypobrychio Naftiko"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1063 }
      name   = "5. Ypobrychio Naftiko"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1064 }
      name   = "6. Ypobrychio Naftiko"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1065 }
      name   = "7. Ypobrychio Naftiko"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1066 }
      name   = "8. Ypobrychio Naftiko"
      type   = submarine
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1067 }
    name     = "Adriatic Sea Fleet"
    location = 359
    base     = 359
    division =
    { id     = { type = 10500 id = 1068 }
      name   = "SURN Constantinople"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1069 }
      name   = "SURN Tiberius Gracchus"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1070 }
      name   = "SURN Lucius Appuleius"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1071 }
      name   = "SURN Gaius Gracchus"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1075 }
      name   = "SURN Epirus"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1076 }
      name   = "SURN Athenai"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1077 }
      name   = "SURN Sarajevo"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1078 }
      name   = "SURN Sofija"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1079 }
      name   = "SURN Split"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1080 }
      name   = "SURN Napoli"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1081 }
      name   = "SURN Palerno"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1083 }
      name   = "SURN Corsica"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1094 }
      name   = "3. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1095 }
      name   = "4. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1096 }
      name   = "5. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1097 }
      name   = "6. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1098 }
      name   = "7. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1099 }
      name   = "8. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1145 }
    name     = "Sea of Marmara Fleet"
    location = 409
    base     = 409
    division =
    { id     = { type = 10500 id = 1146 }
      name   = "SURN Equitas"
      type   = carrier
      model  = 0
      extra  = cag
      brigade_model = 0
    }
    division =
    { id     = { type = 10500 id = 1147 }
      name   = "SURN Quaestor"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1148 }
      name   = "SURN Censor"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1149 }
      name   = "SURN Aedile"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1150 }
      name   = "SURN Secui"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1151 }
      name   = "SURN Pristina"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1152 }
      name   = "SURN Skopje"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1157 }
      name   = "SURN Varna"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1158 }
      name   = "SURN Nis"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1159 }
      name   = "SURN Novi Sad"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1160 }
      name   = "SURN Nov Pazar"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1161 }
      name   = "SURN Vlore"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1162 }
      name   = "SURN Catania"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1163 }
      name   = "SURN Bologna"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1164 }
      name   = "SURN Mostar"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1166 }
      name   = "16. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1167 }
      name   = "17. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1168 }
      name   = "18. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1172 }
    name     = "Cyprus Fleet"
    location = 388
    base     = 388
    division =
    { id     = { type = 10500 id = 1153 }
      name   = "SURN Jerusalem"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1154 }
      name   = "SURN Tripoli"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1155 }
      name   = "SURN Basrah"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1156 }
      name   = "SURN Van"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1116 }
      name   = "SURN Trebizond"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1117 }
      name   = "SURN Abadan"
      type   = light_cruiser
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1173 }
    name     = "Persian Gulf Fleet"
    location = 1089
    base     = 1089
    division =
    { id     = { type = 10500 id = 1105 }
      name   = "SURN Femina"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1072 }
      name   = "SURN Libertas"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1073 }
      name   = "SURN Parilitas"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1074 }
      name   = "SURN Fatum"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1106 }
      name   = "SURN Latinum"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1109 }
      name   = "SURN Revolution"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1084 }
      name   = "SURN Ionia"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1085 }
      name   = "SURN Anatolia"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1086 }
      name   = "SURN Slavia"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1087 }
      name   = "SURN Labor"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1088 }
      name   = "SURN Populi"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1089 }
      name   = "SURN Perugia"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1090 }
      name   = "19. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1091 }
      name   = "20. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1092 }
      name   = "21. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1174 }
      name   = "22. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
  }
}
