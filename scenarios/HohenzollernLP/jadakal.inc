#####################
# Country main data #
#####################

country =
{ tag                    = U05
  ai = "default.ai"
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 88 #206
  transports             = 40
  escorts                = 0
  capital                = 2023
  SpyInfo                = { country = "U05" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    free_market       = 6 #4
    freedom           = 4 #2
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 6 #4
  }
	nationalprovinces = {
		#nova aquitania
		#1999 2000 2006
		#tarwajal
		#2017 2015 2016 2011 2014 2018 2008 2010 2033 2012 2013
		#2040 2041 2042 2007 1991 1987 1994 2009 1756 1985
		#2002 2003 2001 #1986
		#muhajedz
		#2004 2071 2066 2065 2068 2069
		#2073 2072 2070 2005
		#alusal
		#2057 2059 2067 2076 2074 2075 2058 2051 2052
		#jidligrib
		2050 2048 2053 2035 2036 2037
		2038 2039 2034 2030 2031 #2032 2044 2043 2045
		#asmunakal
		2027 2026 2056 2055 2029 2023 2022 2025 2024 2032 2028 2054
		2064 2021 2020 2019 2063 2046 2047 2060 2061 2062 2049
	}
	ownedprovinces = {
		#nova aquitania
		#1999 2000 2006
		#tarwajal
		2001 2012 2013 2002 2003 2019 2020 2063
		#muhajedz
		#2071 2065 2068 2069 2072 2070 
		2004 2005 2066 2073
		#alusal
		2057 2059 2067 2076 2074 2075 2058 2051 2052
		#jidligrib
		2050 2048 2053 2035 2036 2037
		2038 2039 2034 2030 2031 #2044 2043 2045
		#asmunakal
		2027 2026 2056 2055 2029 2023 2022 2025 2024 2032 2028 2054
		2064 2021 2046 2047 2060 2061 2062 2049
	}
	controlledprovinces = {
		#nova aquitania
		#1999 2000 2006
		#tarwajal
		2001 2012 2013 2002 2003 2019 2020 2063
		#muhajedz
		#2071 2065 2068 2069 2072 2070 
		2004 2005 2066 2073
		#alusal
		2057 2059 2067 2076 2074 2075 2058 2051 2052
		#jidligrib
		2050 2048 2053 2035 2036 2037
		2038 2039 2034 2030 2031 #2044 2043 2045
		#asmunakal
		2027 2026 2056 2055 2029 2023 2022 2025 2024 2032 2028 2054
		2064 2021 2046 2047 2060 2061 2062 2049
	}
	claimedprovinces = {
		#nova aquitania
		#1999 2000 2006
		#tarwajal
		2017 2015 2016 2011 2014 2018 2008 2010 2033 2012 2013
		2040 2041 2042 2007 1991 1987 1994 2009 1756 1985
		2002 2003 2001 2005 1986 1990
		#muhajedz
		2004 2071 2066 2065 2068 2069
		2075 2073 2072 2070 2005
		#alusal
		2057 2059 2067 2076 2074 2075 2058 2051 2052
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
	peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = VEN value = -200 }
    relation = { tag = PAN value = -200 }
    relation = { tag = USA value = -100 }
    relation = { tag = PAR value = 50 }
    relation = { tag = SPA value = 50 }
  }
  headofstate            = { type = 9 id = 840092 }
  headofgovernment       = { type = 9 id = 840104 }
  foreignminister        = { type = 9 id = 840085 }
  armamentminister       = { type = 9 id = 840114 }
  ministerofsecurity     = { type = 9 id = 840087 }
  ministerofintelligence = { type = 9 id = 840088 }
  chiefofstaff           = { type = 9 id = 840057 }
  chiefofarmy            = { type = 9 id = 840089 }
  chiefofnavy            = { type = 9 id = 840090 }
  chiefofair             = { type = 9 id = 840091 }
  #Army
  landunit =
  { id       = { type = 10000 id = 441 }
    location = 2024
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10000 id = 442 }
      name   = "Sipahis al-1i"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 443 }
      name   = "Sipahis al-2i"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 444 }
    location = 2063
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10000 id = 445 }
      name   = "Sipahis al-3i"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10000 id = 446 }
      name   = "Sipahis al-4i"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 447 }
    location = 2023
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 448 }
      name   = "Sultanate High Command"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 449 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 0
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 450 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 451 }
    location = 2020
    name     = "Mountain Corps"
    division =
    { id     = { type = 10000 id = 452 }
      name   = "al-Mushati al-3i"
      type   = bergsjaeger
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 453 }
      name   = "al-Mushati al-4i"
      type   = bergsjaeger
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 454 }
      name   = "al-Mushati al-5i"
      type   = bergsjaeger
      model  = 0
      extra  = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 455 }
    location = 2003
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 456 }
      name   = "al-Mushati al-6i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 457 }
      name   = "al-Mushati al-7i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 458 }
      name   = "al-Mushati al-8i"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 459 }
    location = 2073
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 460 }
      name   = "al-Mushati al-9i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 461 }
      name   = "al-Mushati al-10i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 462 }
      name   = "al-Mushati al-11i"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10000 id = 463 }
    location = 2057
    name     = "4th Army Corps"
    division =
    { id     = { type = 10000 id = 464 }
      name   = "al-Mushati al-12i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 465 }
      name   = "al-Mushati al-13i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 466 }
      name   = "al-Mushati al-14i"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 467 }
    location = 1999
    name     = "5th Army Corps"
    division =
    { id     = { type = 10000 id = 468 }
      name   = "al-Mushati al-15i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 469 }
      name   = "al-Mushati al-16i"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10000 id = 470 }
      name   = "al-Mushati al-17i"
      type   = infantry
      model  = 0
    }
  }
  #Air Force
  airunit =
  { location = 2023
    base     = 2023
    id       = { type = 10500 id = 467 }
    name     = "Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 468 }
      name   = "1. Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 469 }
      name   = "2. Fighter Group"
      type   = interceptor
      model  = 0
    }
  }
  airunit =
  { location = 1999
    base     = 1999
    id       = { type = 10500 id = 470 }
    name     = "Bomber Squadron"
    division =
    { id     = { type = 10500 id = 471 }
      name   = "1. Tactical Bomb Group"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 472 }
      name   = "2. Tactical Bomb Group"
      type   = tactical_bomber
      model  = 0
    }
    # division =
    # { id     = { type = 10500 id = 473 }
      # name   = "1. Dive Bomb Group"
      # type   = cas
      # model  = 0
    # }
    # division =
    # { id     = { type = 10500 id = 474 }
      # name   = "2. Dive Bomb Group"
      # type   = cas
      # model  = 0
    # }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 475 }
    name     = "Transport Fleet"
    location = 2073
    base     = 2073
    division =
    { id     = { type = 10500 id = 476 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 477 }
      name   = "Ustul al-Hamli al-2i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 478 }
      name   = "Ustul al-Hamli al-3i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 479 }
      name   = "Ustul al-Hamli al-4i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 480 }
      name   = "Ustul al-Hamli al-5i"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 481 }
      name   = "Ustul al-Hamli al-6i"
      type   = transport
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 482 }
    name     = "Jadakal Navy"
    location = 2023
    base     = 2023
    division =
    { id     = { type = 10500 id = 483 }
      name   = "Salah-ah-Din"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 484 }
      name   = "Mohammed"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 485 }
      name   = "Qur'an"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 486 }
      name   = "Jihad"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 487 }
      name   = "Nur-al-Din"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 488 }
      name   = "Jadakal"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 489 }
      name   = "Bey Ali Mohammed"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 490 }
      name   = "Ashayman"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 491 }
      name   = "Ghazi"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 492 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 493 }
      name   = "Flottille al-2i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 494 }
      name   = "Flottille al-3i"
      type   = destroyer
      model  = 0
    }
  }
}

