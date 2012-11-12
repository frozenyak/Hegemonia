#####################
# Country main data #
#####################

country =
{ tag                    = U14
  regular_id = ITA
	intrinsic_gov_type = fascist
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes ai_set = yes } }
  #puppet = GER
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 83
  transports             = 20
  escorts                = 0
  capital                = 370
  SpyInfo                = { country = "U14" NumberOfSpies = 6 }
  peacetime_ic_mod = 0.9
	diplomacy =
  { relation = { tag = U00 value = -200 }
    relation = { tag = VIC value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = AUS value = 100 }
    relation = { tag = LIT value = 100 }
  }
	nationalprovinces = {
		430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434
		413 417 435 432 94 399 429 395 418 426 427 428 433
		#swiss
		#390
		#france
		87 90 91
		#germany
		#402
		#austria
		#405 403 404 406 394
		#union
		#343 350 371
	}
	ownedprovinces = {
		393 395 396 398 399 401 407 408
		#france
		91 #87 90
	}
	controlledprovinces = {
		393 395 396 398 399 401 407 408
		#france
		91 #87 90
	}
	claimedprovinces = {
		#france
		#91 87 90
	}

  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	9040 #Battlefield Dest
	
	9050 #Dive Bombing

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4170 #Basic CAS

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	#2400 #Early Anti-Tank
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

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply
	
	1230 #Basic Motorized Division

	##Land Doctrines##
	14000 #Great War Hospital
	
	6030 #Grand Battleplan
	6120 #Trench Warfare
	6560 #defensive focus

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing

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
	3400 #Dive Boat
	3410 #Short Range Sub
	#3420 #Med Range Sub
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #3
    political_left    = 4
    freedom           = 3
    free_market       = 4 #3
    professional_army = 5
    defense_lobby     = 7 #8
    interventionism   = 7
  }
  headofstate            = { type = 9 id = 508001 }
  headofgovernment       = { type = 9 id = 508035 }
  foreignminister        = { type = 9 id = 508003 }
  armamentminister       = { type = 9 id = 508004 }
  ministerofsecurity     = { type = 9 id = 508019 }
  ministerofintelligence = { type = 9 id = 508006 }
  chiefofstaff           = { type = 9 id = 508023 }
  chiefofarmy            = { type = 9 id = 508008 }
  chiefofnavy            = { type = 9 id = 508009 }
  chiefofair             = { type = 9 id = 508010 }
  #Army
  landunit =
  { id       = { type = 10001 id = 100 }
    location = 408
    name     = "1st Army Corps"
    division =
    { id     = { type = 10001 id = 101 }
      name   = "Lombard High Command"
      type   = hq
      model  = 0
      strength = 75
    }
    division =
    { id     = { type = 10001 id = 102 }
      name   = "1a Divisione 'Superga'"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
      strength = 60
    }
    division =
    { id     = { type = 10001 id = 103 }
      name   = "2a Divisione 'Sforzesca'"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 0
      strength = 60
    }
   }
   landunit =
  { id       = { type = 30500 id = 117 }
    location = 393
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10001 id = 104 }
      name   = "3a Divisione 'Ravenna'"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
      strength = 60
    }
    division =
    { id     = { type = 10001 id = 105 }
      name   = "7a Divisione 'Lupi di Toscana'"
      type   = infantry
      model  = 0
      strength = 60
    }
    division =
    { id     = { type = 10001 id = 106 }
      name   = "8a Divisione"
      type   = infantry
      model  = 0
      strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 107 }
    location = 396
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10001 id = 108 }
      name   = "5a Divisione 'Cosseria'"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 0
      strength = 60
    }
    division =
    { id     = { type = 10001 id = 109 }
      name   = "6a Divisione 'Cuneo'"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
      strength = 60
    }
  }
  landunit =
  { id       = { type = 10001 id = 110 }
    location = 91
    name     = "Corpo d'Armata Alpina"
    division =
    { id     = { type = 10001 id = 111 }
      name   = "1a Divisione Alpina 'Taurinense'"
      type   = bergsjaeger
      model  = 0
      extra  = engineer
      brigade_model = 0
      strength = 10
    }
    division =
    { id     = { type = 10001 id = 112 }
      name   = "2a Divisione Alpina 'Tridentina'"
      type   = bergsjaeger
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10001 id = 115 }
      name   = "3a Divisione Alpina 'Julia'"
      type   = bergsjaeger
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10001 id = 113 }
    location = 401
    name     = "Trento Corps"
    division =
    { id     = { type = 10001 id = 114 }
      name   = "4a Divisione 'Livorno'"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
      strength = 60
    }
    division =
    { id     = { type = 10001 id = 116 }
      name   = "16a Divisione"
      type   = infantry
      model  = 1
      strength = 40
    }
    division =
    { id     = { type = 10001 id = 118 }
      name   = "17a Divisione"
      type   = infantry
      model  = 0
      strength = 40
    }
  }
  #Air Force
  airunit =
  { location = 396
    base     = 396
    id       = { type = 10500 id = 613 }
    name     = "Lombard Air Force"
    division =
    { id     = { type = 10500 id = 614 }
      name   = "1o Gruppo Caccia 'Aquila'"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 615 }
      name   = "1o Gruppo D'Assalto 'Centauro'"
      type   = cas
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 599 }
    name     = "Transport Fleet"
    location = 396
    base     = 396
    division =
    { id     = { type = 10500 id = 600 }
      name   = "Squadrone Giampaolo"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 601 }
      name   = "Squadrone Tarquinia"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 602 }
      name   = "Squadrone Maria"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 607 }
      name   = "RM Genova"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 610 }
      name   = "1a Flottiglia Torpediniere"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 611 }
      name   = "2a Flottiglia Torpediniere"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 603 }
    name     = "Lombard Navy"
    location = 396
    base     = 396
    division =
    { id     = { type = 10500 id = 604 }
      name   = "RM Guiseppe I Tittoni"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 605 }
      name   = "RM Milano"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 606 }
      name   = "RM Duca degli Abruzzi"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 608 }
      name   = "RM Leonardo Da Vinci"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 609 }
      name   = "RM Marco Polo"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 612 }
      name   = "3a Flottiglia Torpediniere"
      type   = destroyer
      model  = 2
    }
  }
}
