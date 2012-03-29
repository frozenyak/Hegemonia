#####################
# Country main data #
#####################

country =
{ tag                    = CAN
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 52
  transports             = 50
  escorts                = 0
  capital                = 2108
  SpyInfo                = { country = "CAN" NumberOfSpies = 2 }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = MEX value = -200 }
    relation = { tag = VEN value = 50 }
    relation = { tag = SCA value = 100 }
  }
	nationalprovinces      = {
		      2106 2107 2115 2108
		2110 2129 2113 2114   2112 2127   2116 2123 2122 2121  2125  2117  2119  2135 2136 2138 2137    2120
		2096 2097 2098 2100 2101 2102
		#n/s dakota
		1852 1854 1855 1856 1857
		#minnesota
		1846 1847 1849 1850
		#montana
		1851 1853 1867
	}
	ownedprovinces       = {
		      2106 2107 2115 2108
		2110 2129 2113 2114   2112 2127   2116 2123 2122 2121  2125  2117  2119  2135 2136 2138 2137    2120
		2096 2097 2098 2100 2101 2102
		#n/s dakota
		1852 1854 1855 1856 1857
		#minnesota
		1846 1847 1849 1850
		#montana
		1851 1853 1867
	}
	controlledprovinces      = {
		      2106 2107 2115 2108
		2110 2129 2113 2114   2112 2127   2116 2123 2122 2121  2125  2117  2119  2135 2136 2138 2137    2120
		2096 2097 2098 2100 2101 2102
		#n/s dakota
		1852 1854 1855 1856 1857
		#minnesota
		1846 1847 1849 1850
		#montana
		1851 1853 1867
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
	2150 #Basic Armored Car
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
	5190 #Basic Oil Refining
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry

	1310 #Rear Area Supply
	1020 #Early Infantry
	1230 #Basic Motorized Division

	##Land Doctrines##
	14000 #Great War Hospital
	
	6030 #Grand Battleplan
	6560 #defensive focus
	6110 #Mass Assault

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
	3410 #Short Range Sub
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4 #6
    political_left    = 3
    freedom           = 4 #6
    free_market       = 4 #8
    professional_army = 4
    defense_lobby     = 7 #8
    interventionism   = 6 #4
  }
  headofstate            = { type = 9 id = 220095 }
  headofgovernment       = { type = 9 id = 220014 }
  foreignminister        = { type = 9 id = 220003 }
  armamentminister       = { type = 9 id = 220032 }
  ministerofsecurity     = { type = 9 id = 220044 }
  ministerofintelligence = { type = 9 id = 220060 }
  chiefofstaff           = { type = 9 id = 220073 }
  chiefofarmy            = { type = 9 id = 220080 }
  chiefofnavy            = { type = 9 id = 220086 }
  chiefofair             = { type = 9 id = 220090 }
  #Army
  landunit =
  { id       = { type = 10000 id = 748 }
    location = 2108
    name     = "Vinlands Arme"
    division =
    { id     = { type = 10000 id = 749 }
      name   = "I. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 750 }
      name   = "II. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 751 }
      name   = "III. Infanterifördelningen"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 752 }
    location = 2108
    name     = "Vinlands Kavalleri"
    division =
    { id     = { type = 10000 id = 753 }
      name   = "I. Kavallerifördelningen"
      type   = cavalry
      model  = 1
	  strength = 60
    }
  }
  landunit =
  { id       = { type = 10000 id = 754 }
    location = 2108
    name     = "1. Nationalgardet"
    division =
    { id     = { type = 10000 id = 755 }
      name   = "1. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 756 }
    location = 2108
    name     = "2. Nationalgardet"
    division =
    { id     = { type = 10000 id = 757 }
      name   = "2. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 758 }
    location = 2108
    name     = "3. Nationalgardet"
    division =
    { id     = { type = 10000 id = 759 }
      name   = "3. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 760 }
    location = 2117
    name     = "4. Nationalgardet"
    division =
    { id     = { type = 10000 id = 761 }
      name   = "4. Hemvärnskretsar"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  #Air Force
  airunit =
  { location = 2108
    base     = 2108
    id       = { type = 10500 id = 871 }
    name     = "Vinlands Flygvapen"
    division =
    { id     = { type = 10500 id = 872 }
      name   = "1. Jaktflyggruppen"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 873 }
      name   = "2. Jaktflyggruppen"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 874 }
      name   = "1. Taktiska Bombflyggruppen"
      type   = tactical_bomber
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 875 }
    name     = "Vinlands Flotta"
    location = 2117
    base     = 2117
    division =
    { id     = { type = 10500 id = 876 }
      name   = "Vinland"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 877 }
      name   = "Friheten"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 878 }
      name   = "Nationen"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 879 }
      name   = "1. Jagarflottiljen"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 880 }
      name   = "2. Jagarflottiljen"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 881 }
      name   = "3. Jagarflottiljen"
      type   = destroyer
      model  = 1
    }
  }
}
