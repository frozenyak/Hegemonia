#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 4
  transports             = 10
  escorts                = 0
  capital                = 1999
  SpyInfo                = { country = "PAR" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 4
  }
	nationalprovinces      = {
		1997 1999 2000 2006
	}
	ownedprovinces         = {
		1997 1999 2000 2006
	}
	controlledprovinces    = {
		1997 1999 2000 2006
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
	5010 #Modern Agriculture
	5080 #Basic Construction
	5190 #Basic Oil Refining

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry

	1310 #Rear Area Supply

	##Land Doctrines - Grand Battle Plan##
	6010 #Firepower Focus

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
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = USA value = 100 }
    relation = { tag = CAN value = 50 }
    relation = { tag = VIC value = 50 }
    relation = { tag = U06 value = 100 }
  }
  headofstate            = { type = 9 id = 200001 }
  headofgovernment       = { type = 9 id = 200002 }
  foreignminister        = { type = 9 id = 200003 }
  armamentminister       = { type = 9 id = 200004 }
  ministerofsecurity     = { type = 9 id = 200005 }
  ministerofintelligence = { type = 9 id = 200006 }
  chiefofstaff           = { type = 9 id = 200007 }
  chiefofarmy            = { type = 9 id = 200008 }
  chiefofnavy            = { type = 9 id = 200009 }
  chiefofair             = { type = 9 id = 200010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 240 }
    location = 1999
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 241 }
      name   = "1ère Division d'Infanterie"
      type   = infantry
      model  = 1
      strength = 10
    }
    division =
    { id     = { type = 10000 id = 242 }
      name   = "2ème Division d'Infanterie"
      type   = infantry
      model  = 1
      strength = 10
    }
  }
  #Air Force
  airunit =
  { location = 1999
    base     = 1999
    id       = { type = 10000 id = 243 }
    name     = "Gustavianska Flygvapnet"
    division =
    { id     = { type = 10000 id = 244 }
      name   = "Groupe de Chasse 1"
      type   = interceptor
      model  = 1
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 245 }
      name   = "Groupe de Bombardement Tactique 1"
      type   = tactical_bomber
      model  = 1
	  strength = 50
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10000 id = 246 }
    name     = "Nova Aquitanian Navy"
    location = 1999
    base     = 1999
    division =
    { id     = { type = 10000 id = 247 }
      name   = "NAS Aquitania"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 248 }
      name   = "1ère Division de Torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10000 id = 249 }
      name   = "2ème Division de Torpilleurs"
      type   = destroyer
      model  = 0
    }
  }
}
