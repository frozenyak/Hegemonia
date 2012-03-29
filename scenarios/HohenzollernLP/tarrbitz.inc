#####################
# Country main data #
#####################

country =
{ tag                    = CUB
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 25
  transports             = 20
  escorts                = 0
  capital                = 1776
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 4
    freedom           = 2
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
	nationalprovinces      = {  
		1776 1779 1775 1777 1778 1782 1774
		#
		1762
	} 
	ownedprovinces      = {  
		1776 1779 1775 1777 1778 1782 1774
		#
		1762
	} 
	controlledprovinces      = {  
		1776 1779 1775 1777 1778 1782 1774
		#
		1762
	} 
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
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5190 #Basic Oil Refining
	
	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry

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
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = DOM value = 100 }
	relation = { tag = MOR value = 100 }
  }
  headofstate            = { type = 9 id = 33034 }
  headofgovernment       = { type = 9 id = 33122 }
  foreignminister        = { type = 9 id = 33052 }
  armamentminister       = { type = 9 id = 33061 }
  ministerofsecurity     = { type = 9 id = 33081 }
  ministerofintelligence = { type = 9 id = 33086 }
  chiefofstaff           = { type = 9 id = 33097 }
  chiefofarmy            = { type = 9 id = 33103 }
  chiefofnavy            = { type = 9 id = 33109 }
  chiefofair             = { type = 9 id = 33114 }
  #Army
  landunit =
  { id       = { type = 10000 id = 742 }
    location = 1776
    name     = "Army of Tarrbitz"
    division =
    { id     = { type = 10000 id = 743 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 744 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 0
	  strength = 20
    } 
    division =
    { id     = { type = 10000 id = 745 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 0
	  strength = 20
    }         
  }
  landunit =
  { id       = { type = 10000 id = 746 }
    location = 1782
    name     = "Jamaica Garrison" 
    division =
    { id     = { type = 10000 id = 747 }
      name   = "al-Mushati al-7i"
      type   = garrison
      model  = 0
	  strength = 35
    }         
  }  
  #Air Force
  airunit =
  { location = 1776
    base     = 1776
    id       = { type = 10500 id = 859 }
    name     = "Tarrbitz Air Force"
    division =
    { id     = { type = 10500 id = 860 }
      name   = "1. Fighter Group"
      type   = interceptor
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 861 }
    name     = "Tarrbitz Navy"
    location = 1776
    base     = 1776
    division =
    { id     = { type = 10500 id = 863 }
      name   = "Tarrbitz"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 864 }
      name   = "Jazira"
      type   = light_cruiser
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 865 }
      name   = "Ifirr"
      type   = light_cruiser
      model  = 0
    }     
    division =
    { id     = { type = 10500 id = 866 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 867 }
      name   = "Flottille al-2i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 868 }
      name   = "Flottille al-3i"
      type   = destroyer
      model  = 0
    }         
  } 
  navalunit =
  { id       = { type = 10500 id = 869 }
    name     = "Transport Fleet"
    location = 1782
    base     = 1782
    division =
    { id     = { type = 10500 id = 870 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    } 
  }
}
