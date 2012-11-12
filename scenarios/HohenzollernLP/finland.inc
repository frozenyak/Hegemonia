#####################
# Country main data #
#####################

country =
{ tag                    = FIN
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes ai_set = yes } }
	ai = "finland.ai"
  #industrial_modifier	 = 0.75
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 24
  transports             = 20
  escorts                = 0
  capital                = 525
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = SPA value = 50 }
    relation = { tag = SCA value = 25 }
    relation = { tag = LIT value = 25 }
    relation = { tag = RUS value = 50 }
    relation = { tag = GER value = 25 }
  }
	nationalprovinces      = {
		512 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514
		537 539 530 540 538
		534 535 553 541
		#511 513
	}
	ownedprovinces         = {
		512 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514
		537 539 530 540 538
		534 535 553 541
		#511 513
	}
	controlledprovinces         = {
		512 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514
		537 539 530 540 538
		534 535 553 541
		#511 513
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
	4120 #Interwar Bomber
	4130 #Early Bomber

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	6030 #Grand Battleplan
	6390 #Light Infantry

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	3400 #Dive Boat
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    free_market       = 8
    freedom           = 7
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 29036 }
  headofgovernment       = { type = 9 id = 29053 }
  foreignminister        = { type = 9 id = 29071 }
  armamentminister       = { type = 9 id = 29087 }
  ministerofsecurity     = { type = 9 id = 29102 }
  ministerofintelligence = { type = 9 id = 29125 }
  chiefofstaff           = { type = 9 id = 29173 }
  chiefofarmy            = { type = 9 id = 29008 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29155 }
  #Army
  landunit =
  { id       = { type = 10000 id = 163 }
    location = 516
    name     = "Mountain Corps"
    division =
    { id     = { type = 10000 id = 164 }
      name   = "Sissidivisioona"
      type   = bergsjaeger
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 165 }
    location = 525
    name     = "National Guard"
    division =
    { id     = { type = 10000 id = 166 }
      name   = "1. Nostoväkidiv"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 167 }
      name   = "2. Nostoväkidiv"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 168 }
    location = 553
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 169 }
      name   = "1. Divisioona"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 170 }
    location = 539
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 171 }
      name   = "2. Divisioona"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 172 }
    location = 541
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 173 }
      name   = "3. Divisioona"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  #Air Force
  airunit =
  { location = 525
    base     = 525
    id       = { type = 10500 id = 127 }
    name     = "Finnish Air Force"
    division =
    { id     = { type = 10500 id = 128 }
      name   = "Lentorykmentti 1"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 129 }
      name   = "Lentorykmentti 2"
      type   = tactical_bomber
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 130 }
    name     = "Finnish Navy"
    location = 525
    base     = 525
    division =
    { id     = { type = 10500 id = 131 }
      name   = "1. Kauppalaivasto"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 132 }
      name   = "2. Kauppalaivasto"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 133 }
      name   = "3. Kauppalaivasto"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 134 }
      name   = "Väinämöinen"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 135 }
      name   = "Ilmarinen"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 136 }
      name   = "1. Rannikkolaivue"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 137 }
      name   = "2. Rannikkolaivue"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 138 }
      name   = "3. Rannikkolaivue"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 139 }
      name   = "4. Rannikkolaivue"
      type   = destroyer
      model  = 0
    }
  }
}
