 
 ############################## 
 # Country definition for TIB # 
 ############################## 
  
 country = 
 {  tag                    = TIB 
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
   # Resource Reserves 
   energy                 = 300
   metal                  = 150
   rare_materials         = 75
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1289 
   manpower               = 3
   peacetime_ic_mod = 0.6
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 5 
     free_market       = 5 
     professional_army = 4 
     defense_lobby     = 1 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1294 1286 1287 1288 1289 1295 1290 1285  } 
   ownedprovinces         = {  1294 1286 1287 1288 1289 1295 1290 1285 } 
   controlledprovinces    = {  1294 1286 1287 1288 1289 1295 1290 1285 } 
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 2150 2290 1010 1190 }
   SpyInfo                = {  country = "TIB" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 440001  } 
   headofgovernment       = {  type = 9 id = 440002  } 
   foreignminister        = {  type = 9 id = 440003  } 
   armamentminister       = {  type = 9 id = 440004  } 
   ministerofsecurity     = {  type = 9 id = 440005  } 
   ministerofintelligence = {  type = 9 id = 440006  } 
   chiefofstaff           = {  type = 9 id = 440007  } 
   chiefofarmy            = {  type = 9 id = 440008  } 
   chiefofnavy            = {  type = 9 id = 440009  } 
   chiefofair             = {  type = 9 id = 440010  } 
   # GW Cavalry 
   landunit = 
   {  location = 1295 
     name     = "Xi'zang Jüntuan 1" 
     id       = {  type = 10700 id = 1  } 
     Division = 
     {  id    = {  type = 10700 id = 2  } 
       name  = "1 Xi'zang Shi" 
	   strength = 10
       type  = infantry 
	   model    = 5

      } 
     Division = 
     {  id   = {  type = 10700 id = 3  } 
       name = "10 Xi'zang Lü" 
       type = militia 
	   strength = 20
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 10700 id = 4  } 
       name = "17 Xi'zang Lü" 
       type = militia 
	   strength = 20
	   model    = 3
      } 
    } 
  } 
 
