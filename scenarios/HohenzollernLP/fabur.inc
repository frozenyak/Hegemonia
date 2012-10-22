#####################
# Country main data #
#####################

country =
{ tag                    = DOM
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 1
  transports             = 30
  escorts                = 0 
  capital                = 1765
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 6 #7
    freedom           = 5
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
 	nationalprovinces      = {  
		1752 1765 1767 1768 1761
		#uk
		1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772
	} 
	ownedprovinces      = {  
		1752 1765 1767 1768 1761
		#uk
		1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772
	} 
	controlledprovinces      = {  
		1752 1765 1767 1768 1761
		#uk
		1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772
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
  { relation = { tag = USA value = 50 }
    relation = { tag = CUB value = 75 }
    relation = { tag = SPA value = 100 }
  } 
  headofstate            = { type = 9 id = 49031 }
  headofgovernment       = { type = 9 id = 49041 }
  foreignminister        = { type = 9 id = 49046 }
  armamentminister       = { type = 9 id = 49059 }
  ministerofsecurity     = { type = 9 id = 49064 }
  ministerofintelligence = { type = 9 id = 49076 }
  chiefofstaff           = { type = 9 id = 49080 }
  chiefofarmy            = { type = 9 id = 49084 }
  chiefofnavy            = { type = 9 id = 49009 }
  chiefofair             = { type = 9 id = 49010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 161 }
    location = 1765
    name     = "Confederation Militia"
    division =
    { id     = { type = 10000 id = 162 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0    
    } 
    division =
    { id     = { type = 10000 id = 1998 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0    
    }  
    division =
    { id     = { type = 10000 id = 1999 }
      name   = "al-Milishiya al-3i"
      type   = militia
      model  = 0    
    } 
  }
  landunit =
  { id       = { type = 10000 id = 1997 }
    location = 1758
    name     = "Trinidad Garrison"
    division =
    { id     = { type = 10000 id = 1996 }
      name   = "al-Mushati al-2i"
      type   = garrison
      model  = 0    
    }
  }  
  #Navy
  navalunit =
  { id       = { type = 10500 id = 123 }
    location = 1765
    base     = 1765
    name     = "Confederation Fleet"
    division =
    { id     = { type = 10500 id = 124 }
      name   = "Fabur al-Fez"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 125 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 126 }
      name   = "Ustul al-Hamli al-1i"
      type   = transport
      model  = 0
    }    
  }  
}
