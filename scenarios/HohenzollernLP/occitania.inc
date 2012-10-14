#####################
# Country main data #
#####################

country =
{ tag		= U06
  puppet	= SPA
  name		= U06_SPA
  #regular_id = VIC #similar to AUS/GER hack
  capital	= 68
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 29
  transports             = 20
  escorts                = 0
  SpyInfo                = { country = "U06" NumberOfSpies = 4 }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = SPA value = 200 }
    relation = { tag = VIC value = -200 }
    relation = { tag = RSI value = -200 }
  }
	nationalprovinces = {
		#aquitaine
		67 68 69 70
		#limousin auvergne
		71 73 75 76
		#pyrenees languagedoc
		77 78 79 80 81 82 83 84 #85
		#alpes provence
		86 87 89 90 91 92 93
	}
	ownedprovinces = {
		#aquitaine
		67 68 69 70
		#limousin auvergne
		73 75 76
		#pyrenees languagedoc
		77 79 80 81 82 83 84 #78 85
		#alpes provence
		86 89 90 93 87 #92
	}
	controlledprovinces = {
		#aquitaine
		67 68 69 70
		#limousin auvergne
		73 75 76
		#pyrenees languagedoc
		77 79 80 81 82 83 84 #78 85
		#alpes provence
		86 89 90 93 87 #92
	}
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9040 #Battlefield Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4030 #Basic Interceptor
	#4170 #Basic CAS

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
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
	1020 #Early Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	14000 #Great War Hospital
	
	6030 #Grand Battleplan
	6560 #defensive focus
	6120 #Trench Warfare

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
	3250 #GW Battleship
	3260 #Early Battleship
	3320 #GW Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 4
        freedom = 2
        free_market = 6
        professional_army = 5
        defense_lobby = 7 #8
        interventionism = 3
  }
  headofstate            = { type = 9 id = 107001 }
  headofgovernment       = { type = 9 id = 107002 }
  foreignminister        = { type = 9 id = 107003 }
  armamentminister       = { type = 9 id = 107019 }
  ministerofsecurity     = { type = 9 id = 107027 }
  ministerofintelligence = { type = 9 id = 107040 }
  chiefofstaff           = { type = 9 id = 107034 }
  chiefofarmy            = { type = 9 id = 107008 }
  chiefofnavy            = { type = 9 id = 107009 }
  chiefofair             = { type = 9 id = 107010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 705 }
    location = 77
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 706 }
      name   = "Occitain High Command"
      type   = hq
      model  = 0
      strength = 75
    }
    division =
    { id     = { type = 10000 id = 707 }
      name   = "1ère Division d'Infanterie"
      type   = infantry
      model  = 1
      strength = 80
    }
    division =
    { id     = { type = 10000 id = 708 }
      name   = "2e Division d'Infanterie"
      type   = infantry
      model  = 1
      strength = 80
    }
  }
  landunit =
  { id       = { type = 10000 id = 709 }
    location = 69
    name     = "1st Border Guards"
    division =
    { id     = { type = 10000 id = 710 }
      name   = "1ère Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 711 }
      name   = "2e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10000 id = 712 }
    location = 73
    name     = "2nd Border Guards"
    division =
    { id     = { type = 10000 id = 713 }
      name   = "3e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 714 }
      name   = "4e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10000 id = 715 }
    location = 76
    name     = "3rd Border Guards"
    division =
    { id     = { type = 10000 id = 716 }
      name   = "5e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 717 }
      name   = "6e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10000 id = 718 }
    location = 81
    name     = "4th Border Guards"
    division =
    { id     = { type = 10000 id = 719 }
      name   = "7e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 720 }
      name   = "8e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10000 id = 721 }
    location = 82
    name     = "5th Border Guards"
    division =
    { id     = { type = 10000 id = 722 }
      name   = "9e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 723 }
      name   = "10e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  landunit =
  { id       = { type = 10000 id = 724 }
    location = 93
    name     = "6th Border Guards"
    division =
    { id     = { type = 10000 id = 725 }
      name   = "11e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 726 }
      name   = "12e Division d'Infanterie de Réserve"
      type   = infantry
      model  = 0
      strength = 10
    }
  }
  #Air Force
  airunit =
  { location = 89
    base     = 89
    id       = { type = 10500 id = 829 }
    name     = "Occitain Air Force"
    division =
    { id     = { type = 10500 id = 830 }
      name   = "Groupe de Chasse 1"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 831 }
      name   = "Groupe de Chasse 2"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 832 }
    name     = "Occitain Navy"
    location = 68
    base     = 68
    division =
    { id     = { type = 10500 id = 833 }
      name   = "Toulouse"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 834 }
      name   = "1ère Division de Torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 835 }
      name   = "2e Division de Torpilleurs"
      type   = destroyer
      model  = 1
    }
  }
}
