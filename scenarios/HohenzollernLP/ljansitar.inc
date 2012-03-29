#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  #puppet		 = SPA
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 29
  transports             = 20
  escorts                = 0
  capital                = 880 #873
  SpyInfo                = { country = "SAF" NumberOfSpies = 2 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = SPA value = 200 }
  }
	nationalprovinces    = {  
		879 880 875 881 872 876 878 873 883 882 884
		874 877
		#UK East African possessions
		859  861 862 863 864 865 866 867 868 869 870 871
		#mocambique
		855 856 857 858
		#niassa
		#854
		#namibia
		#886 885
	} 
	ownedprovinces    = {  
		879 880 875 881 872 876 878 873 883 882 884
		874 877
		#UK East African possessions
		859  861 862 863 864 865 866 867 868 869 870 871
		#mocambique
		855 856 857 858
		#niassa
		#854
		#namibia
		#886 885
	} 
	controlledprovinces    = {  
		879 880 875 881 872 876 878 873 883 882 884
		874 877
		#UK East African possessions
		859  861 862 863 864 865 866 867 868 869 870 871
		#mocambique
		855 856 857 858
		#niassa
		#854
		#namibia
		#886 885
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
	
	#4030 #Basic Interceptor

	##Armor##
	2010 #Great War Tank
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak
	#2460 #Early Flak
	
	2020 #Tankette
	2150 #Basic Armored Car
	#2400 #Early Anti-Tank
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5310 #Census Tabulating
	
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5190 #Basic Oil Refining

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply
	1020 #Early Infantry
	1230 #Basic Motorized Division
	1110 #Early Mountaineers

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
	
	3140 #Early Heavy Cruiser
	3260 #Early Battleship
	3410 #Short Range Sub
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
        democratic = 8
        political_left = 5 
        freedom = 6
        free_market = 10
        professional_army = 3
        defense_lobby = 6 
        interventionism = 4 
  }
  headofstate            = { type = 9 id = 37032 }
  headofgovernment       = { type = 9 id = 37049 }
  foreignminister        = { type = 9 id = 37061 }
  armamentminister       = { type = 9 id = 37073 }
  ministerofsecurity     = { type = 9 id = 37096 }
  ministerofintelligence = { type = 9 id = 37113 }
  chiefofstaff           = { type = 9 id = 37128 }
  chiefofarmy            = { type = 9 id = 37138 }
  chiefofnavy            = { type = 9 id = 37145 }
  chiefofair             = { type = 9 id = 37153 }
  #Army
  landunit =
  { id       = { type = 10000 id = 635 }
    location = 873
    name     = "Colonial Cavalry"
    division =
    { id     = { type = 10000 id = 636 }
      name   = "Sipahis al-1i"
      type   = cavalry
      model  = 1  
    } 
  }
  landunit =
  { id       = { type = 10000 id = 637 }
    location = 863
    name     = "1st Colonial Militia"
    division =
    { id     = { type = 10000 id = 638 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 0   
    } 
    division =
    { id     = { type = 10000 id = 639 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0   
    }  
    division =
    { id     = { type = 10000 id = 640 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0   
    }     
  } 
  landunit =
  { id       = { type = 10000 id = 641 }
    location = 883
    name     = "2nd Colonial Militia"
    division =
    { id     = { type = 10000 id = 642 }
      name   = "al-Milishiya al-3i"
      type   = militia
      model  = 0
      extra  = artillery
      brigade_model = 1
    }  
    division =
    { id     = { type = 10000 id = 643 }
      name   = "al-Milishiya al-4i"
      type   = militia
      model  = 0   
    }  
    division =
    { id     = { type = 10000 id = 644 }
      name   = "al-Milishiya al-5i"
      type   = militia
      model  = 0   
    }     
  }    
  #Air Force
  airunit =
  { location = 872
    base     = 872
    id       = { type = 10500 id = 670 }
    name     = "Ljanistar Air Force"
    division =
    { id     = { type = 10500 id = 671 }
      name   = "1. Fighter Group"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 672 }
    name     = "Ljanistar Navy"
    location = 872
    base     = 872
    division =
    { id     = { type = 10500 id = 673 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 674 }
      name   = "Flottille al-2i"
      type   = destroyer
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 675 }
      name   = "Ljansitar"
      type   = light_cruiser
      model  = 0
    }     
  }  
}
