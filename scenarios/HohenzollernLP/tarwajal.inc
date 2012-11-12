#####################
# Country main data #
#####################

country =
{ tag                    = PRU
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
  energy                 = 400
  metal                  = 400
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 38
  transports             = 20
  escorts                = 0
  capital                = 2016
	diplomacy =
   {
	relation = {  tag = U05 value = -100  }
	relation = {  tag = VEN value = 0  }
	relation = {  tag = PAR value = 50  }
	relation = {  tag = PAN value = 100  }
	relation = {  tag = MEX value = 100  }
	relation = {  tag = SPA value = 75  }
	relation = {  tag = BRA value = 150  }
    }
	policy =
   {  date              = {  year = 0 month = january day = 0  }
     democratic        = 5
     political_left    = 2
     freedom           = 4
     free_market       = 4
     professional_army = 4
     defense_lobby     = 6
     interventionism   = 5
    }
	peacetime_ic_mod       = 0.8
	SpyInfo                = {  country = "PRU" NumberOfSpies = 4  }
	headofstate            = {  type = 9 id = 185001  }
	headofgovernment       = {  type = 9 id = 185002  }
	foreignminister        = {  type = 9 id = 185003  }
	armamentminister       = {  type = 9 id = 185004  }
	ministerofsecurity     = {  type = 9 id = 185005  }
	ministerofintelligence = {  type = 9 id = 185006  }
	chiefofstaff           = {  type = 9 id = 185007  }
	chiefofarmy            = {  type = 9 id = 185008  }
	chiefofnavy            = {  type = 9 id = 185009  }
	chiefofair             = {  type = 9 id = 185010  }
	nationalprovinces = {
		2017 2015 2016 2011 2014 2018 2008 2010 2033 2012 2013
		2040 2041 2042 2007 1991 1987 1994 2009 1756 1985
		2002 2003 2001 1986 1990
		2019 2020 2063
		2024
	}
	ownedprovinces = {
		2017 2015 2016 2011 2014 2018 2008 2010 2033 1990
		2040 2041 2042 2007 1991 1987 1994 2009 1756 1985
	}
	controlledprovinces = {
		2017 2015 2016 2011 2014 2018 2008 2010 2033 1990
		2040 2041 2042 2007 1991 1987 1994 2009 1756 1985
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
		id = { type = 10000 id = 480 }
		location = 2008
		name     = "1st Cavalry Corps"
		division =
		{ id     = { type = 10000 id = 481 }
		  name   = "Sipahis al-1i"
		  type   = cavalry
		  model  = 2
		}
		division =
		{ id     = { type = 10000 id = 482 }
		  name   = "Sipahis al-1i"
		  type   = cavalry
		  model  = 2
		}
	}
	landunit =	{
		id = { type = 10000 id = 483 }
		location = 2015
		name     = "Mountain Corps"
		division =
		{ id     = { type = 10000 id = 484 }
		  name   = "al-Mushati al-1i"
		  type   = bergsjaeger
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 485 }
		  name   = "al-Mushati al-1i"
		  type   = bergsjaeger
		  model  = 1
		}
	}
	landunit =	{
		id = { type = 10000 id = 486 }
		location = 2016
		name     = "Army Corps"
		division =
		{ id     = { type = 10000 id = 487 }
		  name   = "al-Mushati al-5i"
		  type   = infantry
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 488 }
		  name   = "al-Mushati al-6i"
		  type   = infantry
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 489 }
		  name   = "Tarwajal Supreme HQ"
		  type   = hq
		  model  = 0
		}
	}
	airunit =	{
		id = { type = 10000 id = 490 }
		location = 2016
		base = 2016
		name     = "Tarwajal Airforce"
		division =
		{ id     = { type = 10000 id = 491 }
		  name   = "1. Fighter Group"
		  type   = interceptor
		  model  = 0
		}
		division =
		{ id     = { type = 10000 id = 492 }
		  name   = "2. Fighter Group"
		  type   = interceptor
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 493 }
		  name   = "1. Tactical Bomb Group"
		  type   = tactical_bomber
		  model  = 1
		}
	}
	navalunit =	{
		id = { type = 10000 id = 495 }
		location = 2040
		base = 2040
		name     = "Tarwajal Navy"
		division =
		{ id     = { type = 10000 id = 496 }
		  name   = "TNS Ljansitar"
		  type   = battleship
		  model  = 0
		}
		division =
		{ id     = { type = 10000 id = 497 }
		  name   = "TNS Ifirr"
		  type   = heavy_cruiser
		  model  = 0
		}
		division =
		{ id     = { type = 10000 id = 498 }
		  name   = "TNS Jazira"
		  type   = light_cruiser
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 499 }
		  name   = "TNS Lima"
		  type   = light_cruiser
		  model  = 0
		}
		division =
		{ id     = { type = 10000 id = 500 }
		  name   = "Flottille al-2i"
		  type   = destroyer
		  model  = 0
		}
		division =
		{ id     = { type = 10000 id = 501 }
		  name   = "Flottille al-3i"
		  type   = destroyer
		  model  = 1
		}
		division =
		{ id     = { type = 10000 id = 502 }
		  name   = "Flottille al-1i"
		  type   = destroyer
		  model  = 0
		}
	}
}

