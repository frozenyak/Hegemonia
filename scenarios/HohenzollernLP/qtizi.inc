#####################
# Country main data #
#####################

country =
{ tag                    = PAN
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
  #industrial_modifier	 = 0.75
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 51
  transports             = 30
  escorts                = 0
  capital                = 2079  
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 6
    freedom           = 6
    free_market       = 7 #8
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 2
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = UAU value = 100 }
    relation = { tag = SPA value = 100 }
    relation = { tag = U05 value = -200 }
  }
  
	nationalprovinces = {  
		889 2078 2077
		#san salvador
		2079
		#costa rica
		2081 2083
		#guatemala
		2088 #2087
		#nicaragua
		2080 2082
		#honduras
		2085 2084
		#belize
		#2086
		#
		1986
		1965
	}
	ownedprovinces = {  
		2078 2077
		#san salvador
		2079
		#costa rica
		2081 2083
		#guatemala
		2088 #2087
		#nicaragua
		2080 2082
		#honduras
		2085 2084
		#belize
		#2086
		#panama
		889
		#
		1986
		1965
	}
	controlledprovinces = {  
		2078 2077
		#san salvador
		2079
		#costa rica
		2081 2083
		#guatemala
		2088 #2087
		#nicaragua
		2080 2082
		#honduras
		2085 2084
		#belize
		#2086
		#panama
		889
		#
		1986
		1965
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
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1110 #Early Mountaineers
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply

	##Land Doctrines - Grand Battle Plan##
	6010 #Firepower Focus

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing

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
   headofstate            = {  type = 9 id = 405001  } 
   headofgovernment       = {  type = 9 id = 405069  } 
   foreignminister        = {  type = 9 id = 405002  } 
   armamentminister       = {  type = 9 id = 405003  } 
   ministerofsecurity     = {  type = 9 id = 405004  } 
   ministerofintelligence = {  type = 9 id = 405005  } 
   chiefofstaff           = {  type = 9 id = 405006  } 
   chiefofarmy            = {  type = 9 id = 405048  } 
   chiefofnavy            = {  type = 9 id = 405007  } 
   chiefofair             = {  type = 9 id = 405067  }
  #Army
  landunit =
  { id       = { type = 10000 id = 730 }
    location = 2078
    name     = "1st Republican Guard"
    division =
    { id     = { type = 10000 id = 731 }
      name   = "al-Milishiya al-1i"
      type   = militia
	  strength = 40
      model  = 0   
    }  
  }
  landunit =
  { id       = { type = 10000 id = 732 }
    location = 2079
    name     = "2nd Republican Guard" 
    division =
    { id     = { type = 10000 id = 733 }
      name   = "al-Milishiya al-2i"
      type   = militia
	  strength = 40
      model  = 0   
    }     
  }  
  landunit =
  { id       = { type = 10000 id = 734 }
    location = 889
    name     = "Panama Corps"
    division =
    { id     = { type = 10000 id = 735 }
      name   = "al-Mushati al-1r"
      type   = bergsjaeger
      model  = 0
	  strength = 60  
    } 
  }  
  #Air Force
  airunit =
  { location = 889
    base     = 889
    id       = { type = 10500 id = 842 }
    name     = "Qtizi Air Force"
    division =
    { id     = { type = 10500 id = 843 }
      name   = "1. Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 844 }
      name   = "2. Fighter Group"
      type   = interceptor
      model  = 1
    }    
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 845 }
    name     = "Panama Fleet"
    location = 889
    base     = 889
    division =
    { id     = { type = 10500 id = 846 }
      name   = "Amda"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 847 }
      name   = "Assif"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 848 }
      name   = "Jwija"
      type   = light_cruiser
      model  = 0
    }     
    division =
    { id     = { type = 10500 id = 849 }
      name   = "Ithri"
      type   = light_cruiser
      model  = 0
    } 
    division =
    { id     = { type = 10500 id = 850 }
      name   = "Flottille al-1i"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 851 }
      name   = "Flottille al-2i"
      type   = destroyer
      model  = 0
    }    
  }
  navalunit =
  { id       = { type = 10500 id = 852 }
    name     = "Pacific Fleet"
    location = 2079
    base     = 2079
    division =
    { id     = { type = 10500 id = 853 }
      name   = "Limassa"
      type   = battleship
      model  = 1
    }        
    division =
    { id     = { type = 10500 id = 854 }
      name   = "Tizzit"
      type   = light_cruiser
      model  = 1
    }   
    division =
    { id     = { type = 10500 id = 855 }
      name   = "Asibi"
      type   = light_cruiser
      model  = 1
    }     
    division =
    { id     = { type = 10500 id = 856 }
      name   = "Flottille al-3i"
      type   = destroyer
      model  = 1
    }         
    division =
    { id     = { type = 10500 id = 857 }
      name   = "Flottille al-4i"
      type   = destroyer
      model  = 1
    }         
    division =
    { id     = { type = 10500 id = 858 }
      name   = "Flottille al-5i"
      type   = destroyer
      model  = 1
    }       
  }  
}
