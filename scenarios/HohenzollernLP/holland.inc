 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U10 
	capital                = 122 
	puppet = VIC
	# Resource Reserves 
	energy                 = 1740
	metal                  = 870
	rare_materials         = 435
	oil                    = 500 
	supplies               = 500 
	money                  = 40 
	manpower               = 9
	transports             = 10 
	escorts                = 0 
   peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = U06 value = -200 }
    relation = { tag = GER value = -200 }
    relation = { tag = SPA value = -200 }
    relation = { tag = U00 value = 200 }
    relation = { tag = U07 value = 200 }
    relation = { tag = RSI value = 200 }
  }
   SpyInfo                = {  country = "HOL" NumberOfSpies = 3  } 
	nationalprovinces	= {  
		125   122   123   118   119   124 120 121  
	} 
	ownedprovinces	= {  
		125   122   123   118   119   124 120 121  
	} 
	controlledprovinces	= {  
		125   122   123   118   119   124 120 121  
	} 
	claimedprovinces = { }
   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9040 #Battlefield Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber
	4130 #Early Bomber	
	#4030 #Basic Interceptor
	4170 #Basic CAS

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	14000 #Great War Hospital
	
	6030 #Grand Battleplan
	6560 #defensive focus

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3320 #GW Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3810 #Troopship
  }
	policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 3 #2 
     freedom           = 2 
     professional_army = 4 
     defense_lobby     = 6 
     interventionism   = 4 
    } 
   headofstate            = {  type = 9 id = 865003 } 
   headofgovernment       = {  type = 9 id = 865004 } 
   foreignminister        = {  type = 9 id = 865008 } 
   armamentminister       = {  type = 9 id = 865022 } 
   ministerofsecurity     = {  type = 9 id = 865033 } 
   ministerofintelligence = {  type = 9 id = 865040 } 
   chiefofstaff           = {  type = 9 id = 865045 } 
   chiefofarmy            = {  type = 9 id = 865048 } 
   chiefofnavy            = {  type = 9 id = 865050 } 
   chiefofair             = {  type = 9 id = 865053 } 
   
  landunit = 
   {  id       = {  type = 18500 id = 1  } 
     location = 125 
     name     = "Ie Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 2  } 
       name  = "1e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 1 
       extra = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id   = {  type = 18500 id = 3  } 
       name = "5e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 0
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 4  } 
     location = 119 
     name     = "IIe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 5  } 
       name  = "2e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 1 
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18500 id = 6  } 
       name = "6e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 0 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 7  } 
     location = 118 
     name     = "IIIe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 8  } 
       name  = "3e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 1
       extra = engineer
	   brigade_model = 3
      } 
     Division = 
     {  id   = {  type = 18500 id = 9  } 
       name = "7e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 0 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 10  } 
     location = 120 
     name     = "IVe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 11  } 
       name  = "4e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 1 
       extra = armored_car
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18500 id = 12  } 
       name = "8e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 0 
      } 
    } 
   navalunit = 
   {  id       = {  type = 18500 id = 17  } 
     location = 122 
     base     = 122 
     name     = "De Vloot" 
     Division = 
     {  id    = {  type = 18500 id = 18  } 
       name  = "HrMs De Ruyter" 
       type  = light_cruiser 
       model = 4 
      } 
     Division = 
     {  id    = {  type = 18500 id = 19  } 
       name  = "HrMs Java" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 20  } 
       name  = "HrMs Sumatra" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 21  } 
       name  = "1e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      } 
     Division = 
     {  id   = {  type = 18500 id = 23  } 
       name = "1e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 24  } 
       name = "2e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 25  } 
       name = "3e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 
	navalunit = { 
		id = { type = 18500 id = 1381 } 
		name = "3e Koninklijke Vloot" 
		location = 122 
		base = 122 
     Division = 
     {  id    = {  type = 18500 id = 39  } 
       name  = "1e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 40  } 
       name  = "2e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 41  } 
       name  = "3e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 3 
      } 
    }   
}
