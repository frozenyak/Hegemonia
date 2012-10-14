#####################
# Country main data #
#####################

country =
{ tag                    = SCA
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 16
  transports             = 80
  escorts                = 0
  capital                = 2159
  SpyInfo                = { country = "SCA" NumberOfSpies = 1 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = FIN value = 50 guaranteed = { day = 5 month = may year = 1934 } }
    relation = { tag = LIB value = 200 }
    relation = { tag = GER value = 100 }
    relation = { tag = U03 value = 200 access = yes guaranteed = { day = 1 month = december year = 1935 } }
    relation = { tag = IRE value = 50 }
    relation = { tag = LIT value = 50 }
    relation = { tag = SCH value = 50 }
  }
   nationalprovinces      = {
		2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2158
		#norway
		483 485 487 491 489 492 490 493 494 497 496 488 486 484 495
		#denmark
		216 217 218 219 294 1783 1 2  220 3
		150
		#finland
		511 513
		#visby, gotland
		#2156
	}
   ownedprovinces     = {
		2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2158
		#norway
		483 485 487 491 489 492 490 493 494 497 496 488 486 484 495
		#denmark
		216 217 218 219 294 1783 1 2  220 3
		150
		#andamans
		1421
		#finland
		511 513
		#visby, gotland
		#2156
	}
   controlledprovinces     = {
		2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2158
		#norway
		483 485 487 491 489 492 490 493 494 497 496 488 486 484 495
		#denmark
		216 217 218 219 294 1783 1 2  220 3
		150
		#andamans
		1421
		#finland
		511 513
		#visby, gotland
		#2156
	}
	claimedprovinces	= {
		#andamans
		1421
	}
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9090 #Operational Dest
	#9140 #Strat Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport

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
	#5070 #Advanced Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	#5100 #Advanced Construction
	5190 #Basic Oil Refining
	#5200 #Improved Oil Refining
	5310 #Census Tabulating
	#5320 #Basic Computer
	#5330 #Improved Computer
	#5350 #Basic Encryption
	#5360 #Basic Decryption
	#5410 #Basic Radar

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1120 #Basic Mountaineers

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	#6120 #Trench Warfare

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

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
	#3330 #Early Carrier
	#3340 #Basic Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	
	12100 12110 12120 #CVL
	4900 4910 #CAG
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 514001 }
  headofgovernment       = { type = 9 id = 514035 }
  foreignminister        = { type = 9 id = 514039 }
  armamentminister       = { type = 9 id = 514048 }
  ministerofsecurity     = { type = 9 id = 514060 }
  ministerofintelligence = { type = 9 id = 514016 }
  chiefofstaff           = { type = 9 id = 514007 }
  chiefofarmy            = { type = 9 id = 514008 }
  chiefofnavy            = { type = 9 id = 514009 }
  chiefofair             = { type = 9 id = 514092 }
  #Army
  landunit =
  { id       = { type = 10000 id = 620 }
    location = 2159
    name     = "Kungliga Gardet"
    division =
    { id     = { type = 10000 id = 621 }
      name   = "Svenska Kavalleridivisionen"
      type   = cavalry
      model  = 2
	  strength = 50
      extra  = police
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 622 }
    location = 483
    name     = "1. Armén"
    division =
    { id     = { type = 10000 id = 623 }
      name   = "Överbefälet"
      type   = hq
      model  = 0
	  strength = 70
    }
    division =
    { id     = { type = 10000 id = 624 }
      name   = "I Fördelningen"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 625 }
      name   = "II Fördelningen"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 626 }
    location = 294
    name     = "2. Armén"
    division =
    { id     = { type = 10000 id = 627 }
      name   = "III Fördelningen"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 628 }
      name   = "IV Fördelningen"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 629 }
      name   = "V Fördelningen"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 630 }
    location = 2166
    name     = "3. Armén"
    division =
    { id     = { type = 10000 id = 631 }
      name   = "1. Jägardivisionen"
      type   = bergsjaeger
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10000 id = 632 }
      name   = "2. Jägardivisionen"
      type   = bergsjaeger
      model  = 1
	  strength = 35
    }
    division =
    { id     = { type = 10000 id = 633 }
      name   = "3. Jägardivisionen"
      type   = bergsjaeger
      model  = 1
	  strength = 35
    }
  }
  #Air Force
  airunit =
  { location = 294
    base     = 294
    id       = { type = 10500 id = 633 }
    name     = "Jaktflyget"
    division =
    { id     = { type = 10500 id = 634 }
      name   = "1. Jaktflyggruppen"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 635 }
      name   = "2. Jaktflyggruppen"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 2159
    base     = 2159
    id       = { type = 10500 id = 636 }
    name     = "Bombflyget"
    division =
    { id     = { type = 10500 id = 637 }
      name   = "1. Taktiska Bombflyggruppen"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 638 }
      name   = "2. Taktiska Bombflyggruppen"
      type   = tactical_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 639 }
      name   = "1. Strategiska Bombflyggruppen"
      type   = strategic_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 640 }
    name     = "Transportflottan"
    location = 2152
    base     = 2152
    division =
    { id     = { type = 10500 id = 641 }
      name   = "1. Sjötransportflottiljen"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 642 }
      name   = "2. Sjötransportflottiljen"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 643 }
      name   = "3. Sjötransportflottiljen"
      type   = transport
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 644 }
    name     = "Östersjöflottan"
    location = 2159
    base     = 2159
    division =
    { id     = { type = 10500 id = 669 }
      name   = "HKMS Gustav Vasa"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 645 }
      name   = "HKMS Äran"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 646 }
      name   = "HKMS Tapperheten"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 647 }
      name   = "1. Jägarflottiljen"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 648 }
      name   = "2. Jägarflottiljen"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 649 }
      name   = "3. Jägarflottiljen"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 650 }
    name     = "Öresundsflottan"
    location = 294
    base     = 294
    division =
    { id     = { type = 10500 id = 651 }
      name   = "HKMS Kronan"
      type   = light_carrier
      model  = 1
      extra  = light_cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10500 id = 652 }
      name   = "HKMS Karl XIV"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 653 }
      name   = "HKMS Spiran"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 654 }
      name   = "HKMS Riksäpplet"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 655 }
      name   = "HKMS Manligheten"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 656 }
      name   = "HKMS Tre Kronor"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 657 }
      name   = "HKMS Sverige"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 658 }
      name   = "HKMS Stockholm"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 659 }
      name   = "HKMS Älvsnabben"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 660 }
      name   = "HKMS Drottning Victoria"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 661 }
      name   = "4. Jägarflottiljen"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 662 }
      name   = "5. Jägarflottiljen"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 663 }
      name   = "6. Jägarflottiljen"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 664 }
      name   = "7. Jägarflottiljen"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 665 }
      name   = "8. Jägarflottiljen"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 666 }
      name   = "9. Jägarflottiljen"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 667 }
      name   = "10. Jägarflottiljen"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 668 }
      name   = "11. Jägarflottiljen"
      type   = destroyer
      model  = 2
    }
  }
}
