#####################
# Country main data #
#####################

country =
{ tag                    = UAU
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes ai_set = yes } }
	ai = "australasia.ai"
  #industrial_modifier	 = 0.75
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 50
  manpower               = 38
  transports             = 40
  escorts                = 0
  capital                = 1705
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    free_market       = 8
    freedom           = 7
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
   nationalprovinces      = {  1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711  
   1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 
   1701 1699 1714 1700 1702 1696
	  #new zealand
	  1720 1718 1719 1721 1722 1723
	} 
   ownedprovinces    = {  
		1697 1716  1698 1695 1688 1692 1689 1690 1694 1691  1703 1693 1711 1712 1715   
		1704 1705 1706 1717  
		1707  1710 1708  1709 1713 1701   1699 1714 1700  1702  1696   
		#new zealand
		1720 1718 1719 1721 1722 1723
	} 
	controlledprovinces    = {  
		1697 1716  1698 1695 1688 1692 1689 1690 1694 1691  1703 1693 1711 1712 1715   
		1704 1705 1706 1717  
		1707  1710 1708  1709 1713 1701   1699 1714 1700  1702  1696  
		#new zealand
		1720 1718 1719 1721 1722 1723
	} 
   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9140 #Strat Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4190 #Basic Naval Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2150 #Basic Armored Car	
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
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

	##Land Doctrines - Sup Firepower##
	6030 #Grand Battleplan
	6560 #defensive focus
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3150 #Basic Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3270 #Basic Battleship
	3320 #GW Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = PHI value = 150 guaranteed = { day = 5 month = may year = 1934 } }
    relation = { tag = PAN value = 100 }
    relation = { tag = U08 value = 50 }
    relation = { tag = GER value = 50 }
    relation = { tag = MEX value = 50 }
  }
  headofstate            = { type = 9 id = 65501 }
  headofgovernment       = { type = 9 id = 65502 }
  foreignminister        = { type = 9 id = 65503 }
  armamentminister       = { type = 9 id = 65511 }
  ministerofsecurity     = { type = 9 id = 65524 }
  ministerofintelligence = { type = 9 id = 65532 }
  chiefofstaff           = { type = 9 id = 65542 }
  chiefofarmy            = { type = 9 id = 65547 }
  chiefofnavy            = { type = 9 id = 65550 }
  chiefofair             = { type = 9 id = 65553 }
  #Army
  landunit =
  { id       = { type = 10000 id = 63 }
    location = 1705
    name     = "Australasian Army"
    division =
    { id     = { type = 10000 id = 64 }
      name   = "1st Australasian Infantry Div."
      type   = infantry
      model  = 0
	  strength = 40
    } 
  } 
  landunit =
  { id       = { type = 10000 id = 65 }
    location = 1690
    name     = "Outback Cavalry"
    division =
    { id     = { type = 10000 id = 66 }
      name   = "1st Australasian Cavalry Div."
      type   = cavalry
      model  = 2
	  strength = 40
    } 
  }  
  landunit =
  { id       = { type = 10000 id = 67 }
    location = 1704
    name     = "National Guard"
    division =
    { id     = { type = 10000 id = 68 }
      name   = "1st Citizen Militia Division"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 69 }
      name   = "2nd Citizen Militia Division"
      type   = militia
      model  = 0
	  strength = 30
    } 
    division =
    { id     = { type = 10000 id = 70 }
      name   = "3rd Citizen Militia Division"
      type   = militia
      model  = 0
	  strength = 30
    }     
  }
  #Air Force
  airunit =
  { location = 1707
    base     = 1707
    id       = { type = 10500 id = 61 }
    name     = "Australasian Air Force"
    division =
    { id     = { type = 10500 id = 62 }
      name   = "No.1 AAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 63 }
      name   = "No.2 AAF Fighter Group"
      type   = interceptor
      model  = 1
    }    
  } 
  airunit =
  { location = 1707
    base     = 1707
    id       = { type = 10500 id = 64 }
    name     = "Australasian Bomber Command"
    division =
    { id     = { type = 10500 id = 65 }
      name   = "No.1 AAF Strategic Group"
      type   = strategic_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 66 }
      name   = "No.1 AAF Naval Bomber Group"
      type   = naval_bomber
      model  = 0
    }    
  }  
  navalunit =
  { id       = { type = 10500 id = 67 }
    name     = "Submarine Fleet"
    location = 1703
    base     = 1703
    division =
    { id     = { type = 10500 id = 68 }
      name   = "1st Submarine Flotilla"
      type   = submarine
      model  = 1
    } 
    division =
    { id     = { type = 10500 id = 69 }
      name   = "2nd Submarine Flotilla"
      type   = submarine
      model  = 1
    } 
    division =
    { id     = { type = 10500 id = 70 }
      name   = "3rd Submarine Flotilla"
      type   = submarine
      model  = 1
    }     
  } 
  navalunit =
  { id       = { type = 10500 id = 71 }
    name     = "Transport Fleet"
    location = 1705
    base     = 1705
    division =
    { id     = { type = 10500 id = 72 }
      name   = "1st Transport Flotilla"
      type   = transport
      model  = 0
    } 
  }
  navalunit =
  { id       = { type = 10500 id = 73 }
    name     = "Australian Fleet"
    location = 1704
    base     = 1704
    division =
    { id     = { type = 10500 id = 76 }
      name   = "ANS Unity"
      type   = battleship
      model  = 2
    }     
    division =
    { id     = { type = 10500 id = 74 }
      name   = "ANS Sydney"
      type   = battleship
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 77 }
      name   = "ANS Adelaide"
      type   = heavy_cruiser
      model  = 1
    }    
    division =
    { id     = { type = 10500 id = 82 }
      name   = "ANS Canberra"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 83 }
      name   = "ANS Alice Springs"
      type   = light_cruiser
      model  = 1
    }   
    division =
    { id     = { type = 10500 id = 85 }
      name   = "ANS Darwin"
      type   = light_cruiser
      model  = 1
    }   
    division =
    { id     = { type = 10500 id = 88 }
      name   = "3rd Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 89 }
      name   = "4th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }       
  }
  navalunit =
  { id       = { type = 10500 id = 90 }
    name     = "New Zealand Fleet"
    location = 1871
    base     = 1871
    division =
    { id     = { type = 10500 id = 75 }
      name   = "ANS Wellington"
      type   = battleship
      model  = 0
    }     
    division =
    { id     = { type = 10500 id = 78 }
      name   = "ANS Vengeance"
      type   = heavy_cruiser
      model  = 1
    }     
    division =
    { id     = { type = 10500 id = 86 }
      name   = "1st Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }  
    division =
    { id     = { type = 10500 id = 87 }
      name   = "2nd Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 79 }
      name   = "ANS Cooktown"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 80 }
      name   = "ANS Australia"
      type   = light_cruiser
      model  = 0
    }  
    division =
    { id     = { type = 10500 id = 81 }
      name   = "ANS Broome"
      type   = light_cruiser
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 84 }
      name   = "ANS Christmas Island"
      type   = light_cruiser
      model  = 1
    }     
  }  
}
