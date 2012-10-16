#####################
# Country main data #
#####################

country =
{ tag                    = JAP
  ai = "japan.ai"
  capital                = 1552
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 270
  transports             = 200
  escorts                = 20
  SpyInfo                = { country = "JAP" NumberOfSpies = 5 }
  research_mod = 0.75
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = GER value = 100 }
    relation = { tag = U08 value = 100 }
    relation = { tag = CHI value = 50 }
    relation = { tag = USA value = 50 }
    relation = { tag = CYN value = -100 }
    relation = { tag = MEX value = -100 }
  }
   nationalprovinces      = { 
		1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1555 1542
		1541 #Okha (Russian North Sahalin)
		1547 1548 1546
	}
   ownedprovinces    = {
		1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561
		1662 1661 1663 1664
		1562 1563 1564 1542 1555 1547 1548 1546
		1672
		1541 # Sakhalin
	}
	controlledprovinces    = {
		1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561
		1662 1661 1663 1664
		1562 1563 1564 1542 1555 1547 1548 1546
		1672
		1541 # Sakhalin
	}
	claimedprovinces = {
		#chinese ports
		#1338 1358 1346 1371 1372 1241
		#port arthur
		#1219
		#taiwan
		#1361 1362 1363 1364
		#korea
		#1228 1229 1233 1232 1231 1230 # South Korea 
		#1223 1221 1222 1226 1227 1224 1225 # North Korea
	}

  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	#9090 #operational
	9040 #Battlefield Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4190 #Basic Naval Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5190 #Basic Oil Refining

	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5060 #Improved Machine Tools
	5090 #Improved Construction
	5310 #Census Tabulating
	7550 #Rocket Testing
	
	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1150 #Early Marines
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	14000 #Great War Hospital
	
	6030 #Grand Battleplan
	6120 #Trench Warfare
	6390 #Light infantry

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8060 #Base Strike

	8090 #indirect approach
	8100 #subs cv
	#8110 #cv taskforce

	8180 # Indirect Strike Doctrine
	82300 #Basic Amphib Warfare
	82310 #Imp Amphib Warfare

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3320 #GW Carrier
	3330 #Early Carrier
	3400 #Dive Boat
	3410 #Short Range Sub

	3340 #CV
	12100 12110 12120 #CVL
	3090 3100 #CL
	3150 #CA
	3420 3430 #SS
	3270 #BB
	3030 #DD
	
	4900 4910 4920 #CAG
	3810 3820 #Troopship
  }
  blueprints             = { 8180 8230 8310 8320 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3 #5
    political_left    = 3
    freedom           = 3
    free_market       = 7 #3
    professional_army = 5
    defense_lobby     = 7 #8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50026 }
  foreignminister        = { type = 9 id = 50039 }
  armamentminister       = { type = 9 id = 50062 }
  ministerofsecurity     = { type = 9 id = 50005 }
  ministerofintelligence = { type = 9 id = 50115 }
  chiefofstaff           = { type = 9 id = 50128 }
  chiefofarmy            = { type = 9 id = 50138 }
  chiefofnavy            = { type = 9 id = 50009 }
  chiefofair             = { type = 9 id = 50010 }
  #Army
  landunit =
  { id       = { type = 10001 id = 458 }
    location = 1560
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10001 id = 459 }
      name   = "Dai 4 Kiheishidan"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 460 }
      name   = "Dai 5 Kiheishidan"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 461 }
      name   = "Dai 6 Kiheishidan"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10001 id = 462 }
    location = 1553
    name     = "7th Army Corps"
    division =
    { id     = { type = 10001 id = 463 }
      name   = "Dai 31 'Zentsuji' Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 464 }
      name   = "Dai 32 'Kurume' Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 465 }
      name   = "Dai 33 Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 467 }
    location = 1554
    name     = "Special Landing Forces"
    division =
    { id     = { type = 10001 id = 468 }
      name   = "1. Marine Division"
      type   = marine
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 471 }
    location = 1547
    name     = "Imperial Cavalry"
    division =
    { id     = { type = 10001 id = 472 }
      name   = "Dai 1 Kiheishidan"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 470 }
      name   = "Dai 2 Kiheishidan"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 466 }
      name   = "Dai 3 Kiheishidan"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10001 id = 473 }
    location = 1554
    name     = "1st Army Corps"
    division =
    { id     = { type = 10001 id = 474 }
      name   = "Dai 1 Hômengun Shireibu"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 475 }
      name   = "Dai 5 'Hiroshima' Hoheishidan"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 476 }
      name   = "Dai 1 'Tokyo' Hoheishidan"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 477 }
      name   = "Dai 2 'Sendai' Hoheishidan"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 478 }
      name   = "Dai 3 'Nagoya' Hoheishidan"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 479 }
      name   = "Dai 4 'Osaka' Hoheishidan"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 480 }
    location = 1557
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10001 id = 481 }
      name   = "Dai 2 Gun Shireibu"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 482 }
      name   = "Dai 6 'Kumamoto' Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 483 }
      name   = "Dai 7 'Asahigawa' Hoheishidan"
      type   = infantry
      model  = 0
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 484 }
      name   = "Dai 8 'Hirosaki' Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 485 }
      name   = "Dai 9 'Kanazawa' Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 486 }
      name   = "Dai 10 'Himeji' Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 487 }
    location = 1552
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10001 id = 488 }
      name   = "Dai 11 'Zentsuji' Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 489 }
      name   = "Dai 12 'Kurume' Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 490 }
      name   = "Dai 13 Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 491 }
    location = 1561
    name     = "4th Army Corps"
    division =
    { id     = { type = 10001 id = 492 }
      name   = "Dai 14 'Utsunomi' Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 493 }
      name   = "Dai 15 Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 494 }
      name   = "Dai 16 'Kyoto' Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 496 }
    location = 1552
    name     = "5th Army Corps"
    division =
    { id     = { type = 10001 id = 497 }
      name   = "Dai 17 Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 498 }
      name   = "Dai 19 'Ranan' Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 499 }
      name   = "Dai 20 'Keyo' Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 500 }
    location = 1559
    name     = "6th Army Corps"
    division =
    { id     = { type = 10001 id = 501 }
      name   = "Dai 22 Hoheishidan"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 502 }
      name   = "Dai 23 Hoheishidan"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 503 }
      name   = "Dai 24 Hoheishidan"
      type   = infantry
      model  = 0
    }
  }
  # Pacific garrisons:
  landunit =
  { id       = { type = 10001 id = 504 }
    name     = "Naha Chuton Gun"
    location = 1564
    division =
    { id       = { type = 10001 id = 505 }
      name     = "Naha Shubitai"
      strength = 70
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10001 id = 506 }
    name     = "Toyohara Chuton Gun"
    location = 1542
    division =
    { id       = { type = 10001 id = 507 }
      name     = "Toyohara Shubitai"
      strength = 70
      type     = garrison
    }
  }
	landunit = {
		id       = {  type = 10001 id = 508  }
		name     = "Iwo Jima Konkyochi tai"
		location = 1661
		division = {
			id       = {  type = 10001 id = 509  }
			name     = "Iwo Jima Keibitai"
			strength = 70
			type     = garrison
		}
	}
   landunit = {
		id       = {  type = 10001 id = 510  }
		name     = "Minami Torima Konkyochi tai"
		location = 1672
		division = {
			id       = {  type = 10001 id = 511  }
			name     = "Minami Torima Keibitai"
			strength = 70
			type     = garrison
		}
	}
	landunit = {
		id       = {  type = 10001 id = 512  }
		name     = "Saishu Chuton Gun"
		location = 1545
		division = {
			id       = {  type = 10001 id = 513  }
			name     = "Saishu Shubitai"
			strength = 70
			type     = garrison
		}
	}
	landunit = {
		id       = {  type = 10001 id = 514  }
		name     = "Shana Chuton Gun"
		location = 1543
		division = {
			id       = {  type = 10001 id = 515  }
			name     = "Shana Shubitai"
			strength = 70
			type     = garrison
		}
	}
  #Air Force
  airunit =
  { location = 1557
    base     = 1557
    id       = { type = 10500 id = 495 }
    name     = "Japanese Air Force"
    division =
    { id     = { type = 10500 id = 496 }
      name   = "Dai 1 Kyokutsi Hikodan"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 497 }
      name   = "Dai 2 Kyokutsi Hikodan"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 498 }
      name   = "Dai 1 Kaigunkogeki Hikodan"
      type   = naval_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 499 }
      name   = "Dai 2 Kaigunkogeki Hikodan"
      type   = naval_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 500 }
    name     = "1st Transport Fleet"
    location = 1552
    base     = 1552
    division =
    { id     = { type = 10500 id = 501 }
      name   = "Dai 1 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 502 }
      name   = "Dai 2 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 503 }
      name   = "Dai 3 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 504 }
      name   = "Dai 4 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 505 }
      name   = "Dai 5 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 506 }
      name   = "Dai 6 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 507 }
      name   = "Dai 7 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 508 }
      name   = "Dai 8 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 509 }
      name   = "Dai 9 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 510 }
      name   = "Dai 10 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 511 }
      name   = "IJN Kashima"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 512 }
      name   = "IJN Katori"
      type   = light_cruiser
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 513 }
    name     = "2nd Transport Fleet"
    location = 1554
    base     = 1554
    division =
    { id     = { type = 10500 id = 514 }
      name   = "Dai 11 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 515 }
      name   = "Dai 12 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 516 }
      name   = "Dai 13 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 517 }
      name   = "Dai 14 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 518 }
      name   = "Dai 15 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 519 }
      name   = "Dai 16 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 520 }
      name   = "Dai 17 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 521 }
      name   = "Dai 18 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 522 }
      name   = "Dai 19 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 523 }
      name   = "Dai 20 Yuso Sentai"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 524 }
      name   = "IJN Suzuya"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 525 }
      name   = "IJN Kumano"
      type   = light_cruiser
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 526 }
    name     = "Pacific Fleet"
    location = 1552
    base     = 1552
    division =
    { id     = { type = 10500 id = 527 }
      name   = "IJN Musashi"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 528 }
      name          = "IJN Akagi"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10500 id = 529 }
      name   = "IJN Shinano"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 530 }
      name   = "IJN Tone"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 531 }
      name   = "IJN Chikuma"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 532 }
      name   = "IJN Furutaka"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 533 }
      name   = "IJN Noshiro"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 534 }
      name   = "IJN Yahagi"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 535 }
      name   = "IJN Sakawa"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 536 }
      name   = "IJN Oyodo"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 537 }
      name   = "IJN Ioshima"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 538 }
      name   = "IJN Yasoshima"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 539 }
      name   = "IJN Yodo"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 540 }
      name   = "Dai 1 Kuchikusentai"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 541 }
      name   = "Dai 2 Kuchikusentai"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 542 }
      name   = "Dai 3 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 543 }
      name   = "Dai 4 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 544 }
      name   = "Dai 5 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id    = { type = 10500 id = 572 }
      name  = "IJN Ryujo"
      type  = light_carrier
      model = 0
      extra  = light_cag
      brigade_model = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 545 }
    name     = "China Sea Fleet"
    location = 1554
    base     = 1554
    division =
    { id     = { type = 10500 id = 546 }
      name   = "IJN Yamashiro"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 547 }
      name	= "IJN Hosho"
      type	= light_carrier
      model	= 0
      extra  = light_cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10500 id = 548 }
      name   = "IJN Hyuga"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 549 }
      name   = "IJN Nachi"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 550 }
      name   = "IJN Haguro"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 551 }
      name   = "IJN Oi"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 552 }
      name   = "IJN Kiso"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 554 }
      name   = "IJN Nagara"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 555 }
      name   = "IJN Isuzu"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 556 }
      name   = "IJN Natori"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 557 }
      name   = "IJN Yura"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 558 }
      name   = "IJN Kinu"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 559 }
      name   = "IJN Abukuma"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 560 }
      name   = "IJN Naka"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 561 }
      name   = "IJN Sendai"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 562 }
      name   = "IJN Jintsu"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 563 }
      name   = "Dai 6 Kuchikusentai"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 564 }
      name   = "Dai 7 Kuchikusentai"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 565 }
      name   = "Dai 8 Kuchikusentai"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 566 }
      name   = "Dai 9 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 567 }
      name   = "Dai 10 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 568 }
      name   = "Dai 11 Kuchikusentai"
      type   = destroyer
      model  = 1
    }
    division =
    { id            = { type = 10500 id = 571 }
      name          = "IJN Kaga"
      type          = carrier
      model         = 0
      extra         = cag
      brigade_model = 2
    }
  }
}
