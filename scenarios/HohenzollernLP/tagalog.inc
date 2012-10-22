#####################
# Country main data #
#####################

country =
{ tag                    = PHI
	flag_ext = _com
	name = phi_com
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 8
  transports             = 20
  escorts                = 0  
  capital                = 1565
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 8
    freedom           = 6 #4
    free_market       = 5 #3
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 1
  }
   nationalprovinces      = {  1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579  } 
   ownedprovinces         = {  1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579  } 
   controlledprovinces    = {  1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579  } 

   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber

	##Armor##
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3400 #Dive Boat
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = UAU value = 150 }
  }
  headofstate            = { type = 9 id = 215001 }
  headofgovernment       = { type = 9 id = 215002 }
  foreignminister        = { type = 9 id = 215003 }
  armamentminister       = { type = 9 id = 215004 }
  ministerofsecurity     = { type = 9 id = 215005 }
  ministerofintelligence = { type = 9 id = 215006 }
  chiefofstaff           = { type = 9 id = 6181 }
  chiefofarmy            = { type = 9 id = 215008 }
  chiefofnavy            = { type = 9 id = 215009 }
  chiefofair             = { type = 9 id = 215010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 727 }
    location = 1565
    name     = "Tagalog Army Services"
    division =
    { id     = { type = 10000 id = 728 }
      name   = "1st Special Services Division"
      type   = infantry
      model  = 1
	  strength = 75
    } 
    division =
    { id     = { type = 10000 id = 729 }
      name   = "2nd Special Services Division"
      type   = infantry
      model  = 1
	  strength = 75
    }     
  }
  #Air Force
  airunit =
  { location = 1565
    base     = 1565
    id       = { type = 10500 id = 836 }
    name     = "Tagalog Air Force"
    division =
    { id     = { type = 10500 id = 837 }
      name   = "1st TAF Fighter Wing"
      type   = interceptor
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 838 }
    name     = "Tagalog Navy"
    location = 1565
    base     = 1565
    division =
    { id     = { type = 10500 id = 839 }
      name   = "TNS Independence"
      type   = light_cruiser
      model  = 0
    }    
    division =
    { id     = { type = 10500 id = 840 }
      name   = "Flotilla Tuguegarao"
      type   = destroyer
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 841 }
      name   = "Flotilla Dagupan"
      type   = destroyer
      model  = 1
    }    
  }
  
}
