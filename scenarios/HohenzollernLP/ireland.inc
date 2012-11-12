#####################
# Country main data #
#####################

country =
{ tag                    = IRE
	ai_settings = { flags = { MOB2 = yes MOB3 = yes } }
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 4
  transports             = 30
  escorts                = 0
  capital                = 34
  SpyInfo                = { country = "IRE" NumberOfSpies = 3 }
  peacetime_ic_mod = 0.6
	diplomacy = {
  	relation = { tag = SPA value = 75 }
  	relation = { tag = RUS value = 150 }
  	relation = { tag = SCA value = 50 }
  	relation = { tag = ENG value = 25 }
  }
   nationalprovinces      = {  33 32 31 30 34 35 36 } 
   ownedprovinces         = {  33 32 31 30 34 35 36 } 
   controlledprovinces    = {  33 32 31 30 34 35 36 } 
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
	#4190 #Basic Naval Bomber

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus

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
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7 #8
    political_left    = 8
    freedom           = 8 #7
    free_market       = 8 #5
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 125011 }
  headofgovernment       = { type = 9 id = 125021 }
  foreignminister        = { type = 9 id = 125029 }
  armamentminister       = { type = 9 id = 125042 }
  ministerofsecurity     = { type = 9 id = 125065 }
  ministerofintelligence = { type = 9 id = 125080 }
  chiefofstaff           = { type = 9 id = 125098 }
  chiefofarmy            = { type = 9 id = 125107 }
  chiefofnavy            = { type = 9 id = 125115 }
  chiefofair             = { type = 9 id = 125124 }
  #Army
	landunit =
	{ 	id = { type = 1 id = 431 }
		location = 34
		name     = "Irish Army"
		division =
		{ id     = { type = 1 id = 432 }
		  name   = "1st Division"
		  type   = infantry
		  model  = 1
		  strength = 50
		}
		division =
		{ id     = { type = 1 id = 433 }
		  name   = "2nd Division"
		  type   = infantry
		  model  = 1
		  strength = 50
		}
	}
  #Air Force
  airunit =
  { location = 30
    base     = 30
    id       = { type = 10500 id = 446 }
    name     = "Irish Air Force"
    division =
    { id     = { type = 10500 id = 447 }
      name   = "No.1 IAF Fighter Group"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 450 }
    name     = "Submarine Fleet"
    location = 34
    base     = 34
    division =
    { id     = { type = 10500 id = 451 }
      name   = "1st Submarine Flotilla"
      type   = submarine
      model  = 1
    } 
  }   
  navalunit =
  { id       = { type = 10500 id = 454 }
    name     = "Irish Navy"
    location = 34
    base     = 34
    division =
    { id     = { type = 10500 id = 466 }
      name   = "1st Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
  }  
}
