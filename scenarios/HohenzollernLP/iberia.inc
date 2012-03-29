#####################
# Country main data #
#####################

country =
{ tag                    = SPA
  dissent		 = 5
#Great Power
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 76
  transports             = 200
  escorts                = 20
  capital                = 467
  SpyInfo                = { country = "SPA" NumberOfSpies = 6 }
  research_mod = 0.75
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = U01 value = 150 guaranteed = { day = 5 month = may year = 1934 } }
    relation = { tag = EGY value = 50 guaranteed = { day = 5 month = january year = 1933 } }
    relation = { tag = FIN value = 50 } #guaranteed = { day = 5 month = may year = 1934 }
    relation = { tag = GEO value = 75 } #guaranteed = { day = 5 month = may year = 1934 }
    relation = { tag = VIC value = -200 }
    relation = { tag = ENG value = 100 }
    relation = { tag = U06 value = 200 }
    relation = { tag = MEX value = 100 }
    relation = { tag = PAN value = 50 }
    relation = { tag = IRE value = 75 guaranteed = { day = 11 month = june year = 1935 } }
    relation = { tag = SCH value = 75 } #guaranteed = { day = 18 month = november year = 1935 }
  }
	nationalprovinces      = {
		444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461
		348 440 438 436 442 443 475 437 439 452 447 991 469
		455 448 449  446 462 445 459 473 465 454     450
		#portugal
		481 476 479 477 478  992 480 482 994
		#las palmas
		#990
	}
	ownedprovinces         = {
		441  444  451  466  453  460  458  472  474  471  470  467  463  468  464  457  461  456  442  443  436  438  440
		437  439  452  447   991
		446 469 450
		449 448 455 454 465 473
		462 459 445
		#715 716
		#portugal
		481 476 479 477 478  992              480 482 994
		348
		#atlantic islands
		993 2045
		#las palmas
		#990
	}
	controlledprovinces    = {
		441  444  451  466  453  460  458  472  474  471  470  467  463  468  464  457  461  456  442  443  436  438  440
		437  439  452  447   991
		446 469 450
		449 448 455 454 465 473
		462 459 445
		#715 716
		#portugal
		481 476 479 477 478  992              480 482 994
		348
		#atlantic islands
		993 2045
		#las palmas
		#990
	}
	claimedprovinces = {
		#715 716
		#atlantic islands
		993 2045
	}

  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9040 #Battlefield Dest
	#9050 #Dive Bombing
	#9090 #Operational Dest
	9140 #Strat Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	#4050 #Basic Escort
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	#4170 #Basic CAS
	#4190 #Basic Naval Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2030 #Early Tank
	#2040 #Basic Light Tank
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
	5320 #Basic Computer
	#5350 #Basic Encryption
	#5360 #Basic Decryption
	5410 #Basic Radar
	5470 #Atomic Research Faculty
	7550 5550 #Rocket Testing
	
	5480 #Atomic Research Labs

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1150 #Early Marines
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1310 #Rear Area Supply
	#1340 #Rear Area Repair

	1230 #Basic Motorized Division

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	#6120 #Trench Warfare
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

	8120 # Battlefleet Concentration Doctrine
	8310 # Floating Fortress Doctrine
	
	8100 # Subsidiary Carrier Role Doctrine
	82300 #Basic Amphib Warfare

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3040 #Improved Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3100 #Improved Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3150 #Basic Heavy Cruiser
	3160 #Improved Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3270 #Basic Battleship
	3280 #Improved Battleship
	3320 #GW Carrier
	3330 #Early Carrier
	3340 #Basic Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	#3430 #Long Range Sub
	
	12100 12110 12120 #CVL
	4900 4910 4920 #CAG
	3810 #Troopship
  }
  inventions = { 3000028 }
  policy =
  { date              = { year = 0 month = january day = 0 }
        democratic = 7 #8
        political_left = 6 #7
        freedom = 7 #10
        free_market = 7 #8
        professional_army = 4
        defense_lobby = 5 #6
        interventionism = 5 #6 #3
  }
  headofstate            = { type = 9 id = 11033 }
  headofgovernment       = { type = 9 id = 11068 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11132 }
  ministerofsecurity     = { type = 9 id = 11191 }
  ministerofintelligence = { type = 9 id = 10006 }
  chiefofstaff           = { type = 9 id = 11256 }
  chiefofarmy            = { type = 9 id = 11286 }
  chiefofnavy            = { type = 9 id = 11309 }
  chiefofair             = { type = 9 id = 10010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 320 }
    location = 460
    name     = "1st Armored Cavalry"
    division =
    { id     = { type = 10000 id = 321 }
      name   = "Sipahis al-1i"
      type   = light_armor
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 322 }
      name   = "Sipahis al-5i"
      type   = cavalry
      model  = 2
	  strength = 60
    }
    division =
    { id     = { type = 10000 id = 323 }
      name   = "Sipahis al-3i"
      type   = cavalry
      model  = 2
	  strength = 60
      extra  = armored_car
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 324 }
    location = 440
    name     = "2nd Armored Cavalry"
    division =
    { id     = { type = 10000 id = 325 }
      name   = "Sipahis al-4i"
      type   = light_armor
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 326 }
      name   = "al-Mushati al-19r"
      type   = motorized
      model  = 0
	  strength = 40
	  extra = light_armor_brigade
	  model = 1
    }
    division =
    { id     = { type = 10000 id = 327 }
      name   = "Sipahis al-6i"
      type   = cavalry
      model  = 2
	  strength = 60
      extra  = armored_car
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 328 }
    location = 436
    name     = "1st Iberian Army"
    division =
    { id     = { type = 10000 id = 329 }
      name   = "High Command North"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10000 id = 330 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 331 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 332 }
      name   = "al-Mushati al-3i"
      type   = infantry
      model  = 1
	  strength = 35
    }
    division =
    { id     = { type = 10000 id = 334 }
      name   = "al-Mushati al-4i"
      type   = infantry
      model  = 1
	  strength = 35
    }
    division =
    { id     = { type = 10000 id = 335 }
      name   = "al-Mushati al-5i"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 336 }
    location = 467
    name     = "2nd Iberian Army"
    division =
    { id     = { type = 10000 id = 337 }
      name   = "High Command South"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10000 id = 338 }
      name   = "al-Mushati al-6i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 339 }
      name   = "al-Mushati al-7i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 340 }
      name   = "al-Mushati al-8i"
      type   = infantry
      model  = 1
	  strength = 35
    }
    division =
    { id     = { type = 10000 id = 341 }
      name   = "al-Mushati al-9i"
      type   = infantry
      model  = 1
	  strength = 35
    }
    division =
    { id     = { type = 10000 id = 342 }
      name   = "al-Mushati al-10i"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 343 }
    location = 438
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 344 }
      name   = "al-Mushati al-11i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 345 }
      name   = "al-Mushati al-12i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 346 }
      name   = "al-Mushati al-13i"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 347 }
    location = 443
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 348 }
      name   = "al-Mushati al-14i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 349 }
      name   = "al-Mushati al-15i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 350 }
      name   = "al-Mushati al-16i"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 351 }
    location = 443
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 352 }
      name   = "al-Mushati al-17i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 353 }
      name   = "al-Mushati al-18i"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 354 }
      name   = "al-Mushati al-19i"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 355 }
    location = 464
    name     = "4th Army Corps"
    division =
    { id     = { type = 10000 id = 356 }
      name   = "al-Mushati al-20r"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 357 }
      name   = "al-Mushati al-21r"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 358 }
      name   = "al-Mushati al-22r"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 359 }
    location = 461
    name     = "5th Army Corps"
    division =
    { id     = { type = 10000 id = 360 }
      name   = "al-Mushati al-23r"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 361 }
      name   = "al-Mushati al-24r"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 362 }
      name   = "al-Mushati al-25r"
      type   = infantry
      model  = 1
	  strength = 35
    }
  }
  landunit =
  { id       = { type = 10000 id = 363 }
    location = 441
    name     = "1st Marine Corps"
    division =
    { id     = { type = 10000 id = 364 }
      name   = "al-Mushati al-26r"
      type   = marine
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10000 id = 365 }
      name   = "al-Mushati al-27r"
      type   = marine
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10000 id = 366 }
      name   = "al-Mushati al-28r"
      type   = marine
      model  = 0
	  strength = 75
    }
  }
	landunit =
	{	id       = {  type = 10000 id = 367  }
		location = 348
		name     = "Gibraltar"
		Division =
		{  id       = {  type = 10000 id = 368  }
			name     = "Gibraltar Force"
			type     = garrison
			strength = 25
			locked   = yes
		}
	}
  landunit =
  { id       = { type = 10000 id = 315 }
    location = 469
    name     = "1. Mountaincorps"
    division =
    { id     = { type = 10000 id = 316 }
      name   = "3. Mountaineers"
      type   = bergsjaeger
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 317 }
      name   = "1. Mountaineers"
      type   = bergsjaeger
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 318 }
      name   = "2. Mountaineers"
      type   = bergsjaeger
      model  = 0
	  strength = 40
    }
  }
  #Air Force
  airunit =
  { location = 440
    base     = 440
    id       = { type = 10500 id = 320 }
    name     = "Interceptor Flotilla"
    division =
    { id     = { type = 10500 id = 321 }
      name   = "1. IBAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 322 }
      name   = "2. IBAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 323 }
      name   = "3. IBAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 324 }
      name   = "4. IBAF Fighter Group"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 441
    base     = 441
    id       = { type = 10500 id = 325 }
    name     = "Close Support Flotilla"
    division =
    { id     = { type = 10500 id = 326 }
      name   = "1. IBAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 327 }
      name   = "2. IBAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 328 }
      name   = "3. IBAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 329 }
      name   = "4. IBAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 0
    }
  }
  airunit =
  { location = 441
    base     = 441
    id       = { type = 10500 id = 330 }
    name     = "Strategic Bomber Flotilla"
    division =
    { id     = { type = 10500 id = 331 }
      name   = "1. IBAF Strategic Bomb Group"
      type   = strategic_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 332 }
      name   = "2. IBAF Strategic Bomb Group"
      type   = strategic_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 333 }
    name     = "Transport Fleet"
    location = 441
    base     = 441
    division =
    { id     = { type = 10500 id = 334 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 335 }
      name   = "Ustul al-Hamli al-2i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 336 }
      name   = "Ustul al-Hamli al-3i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 337 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 338 }
      name   = "Flottille al-2i"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 339 }
      name   = "Flottille al-3i"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 340 }
    name     = "Submarine Fleet"
    location = 436
    base     = 436
    division =
    { id     = { type = 10500 id = 341 }
      name   = "Ustul al-Ghawwasati al-1i"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 343 }
      name   = "Ustul al-Ghawwasati al-2i"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 344 }
      name   = "Ustul al-Ghawwasati al-3i"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 345 }
      name   = "Ustul al-Ghawwasati al-4i"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 346 }
      name   = "Ustul al-Ghawwasati al-5i"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 347 }
      name   = "Ustul al-Ghawwasati al-6i"
      type   = submarine
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 348 }
    name     = "Gibraltar Fleet"
    location = 348
    base     = 348
    division =
    { id     = { type = 10500 id = 349 }
      name   = "ISS Iberia"
      type   = carrier
      model  = 1
      extra  = cag
      brigade_model = 1
    }
    division =
    { id     = { type = 10500 id = 350 }
      name   = "ISS Granada"
      type   = carrier
      model  = 0
      extra  = cag
      brigade_model = 1
    }
    division =
    { id     = { type = 10500 id = 351 }
      name   = "ISS Gibraltar"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 352 }
      name   = "ISS Ljansitar"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 353 }
      name   = "ISS Mecca"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 354 }
      name   = "ISS Valencia"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 355 }
      name   = "ISS Almeria"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 356 }
      name   = "Flottille al-4i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 357 }
      name   = "Flottille al-5i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 358 }
      name   = "Flottille al-6i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 359 }
      name   = "Flottille al-7i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 360 }
      name   = "ISS Adib"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 361 }
      name   = "ISS Afdal"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 362 }
      name   = "ISS Afulay"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 363 }
      name   = "ISS Azzam"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 364 }
      name   = "ISS Omar"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 396 }
      name   = "ISS Ilias"
      type   = light_cruiser
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 365 }
    name     = "Atlantic Fleet"
    location = 441
    base     = 441
    division =
    { id     = { type = 10500 id = 366 }
      name   = "ISS Zuhriman"
      type   = carrier
      model  = 2
      extra  = cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10500 id = 367 }
      name   = "ISS Cordoba"
      type   = carrier
      model  = 0
      extra  = cag
      brigade_model = 0
    }
    division =
    { id     = { type = 10500 id = 368 }
      name   = "ISS Yemen"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 369 }
      name   = "ISS Sevilla"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 370 }
      name   = "ISS Muhammed"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 371 }
      name   = "ISS Ceuta"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 372 }
      name   = "ISS Málaga"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 373 }
      name   = "ISS Tacfin"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 374 }
      name   = "ISS Izil"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 403 }
      name   = "ISS Ghazi"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 375 }
      name   = "ISS Fatah"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 376 }
      name   = "Flottille al-8i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 377 }
      name   = "Flottille al-9i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 378 }
      name   = "Flottille al-10i"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 379 }
      name   = "Flottille al-11i"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 380 }
      name   = "Flottille al-12i"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 381 }
      name   = "Flottille al-13i"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 382 }
      name   = "Flottille al-14i"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 383 }
    name     = "Mediterranean Fleet"
    location = 464
    base     = 464
    division =
    { id     = { type = 10500 id = 384 }
      name   = "ISS Melilla"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 385 }
      name   = "ISS Jaen"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 386 }
      name   = "ISS Murcia"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 387 }
      name   = "ISS Coruna"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 388 }
      name   = "ISS Mansur"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 389 }
      name   = "ISS Barcelona"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 390 }
      name   = "ISS Islam"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 391 }
      name   = "ISS Ali"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 392 }
      name   = "ISS Oumar"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 393 }
      name   = "ISS Labib"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 394 }
      name   = "ISS Zaki"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 395 }
      name   = "ISS Chakir"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 397 }
      name   = "Flottille al-15i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 398 }
      name   = "Flottille al-16i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 399 }
      name   = "Flottille al-17i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 400 }
      name   = "Flottille al-18i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 401 }
      name   = "Flottille al-19i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 402 }
      name   = "Flottille al-20r"
      type   = destroyer
      model  = 0
    }
  }
}
