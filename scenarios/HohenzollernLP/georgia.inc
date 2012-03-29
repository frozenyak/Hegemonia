#####################
# Country main data #
#####################

country =
{ tag                    = GEO
  capital                = 709
  #industrial_modifier	 = 0.75  
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 49
  transports             = 10
  escorts                = 0
  SpyInfo                = { country = "GEO" NumberOfSpies = 1 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = RUS value = 25 }
    relation = { tag = U00 value = -100 }
    relation = { tag = TUR value = -15 }
  }
	nationalprovinces = {
		707 708 709 710
		#Armenia_Azerbaijan
		#711 712 713 714
		#krasnodar
		693 694 695 #691 692
		#nalchik
		696 698 701 703 705
		#astrakhan
		699 706 #697
		#groznyi
		700 702 704
		#
		1113
	}
	ownedprovinces = {
		707 708 709 710
		#Armenia_Azerbaijan
		#711 712 714 713
		#krasnodar
		#691 692 693 694 695
		#nalchik
		696 698 701 703 705
		#astrakhan
		699 706 #697
		#groznyi
		700 702 704
	}
	controlledprovinces = {
		707 708 709 710
		#Armenia_Azerbaijan
		#711 712 714 713
		#krasnodar
		#691 692 693 694 695
		#nalchik
		696 698 701 703 705
		#astrakhan
		699 706 #697
		#groznyi
		700 702 704
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
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply

	##Land Doctrines - Sup Firepower##
	6010 #Firepower Focus
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	
	3810 #Troopship
  }
  blueprints             = { }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 8
    free_market       = 8
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 475013 }
  headofgovernment       = { type = 9 id = 475017 }
  foreignminister        = { type = 9 id = 475024 }
  armamentminister       = { type = 9 id = 475031 }
  ministerofsecurity     = { type = 9 id = 475037 }
  ministerofintelligence = { type = 9 id = 475043 }
  chiefofstaff           = { type = 9 id = 475048 }
  chiefofarmy            = { type = 9 id = 475053 }
  chiefofnavy            = { type = 9 id = 475058 }
  chiefofair             = { type = 9 id = 475064 }
  #Army
  landunit =
  { id       = { type = 10000 id = 215 }
    location = 698
    name     = "1st National Guard"
    division =
    { id     = { type = 10000 id = 216 }
      name   = "1st Rifle Division"
      type   = infantry
      model  = 0
    }   
  }
  landunit =
  { id       = { type = 10000 id = 220 }
    location = 708
    name     = "2nd National Guard"
    division =
    { id     = { type = 10000 id = 217 }
      name   = "2nd Rifle Division"
      type   = infantry
      model  = 0
    }     
  }  
  landunit =
  { id       = { type = 10000 id = 218 }
    location = 709
    name     = "Mountain Corps"
    division =
    { id     = { type = 10000 id = 219 }
      name   = "1st Mountain Rifle Division"
      type   = bergsjaeger
      model  = 0    
    } 
  }  
  #Air Force
  airunit =
  { location = 708
    base     = 708
    id       = { type = 10500 id = 194 }
    name     = "Georgian Air Force"
    division =
    { id     = { type = 10500 id = 195 }
      name   = "1st Fighter Division"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 196 }
    name     = "Georgian Navy"
    location = 708
    base     = 708
    division =
    { id     = { type = 10500 id = 197 }
      name   = "Ossetia"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 198 }
      name   = "1st Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 199 }
      name   = "2nd Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }      
  }  
}
