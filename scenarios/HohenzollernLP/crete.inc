#####################
# Country main data #
#####################

country =
{ tag                    = U01
	ai_settings = { flags = { MOB2 = yes reinf = yes } }
  #industrial_modifier	 = 0.85
  #relative_manpower	 = 1.50
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 12
  transports             = 10
  escorts                = 0  
  capital                = 380
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 380 382 }
  ownedprovinces         = { 380 382 }
  controlledprovinces    = { 380 382 }
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	
	##Aircraft##
	4010 #Interwar Fighter
	4120 #Interwar Bomber

	##Armor##
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	
	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3400 #Dive Boat
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = U00 value = -200 }
    relation = { tag = SPA value = 150 }
    relation = { tag = ENG value = 100 }
    relation = { tag = RUS value = 100 }
  }
  headofstate            = { type = 9 id = 103001 }
  headofgovernment       = { type = 9 id = 103003 }
  foreignminister        = { type = 9 id = 103008 }
  armamentminister       = { type = 9 id = 103006 }
  ministerofsecurity     = { type = 9 id = 103011 }
  ministerofintelligence = { type = 9 id = 103013 }
  chiefofstaff           = { type = 9 id = 103014 }
  chiefofarmy            = { type = 9 id = 103016 }
  chiefofnavy            = { type = 9 id = 103018 }
  chiefofair             = { type = 9 id = 103019 }
  #Army
  landunit =
  { id       = { type = 10000 id = 144 }
    location = 380
    name     = "Army of Crete"
    division =
    { id     = { type = 10000 id = 145 }
      name   = "1. Astynomia Diairesi"
      type   = militia
      model  = 0  
    } 
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 109 }
    name     = "Coastal Defense Fleet"
    location = 380
    base     = 380
    division =
    { id     = { type = 10500 id = 110 }
      name   = "1. Torpilli Naftiko"
      type   = destroyer
      model  = 1
    } 
  }   navalunit =
  { id       = { type = 10500 id = 111 }
    name     = "Submarine Fleet"
    location = 380
    base     = 380
    division =
    { id     = { type = 10500 id = 112 }
      name   = "1. Ypobrychio Naftiko"
      type   = submarine
      model  = 0
    } 
  } 
}
