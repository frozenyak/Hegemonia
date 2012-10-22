#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  puppet		 = LIT
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
  capital                = 316
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 76
  transports             = 20
  escorts                = 0
  SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = U00 value = -200 }
    relation = { tag = LIT value = 200 }
    relation = { tag = GER value = 50 }
  }
	nationalprovinces      = {  
		316 308 311 315  309 310 297 314 312 
		299 291 303 304 307 306 313 298 305 301 293 302 #621 300
		#bul
		#317 326
		#
		295 285 289 286 296 287 288 292
	} 
	ownedprovinces         = {  
		307 316 308 311 315 299 291 309 310 297 293 306 303 304 
		312 314 313 305 298 301 302 #300
		#621
		#bul
		#317 326
	} 
	controlledprovinces    = {  
		307 316 308 311 315 299 291 309 310 297 293 306 303 304 
		312 314 313 305 298 301 302 #300 
		#621
		#bul
		#317 326
	} 
	claimedprovinces 	  = { 
		#295 285 289 286 296 287 288 292 317 326 
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

	##Armor##
	2010 #Great War Tank
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
	1200 #Early Cavalry
	
	1310 #Rear Area Supply
	1110 #Early Mountaineers

	##Land Doctrines - Grand Battle Plan##
	6010 #Firepower Focus

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #4
    political_left    = 3
    freedom           = 2
    free_market       = 4
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 22042 }
  headofgovernment       = { type = 9 id = 22049 }
  foreignminister        = { type = 9 id = 22059 }
  armamentminister       = { type = 9 id = 22094 }
  ministerofsecurity     = { type = 9 id = 22100 }
  ministerofintelligence = { type = 9 id = 22118 }
  chiefofstaff           = { type = 9 id = 22124 }
  chiefofarmy            = { type = 9 id = 22138 }
  chiefofnavy            = { type = 9 id = 22147 }
  chiefofair             = { type = 9 id = 22010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 602 }
    location = 306
    name     = "Mounted Police"
    division =
    { id     = { type = 10000 id = 603 }
      name   = "Divizie 1 Cavalerie"
      type   = cavalry	
      model  = 1
      extra  = police
      brigade_model = 0
	  strength = 80
    } 
  }
  landunit =
  { id       = { type = 10000 id = 604 }
    location = 316
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 605 }
      name   = "Div. 1 Infanterie Antrenament"
      type   = infantry
	  strength = 15
      model  = 0
      extra  = artillery
      brigade_model = 2    
    } 
    division =
    { id     = { type = 10000 id = 606 }
      name   = "Div. 2 Infanterie Antrenament"
      type   = infantry
	  strength = 15
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 607 }
      name   = "Vânatori de munte"
      type   = bergsjaeger
	  strength = 50
      model  = 0   
    }  
  }
  landunit =
  { id       = { type = 10000 id = 608 }
    location = 307
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 609 }
      name   = "Div. 4 Infanterie Antrenament"
      type   = infantry
	  strength = 60
      model  = 0
      extra  = artillery
      brigade_model = 2    
    } 
    division =
    { id     = { type = 10000 id = 610 }
      name   = "Div. 5 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 611 }
      name   = "Div. 6 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }      
  } 
  landunit =
  { id       = { type = 10000 id = 612 }
    location = 315
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 613 }
      name   = "Div. 7 Infanterie Antrenament"
      type   = infantry
	  strength = 60
      model  = 0
      extra  = artillery
      brigade_model = 2    
    } 
    division =
    { id     = { type = 10000 id = 614 }
      name   = "Div. 8 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 615 }
      name   = "Div. 9 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }      
  } 
  landunit =
  { id       = { type = 10000 id = 616 }
    location = 312
    name     = "4th Army Corps"
    division =
    { id     = { type = 10000 id = 617 }
      name   = "Div. 10 Infanterie Antrenament"
      type   = infantry
	  strength = 60
      model  = 0
      extra  = artillery
      brigade_model = 2    
    } 
    division =
    { id     = { type = 10000 id = 618 }
      name   = "Div. 11 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 619 }
      name   = "Div. 12 Infanterie Antrenament"
      type   = infantry
	  strength = 20
      model  = 0   
    }      
  }   
  #Air Force
  airunit =
  { location = 316
    base     = 316
    id       = { type = 10500 id = 628 }
    name     = "Romanian Air Force"
    division =
    { id     = { type = 10500 id = 629 }
      name   = "Grup 1 Avion de Vanatoare"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { location = 310
    base     = 310
    id       = { type = 10500 id = 630 }
    name     = "Romanian Navy"
    division =
    { id     = { type = 10500 id = 631 }
      name   = "'NMS Regele Ferdinand' Flotila"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 632 }
      name   = "'NMS Regina Maria' Flotila"
      type   = destroyer
      model  = 0
    }    
  } 
}
