#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  energy                 = 400
  metal                  = 400
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 62
  transports             = 20
  escorts                = 0
  capital                = 2071
	diplomacy =
   {
	relation = {  tag = U05 value = -100  }
	relation = {  tag = VEN value = 0  }
	relation = {  tag = PAR value = 100  }
	relation = {  tag = PAN value = 100  }
	relation = {  tag = MEX value = 100  }
	relation = {  tag = SPA value = 75  }
	relation = {  tag = PRU value = 150  }
    }
	policy =
   {  date              = {  year = 0 month = january day = 0  }
     democratic        = 4
     political_left    = 8
     free_market       = 8
     freedom           = 7
     professional_army = 5
     defense_lobby     = 6
     interventionism   = 5
    }
	peacetime_ic_mod       = 0.8
	SpyInfo                = {  country = "BRA" NumberOfSpies = 4  }
	headofstate            = {  type = 9 id = 160001  }
	headofgovernment       = {  type = 9 id = 160002  }
	foreignminister        = {  type = 9 id = 160003  }
	armamentminister       = {  type = 9 id = 160004  }
	ministerofsecurity     = {  type = 9 id = 160005  }
	ministerofintelligence = {  type = 9 id = 160006  }
	chiefofstaff           = {  type = 9 id = 160007  }
	chiefofarmy            = {  type = 9 id = 160008  }
	chiefofnavy            = {  type = 9 id = 160009  }
	chiefofair             = {  type = 9 id = 160010  }
	nationalprovinces = {
		2004 2071 2066 2065 2068 2069
		2073 2072 2070 2005
	}
	ownedprovinces = {
		2071 2065 2068 2069
		2072 2070
	}
	controlledprovinces = {
		2071 2065 2068 2069
		2072 2070
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
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	#4170 #Basic CAS
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	#2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry

	1310 #Rear Area Supply

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	#6120 #Trench Warfare
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3400 #Dive Boat
	
	3810 #Troopship
  }
	#Army
	landunit =	{
		id = { type = 10001 id = 600 }
		location = 2071
		name     = "Army Corps"
		division =
		{ id     = { type = 10001 id = 601 }
		  name   = "al-Mushati al-5i"
		  type   = infantry
		  model  = 1
		  strength = 50
		}
		division =
		{ id     = { type = 10001 id = 602 }
		  name   = "al-Mushati al-6i"
		  type   = infantry
		  model  = 1
		  strength = 50
		}
		division =
		{ id     = { type = 10001 id = 603 }
		  name   = "Sipahis al-1i"
		  type   = cavalry
		  model  = 2
		  strength = 50
		}
		division =
		{ id     = { type = 10001 id = 604 }
		  name   = "Muhajedz HQ"
		  type   = hq
		  model  = 0
		  strength = 75
		}
	}
	airunit =	{
		id = { type = 10001 id = 607 }
		location = 2070
		base = 2070
		name     = "Muhajedz Airforce"
		division =
		{ id     = { type = 10001 id = 608 }
		  name   = "1. Fighter Group"
		  type   = interceptor
		  model  = 1
		}
		division =
		{ id     = { type = 10001 id = 610 }
		  name   = "1. Tactical Bomb Group"
		  type   = tactical_bomber
		  model  = 0
		}
	}
	navalunit =	{
		id = { type = 10001 id = 611 }
		location = 2070
		base = 2070
		name     = "Muhajedz Navy"
		division =
		{ id     = { type = 10001 id = 613 }
		  name   = "MJS Recife"
		  type   = heavy_cruiser
		  model  = 0
		}
		division =
		{ id     = { type = 10001 id = 614 }
		  name   = "MJS Jamahiriya"
		  type   = light_cruiser
		  model  = 1
		}
		division =
		{ id     = { type = 10001 id = 616 }
		  name   = "Flottille al-2i"
		  type   = destroyer
		  model  = 1
		}
		division =
		{ id     = { type = 10001 id = 617 }
		  name   = "Flottille al-3i"
		  type   = destroyer
		  model  = 1
		}
		division =
		{ id     = { type = 10001 id = 618 }
		  name   = "Flottille al-1i"
		  type   = destroyer
		  model  = 0
		}
	}
}

