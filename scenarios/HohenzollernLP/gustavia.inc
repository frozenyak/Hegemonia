#####################
# Country main data #
#####################

country =
{ tag                    = VEN
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 25
  transports             = 10
  escorts                = 0
  capital                = 1993
  SpyInfo                = { country = "VEN" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 2
    freedom           = 2
    free_market       = 4
    professional_army = 6
    defense_lobby     = 7 #8
    interventionism   = 3
  }
	nationalprovinces = {
		1988 1989 1995 1996 1992 1993 1998 #1997
		#colombia
		#1990
	}
	ownedprovinces = {
		1988 1989 1995 1996 1992 1993 1998 #1997
		#colombia
		#1990
	}
	controlledprovinces = {
		1988 1989 1995 1996 1992 1993 1998 #1997
		#colombia
		#1990
	}
	claimedprovinces = {
		1990 2005
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
  #peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = USA value = 150 }
    relation = { tag = U05 value = -200 }
    relation = { tag = CAN value = 75 }
    relation = { tag = PAR value = 100 }
  }
  headofstate            = { type = 9 id = 180062 }
  headofgovernment       = { type = 9 id = 180083 }
  foreignminister        = { type = 9 id = 180085 }
  armamentminister       = { type = 9 id = 180004 }
  ministerofsecurity     = { type = 9 id = 180005 }
  ministerofintelligence = { type = 9 id = 180006 }
  chiefofstaff           = { type = 9 id = 180068 }
  chiefofarmy            = { type = 9 id = 180069 }
  chiefofnavy            = { type = 9 id = 180009 }
  chiefofair             = { type = 9 id = 180010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 223 }
    location = 1988
    name     = "Bergsjägare"
    division =
    { id     = { type = 10000 id = 224 }
      name   = "I. Jägarfördelningen"
      type   = bergsjaeger
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10000 id = 225 }
    location = 1993
    name     = "Gustavianska Arméen"
    division =
    { id     = { type = 10000 id = 226 }
      name   = "I. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 227 }
      name   = "II. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 228 }
      name   = "III. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10000 id = 229 }
    location = 1992
    name     = "1. Hemvärnet"
    division =
    { id     = { type = 10000 id = 230 }
      name   = "3. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 231 }
      name   = "4. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 232 }
    location = 1990
    name     = "2. Hemvärnet"
    division =
    { id     = { type = 10000 id = 233 }
      name   = "5. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 234 }
      name   = "6. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 235 }
    location = 1997
    name     = "3. Hemvärnet"
    division =
    { id     = { type = 10000 id = 236 }
      name   = "1. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 237 }
      name   = "2. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  #Air Force
  airunit =
  { location = 1988
    base     = 1988
    id       = { type = 10500 id = 203 }
    name     = "Gustavianska Flygvapnet"
    division =
    { id     = { type = 10500 id = 204 }
      name   = "1. Jaktflyggruppen"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 205 }
      name   = "1. Taktiska Bombflyggruppen"
      type   = tactical_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 206 }
    name     = "Gustavianska Flottan"
    location = 1988
    base     = 1988
    division =
    { id     = { type = 10500 id = 207 }
      name   = "1. Transportflottiljen"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 208 }
      name   = "Gustav Vasa"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 209 }
      name   = "1. Jagarflottiljen"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 210 }
      name   = "2. Jagarflottiljen"
      type   = destroyer
      model  = 0
    }
  }
}
