#####################
# Country main data #
#####################

country =
{ tag                    = HAI
  #industrial_modifier	 = 0.85
  #relative_manpower	 = 1.50
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 11
  transports             = 10
  escorts                = 0  
  capital                = 1781
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    free_market       = 7
    freedom           = 7 #5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }  
   nationalprovinces      = {  1781 1780  } 
   ownedprovinces         = {  1781 1780 } 
   controlledprovinces    = {  1781 1780 } 
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
	
	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = MEX value = 50 }
    relation = { tag = DOM value = 100 }
  }
  headofstate            = { type = 9 id = 78034 }
  headofgovernment       = { type = 9 id = 78041 }
  foreignminister        = { type = 9 id = 78051 }
  armamentminister       = { type = 9 id = 78062 }
  ministerofsecurity     = { type = 9 id = 78005 }
  ministerofintelligence = { type = 9 id = 78083 }
  chiefofstaff           = { type = 9 id = 78093 }
  chiefofarmy            = { type = 9 id = 78008 }
  chiefofnavy            = { type = 9 id = 78106 }
  chiefofair             = { type = 9 id = 78110 }
  #Army
  landunit =
  { id       = { type = 10000 id = 645 }
    location = 1781
    name     = "Army of Mansur"
    division =
    { id     = { type = 10000 id = 646 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0   
    } 
    division =
    { id     = { type = 10000 id = 647 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0   
    }   
    division =
    { id     = { type = 10000 id = 648 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0   
    }       
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 676 }
    name     = "Mansur Navy"
    location = 1781
    base     = 1781
    division =
    { id     = { type = 10500 id = 677 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 678 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    }    
  }  
}
