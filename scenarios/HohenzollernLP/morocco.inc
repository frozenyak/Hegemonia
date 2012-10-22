#####################
# Country main data #
#####################

country =
{ tag                    = MOR
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 21
  transports             = 20
  escorts                = 0
  capital                = 717
  SpyInfo                = { country = "MOR" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 6
    free_market       = 5
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 4
  }
	nationalprovinces      = {
		717 718 722
		719 720 715 716
		#rio de oro
		987 989 #988
		#azores
		995
		#las palmas
		990
		#
		721 723 725 724 726
	}
	ownedprovinces      = { 
		717 718 722
		719 720 715 716
		#rio de oro
		987 989 #988
		#azores
		995
		#las palmas
		990
		#
		721 723 725 #724 726
	}
	controlledprovinces      = {
		717 718 722
		719 720 715 716
		#rio de oro
		987 989 #988
		#azores
		995
		#las palmas
		990
		#
		721 723 725 #724 726
	}
	claimedprovinces = {
		#azores
		#995
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
  { relation = { tag = SPA value = 200 }
    relation = { tag = U00 value = 150 }
    relation = { tag = VIC value = 150 }
    relation = { tag = U07 value = 150 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 505001 }
  headofgovernment       = { type = 9 id = 505002 }
  foreignminister        = { type = 9 id = 505003 }
  armamentminister       = { type = 9 id = 505004 }
  ministerofsecurity     = { type = 9 id = 505005 }
  ministerofintelligence = { type = 9 id = 505006 }
  chiefofstaff           = { type = 9 id = 505007 }
  chiefofarmy            = { type = 9 id = 505008 }
  chiefofnavy            = { type = 9 id = 505009 }
  chiefofair             = { type = 9 id = 505010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 1691 }
    location = 721
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10000 id = 1692 }
      name   = "Sipahis al-1i"
      type   = cavalry
      model  = 1   
    } 
  }
  landunit =
  { id       = { type = 10000 id = 1697 }
    location = 717
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 1698 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 1     
    } 
    division =
    { id     = { type = 10000 id = 1699 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0   
    }  
  }  
  #Air Force
  airunit =
  { location = 718
    base     = 718
    id       = { type = 10500 id = 1825 }
    name     = "Moroccan Air Force"
    division =
    { id     = { type = 10500 id = 1826 }
      name   = "1.MAF Fighter Group"
      type   = interceptor
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 1827 }
    name     = "Moroccan Navy"
    location = 718
    base     = 718
    division =
    { id     = { type = 10500 id = 1828 }
      name   = "Flottille Al Bi'ra"
      type   = destroyer
      model  = 0
    } 
  }  
}