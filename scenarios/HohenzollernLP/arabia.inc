#####################
# Country main data #
#####################

country =
{ tag                    = ARA
	flag_ext = _com
  puppet		 = U00
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
  #industrial_modifier	 = 0.85
  #relative_manpower	 = 1.50
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 72
  transports             = 10
  escorts                = 0
  capital                = 1034
  SpyInfo                = { country = "ARA" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 9
    freedom           = 2
    free_market       = 3 #1
    professional_army = 4
    defense_lobby     = 7
    interventionism   = 7
  }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = VIC value = 150 }
    relation = { tag = U07 value = 150 }
  }
   nationalprovinces      = {
		1040 1047 1049 1046 1045 1044 1048
		1022 1023 1024 1025 1026 #Transjordan
		1050 1052 1043 1038 1039 1041 1051 1053 #Kuwait, UAE, Oman, Yemen
		#iraq
		1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029
		#mandate syria/lebanon
		#1014 1015 1016 1017
	}
   ownedprovinces      = {
		1040 1047 1049 1046 1045 1044 1048
		1022 1023 1024 1025 1026 #Transjordan
		1050 1052 1043 1038 1039 1041 1051 1053 #Kuwait, UAE, Oman, Yemen
		#iraq
		1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029
		#mandate syria/lebanon
		#1014 1015 1016 1017
	}
   controlledprovinces      = {
		1040 1047 1049 1046 1045 1044 1048
		1022 1023 1024 1025 1026 #Transjordan
		1050 1052 1043 1038 1039 1041 1051 1053 #Kuwait, UAE, Oman, Yemen
		#iraq
		1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029
		#mandate syria/lebanon
		#1014 1015 1016 1017
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
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	#6010 #Firepower Focus
	6030 #Grand Battleplan
	6560 #Defense focus
	
	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	3400 #Dive Boat
	
	3810 #Troopship
  }
  headofstate            = { type = 9 id = 558013 }
  headofgovernment       = { type = 9 id = 558016 }
  foreignminister        = { type = 9 id = 558019 }
  armamentminister       = { type = 9 id = 558022 }
  ministerofsecurity     = { type = 9 id = 558025 }
  ministerofintelligence = { type = 9 id = 558028 }
  chiefofstaff           = { type = 9 id = 558031 }
  chiefofarmy            = { type = 9 id = 558034 }
  chiefofnavy            = { type = 9 id = 558037 }
  chiefofair             = { type = 9 id = 558040 }
  #Army
  landunit =
  { id       = { type = 10000 id = 62 }
    location = 1048
    name     = "Arabic Cavalry"
    division =
    { id     = { type = 10000 id = 53 }
      name   = "Sipahis al-1i"
      type   = cavalry
      model  = 1
	  strength = 60
    }
  }
  landunit =
  { id       = { type = 10000 id = 50 }
    location = 1052
    name     = "1st Arabic Army"
    division =
    { id     = { type = 10000 id = 51 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 52 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 54 }
    location = 1034
    name     = "2nd Arabic Army"
    division =
    { id     = { type = 10000 id = 55 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 56 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 57 }
      name   = "al-Milishiya al-3i"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 58 }
    location = 1032
    name     = "3rd Arabic Army"
    division =
    { id     = { type = 10000 id = 59 }
      name   = "al-Milishiya al-4i"
      type   = militia
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 60 }
      name   = "al-Milishiya al-5i"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 61 }
      name   = "al-Milishiya al-6i"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  #Air Force
  airunit =
  { location = 1034
    base     = 1034
    id       = { type = 10500 id = 49 }
    name     = "ARAF Interceptor Flotilla"
    division =
    { id     = { type = 10500 id = 50 }
      name   = "1. ARAF Fighter Group"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 1034
    base     = 1034
    id       = { type = 10500 id = 51 }
    name     = "ARAF Bomber Flotilla"
    division =
    { id     = { type = 10500 id = 52 }
      name   = "1. ARAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 53 }
    name     = "Persian Gulf Fleet"
    location = 1032
    base     = 1032
    division =
    { id     = { type = 10500 id = 54 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 55 }
      name   = "Ustul al-Hamli al-2i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 56 }
      name   = "Flotille Al Bi'ra"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 57 }
    name     = "Red Sea Fleet"
    location = 1048
    base     = 1048
    division =
    { id     = { type = 10500 id = 58 }
      name   = "Flotille Tabuk"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 59 }
      name   = "Flotille Ziba"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 60 }
      name   = "Khalid Bakdash"
      type   = light_cruiser
      model  = 0
    }
  }
}

