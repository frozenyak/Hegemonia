#####################
# Country main data #
#####################
#province = { id = 1447 ic = 2 } #Calcutta
#province = { id = 1500 ic = 3 } #Madras

province = { id = 1514 ic = 2 } #Nasik
province = { id = 1521 ic = 1 } #Baroda
province = { id = 1490 ic = 1 } #Raichur
province = { id = 1491 ic = 1 } #Nalgonda
province = { id = 1498 ic = 2 } #Bezawada
province = { id = 1488 ic = 1 } #Warangal
province = { id = 1489 ic = 1 } #Nizamabad
province = { id = 1479 ic = 1 } #Jubbulpore
province = { id = 1466 ic = 1 } #Arrah

country =
{ tag                    = U02
	regular_id = U09
	ai = "default.ai"
  capital                = 1517
  dissent		 = 10
#Large Power
  energy                 = 1000
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 646
  transports             = 30
  escorts                = 0
  SpyInfo                = { country = "U02" NumberOfSpies = 5 }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = BHU value = 100 guaranteed = { day = 6 month = august year = 1935 } }
    relation = { tag = TUR value = -200 }
    relation = { tag = U00 value = -200 }
    relation = { tag = ARA value = -200 }
    relation = { tag = U08 value = 75 }
    relation = { tag = CMB value = 75 }
  }
	nationalprovinces      = {
		#India
		1507 1513 1519 1520 1528 1481 1469 1478 1451 1454 1486 1490 1508 1480 1516 1488 1453 1489 1491 1492 1485 1470 1471 1476 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1501  1502 1503 1495 1536 1496 1514 1472 1535 1526 1497 1473 1464 1465 1498 1474 1515 1475 #1452
		#Pakistan
		1540 1534 1539 1529 1533 1538 #1537
		#ceylon
		#1509 1510 1511
		#greece
		363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383
		#alb
		359 362 360
		#bul
		325 324 321 320 319 322 #318 323
		#yug
		328 333 334
		#Turkey
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 384 1077 1072 1073 1055 1056
		#mandate syria/lebanon
		1018 1019 1020 1021 1054 1014 1015 1016 1017
		#palestine
		1008 1009 1010 1011 1013 1172
		#cyprus
		387 388
		#bengal
		1446 1448
		#1447 1444 1449 1445 1439 1443
		#tamil nadu / madurai
		#1500 1499 1504 1506 1505 1494
		#awadh
		1467 1461 1466 1468 1483 1479
	}
	ownedprovinces         = {
		#India
		1507 1513 1519 1520 1528 1481 1469 1478 1451 1454 1486 1490 1508 1480 1516 1488 1453 1489 1491 1492 1485 1470 1471 1476  1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1501 1502 1503 1495 1536 1496 1514 1472 1535 1526 1497 1473 1464 1465 1498 1474 1515 1475 #1452
		#Pakistan
		1540 1534 1539 1529 1533 1538 #1537
		#bengal
		1446 1448
		#1447 1444 1449 1445 1439 1443
		#tamil nadu / madurai
		#1500 1499 1504 1506 1505 1494
		#awadh
		1467 1461 1466 1468 1483 1479
	}
	controlledprovinces    = {
		#India
		1507 1513 1519 1520 1528 1481 1469 1478 1451 1454 1486 1490 1508 1480 1516 1488 1453 1489 1491 1492 1485 1470 1471 1476  1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1501 1502 1503 1495 1536 1496 1514 1472 1535 1526 1497 1473 1464 1465 1498 1474 1515 1475 #1452
		#Pakistan
		1540 1534 1539 1529 1533 1538 #1537
		#bengal
		1446 1448
		#1447 1444 1449 1445 1439 1443
		#tamil nadu / madurai
		#1500 1499 1504 1506 1505 1494
		#awadh
		1467 1461 1466 1468 1483 1479
	}
   claimedprovinces 	  = { 
		1537 #Peshawar
		#ceylon
		1509 1510 1511
	}

   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4050 #Basic Escort
	4120 #Interwar Bomber
	4130 #Early Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	
	#5470 #Atomic Research Faculty

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry

	#1230 #Basic Motorized Division
	1310 #Rear Area Supply
	1020 #Early Infantry
	1150 #Early Marines
	1110 #Early Mountaineers

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	6120 #Trench Warfare
	14000 #Great War Hospital
	
	#6570 #manpower
	#6300 #people army

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	
	8070 #Fleet-in-Being
	82300 #Basic Amphib Warfare
	8120 # Battlefleet Concentration Doctrine

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3810 #Troopship
  }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 2
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 104001 }
  headofgovernment       = { type = 9 id = 250015 }
  foreignminister        = { type = 9 id = 250016 }
  armamentminister       = { type = 9 id = 250004 }
  ministerofsecurity     = { type = 9 id = 104109 }
  ministerofintelligence = { type = 9 id = 104139 }
  chiefofstaff           = { type = 9 id = 250007 }
  chiefofarmy            = { type = 9 id = 104008 }
  chiefofnavy            = { type = 9 id = 104173 }
  chiefofair             = { type = 9 id = 250054 }
  #Army
  landunit =
  { id       = { type = 1 id = 441 }
    location = 1517
    name     = "Imperial High Guard"
    division =
    { id     = { type = 1 id = 442 }
      name   = "1. Elliniki stratos"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 369 }
      name   = "1. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 370 }
      name   = "2. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 371 }
    location = 1518
    name     = "1st Imperial Army"
    division =
    { id     = { type = 10000 id = 372 }
      name   = "3. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 373 }
      name   = "4. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 374 }
      name   = "5. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 375 }
    location = 1467
    name     = "2nd Imperial Army"
    division =
    { id     = { type = 10000 id = 376 }
      name   = "6. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 377 }
      name   = "7. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 378 }
      name   = "8. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 379 }
    location = 1476
    name     = "3rd Imperial Army"
    division =
    { id     = { type = 10000 id = 380 }
      name   = "9. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 381 }
      name   = "10. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 382 }
      name   = "11. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 383 }
    location = 1447
    name     = "4th Imperial Army"
    division =
    { id     = { type = 10000 id = 384 }
      name   = "12. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 385 }
      name   = "13. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 386 }
      name   = "14. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 387 }
    location = 1497
    name     = "5th Imperial Army"
    division =
    { id     = { type = 10000 id = 388 }
      name   = "15. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 389 }
      name   = "16. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 390 }
      name   = "17. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 391 }
    location = 1534
    name     = "6th Imperial Army"
    division =
    { id     = { type = 10000 id = 392 }
      name   = "18. Stratiotis Diairesi"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 393 }
      name   = "19. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 394 }
      name   = "20. Stratiotis Diairesi"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 395 }
    location = 1487
    name     = "1st Imperial Cavalry"
    division =
    { id     = { type = 10000 id = 396 }
      name   = "1. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 397 }
      name   = "2. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 398 }
      name   = "3. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 399 }
    location = 1476
    name     = "2nd Imperial Cavalry"
    division =
    { id     = { type = 10000 id = 400 }
      name   = "4. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 401 }
      name   = "5. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 402 }
      name   = "6. Ippiko Diairesi"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 403 }
    location = 1487
    name     = "1st Imperial Reserve"
    division =
    { id     = { type = 10000 id = 404 }
      name   = "1. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 405 }
      name   = "2. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 406 }
      name   = "3. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 407 }
    location = 1527
    name     = "2nd Imperial Reserve"
    division =
    { id     = { type = 10000 id = 408 }
      name   = "4. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 409 }
      name   = "5. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 410 }
      name   = "6. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 411 }
    location = 1477
    name     = "3rd Imperial Reserve"
    division =
    { id     = { type = 10000 id = 412 }
      name   = "7. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 413 }
      name   = "8. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 414 }
      name   = "9. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 415 }
    location = 1531
    name     = "4th Imperial Reserve"
    division =
    { id     = { type = 10000 id = 416 }
      name   = "10. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 417 }
      name   = "11. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 418 }
      name   = "12. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 419 }
    location = 1540
    name     = "5th Imperial Reserve"
    division =
    { id     = { type = 10000 id = 420 }
      name   = "13. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 421 }
      name   = "14. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 422 }
      name   = "15. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 423 }
    location = 1529
    name     = "6th Imperial Reserve"
    division =
    { id     = { type = 10000 id = 424 }
      name   = "16. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 425 }
      name   = "17. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 426 }
      name   = "18. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  landunit =
  { id       = { type = 10000 id = 427 }
    location = 1533
    name     = "7th Imperial Reserve"
    division =
    { id     = { type = 10000 id = 428 }
      name   = "19. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 429 }
      name   = "20. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
    division =
    { id     = { type = 10000 id = 430 }
      name   = "21. Astynomia Diairesi"
      type   = infantry
      model  = 0
	  strength = 25
    }
  }
  #Air Force
  airunit =
  { location = 1533
    base     = 1533
    id       = { type = 10500 id = 404 }
    name     = "Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 405 }
      name   = "1. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 406 }
      name   = "2. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 407 }
      name   = "3. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 408 }
      name   = "4. Machitis Sygkrotima"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 1517
    base     = 1517
    id       = { type = 10500 id = 409 }
    name     = "Bomber Flotilla"
    division =
    { id     = { type = 10500 id = 410 }
      name   = "1. Machitis Sygkrotima"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 411 }
      name   = "2. Machitis Sygkrotima"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 412 }
      name   = "3. Machitis Sygkrotima"
      type   = strategic_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 413 }
    name     = "Transport Fleet"
    location = 1518
    base     = 1518
    division =
    { id     = { type = 10500 id = 414 }
      name   = "1. Metafero Naftiko"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 415 }
      name   = "1. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 416 }
      name   = "2. Torpilli Naftiko"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 417 }
    name     = "Fleet of the Emperor"
    location = 1517
    base     = 1517
    division =
    { id     = { type = 10500 id = 418 }
      name   = "IRS Konstantinos"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 419 }
      name   = "IRS Manuel XXV"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 420 }
      name   = "IRS Constantinople"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 421 }
      name   = "IRS Hagia Sofia"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 422 }
      name   = "IRS Aquila"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 423 }
      name   = "IRS Bombay"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 424 }
      name   = "IRS Delhi"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 425 }
      name   = "IRS Bosporus"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 426 }
      name   = "IRS Vengeance"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 427 }
      name   = "IRS Triumph"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 428 }
      name   = "3. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 429 }
      name   = "4. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 430 }
      name   = "5. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 431 }
      name   = "6. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 445 }
      name   = "7. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 432 }
    name     = "Indian Ocean Fleet"
    location = 1447
    base     = 1447
    division =
    { id     = { type = 10500 id = 433 }
      name   = "IRS Manuel XXVI"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 434 }
      name   = "IRS Isaakios Komnenos"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 435 }
      name   = "IRS Hyderabad"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 436 }
      name   = "IRS Prestige"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 437 }
      name   = "IRS Calcutta"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 438 }
      name   = "IRS Madurai"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 439 }
      name   = "IRS Righteous"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 440 }
      name   = "8. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 441 }
      name   = "9. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 442 }
      name   = "10. Torpilli Naftiko"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 443 }
      name   = "11. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 444 }
      name   = "12. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    }
  }
}