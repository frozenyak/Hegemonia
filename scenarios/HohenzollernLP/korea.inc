#####################
# Country main data #
#####################

country =
{ tag                    = KOR
  puppet		 = ENG
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital                = 1228
  #industrial_modifier	 = 0.85
  #relative_manpower	 = 1.50
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 131
  transports             = 20
  escorts                = 0
  SpyInfo                = { country = "KOR" NumberOfSpies = 3 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = SPA value = 50 }
    relation = { tag = JAP value = -100 }
  }
	nationalprovinces      = {
		1228 1229 1233 1232 1231 1230 # South Korea 
		1223 1221 1222 1226 1227 1224 1225 # North Korea
	}
	ownedprovinces         = {
		1228 1229 1233 1232 1231 1230 # South Korea 
		1223 1221 1222 1226 1227 1224 1225 # North Korea
		#liaoning
		#1214 1215 1217 1218 1220 #1216
		#jilin
		#1211
	}
	controlledprovinces    = {
		1228 1229 1233 1232 1231 1230 # South Korea 
		1223 1221 1222 1226 1227 1224 1225 # North Korea
		#liaoning
		#1214 1215 1217 1218 1220 #1216
		#jilin
		#1211
	}
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber
	4130 #Early Bomber

	##Armor##
	2010 #Great War Tank
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5080 #Basic Construction

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply

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
    democratic = 6
    political_left = 4 
    freedom = 6
    free_market = 7
    professional_army = 4 
    defense_lobby = 3 
    interventionism = 3
  }
  headofstate            = { type = 9 id = 578001 }
  headofgovernment       = { type = 9 id = 578002 }
  foreignminister        = { type = 9 id = 578003 }
  armamentminister       = { type = 9 id = 578021 }
  ministerofsecurity     = { type = 9 id = 578022 }
  ministerofintelligence = { type = 9 id = 578006 }
  chiefofstaff           = { type = 9 id = 578007 }
  chiefofarmy            = { type = 9 id = 578008 }
  chiefofnavy            = { type = 9 id = 578009 }
  chiefofair             = { type = 9 id = 578010 }
  #Army
  landunit =
  { id       = { type = 1 id = 504 }
    location = 1225
    name     = "1st Army Corps"
    division =
    { id     = { type = 1 id = 505 }
      name   = "1st ROK Infantry Division"
      type   = infantry
      model  = 0   
    } 
    division =
    { id     = { type = 1 id = 506 }
      name   = "1st Infantry Division"
      type   = militia
      model  = 0   
    }
    division =
    { id     = { type = 1 id = 507 }
      name   = "2nd Infantry Division"
      type   = militia
      model  = 0   
    }    
  }
  landunit =
  { id       = { type = 1 id = 508 }
    location = 1228
    name     = "2nd Army Corps"
    division =
    { id     = { type = 1 id = 509 }
      name   = "3rd Infantry Division"
      type   = militia
      model  = 0   
    } 
    division =
    { id     = { type = 1 id = 510 }
      name   = "4th Infantry Division"
      type   = militia
      model  = 0   
    }
    division =
    { id     = { type = 1 id = 511 }
      name   = "5th Infantry Division"
      type   = militia
      model  = 0   
    }    
  }  
  #Navy
  navalunit =
  { id       = { type = 10500 id = 569 }
    name     = "Korean Navy"
    location = 1228
    base     = 1228
    division =
    { id     = { type = 10500 id = 570 }
      name   = "1st ROK Destroyer Division"
      type   = destroyer
      model  = 0
    } 
  }  
}
