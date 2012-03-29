
 ############################## 
 # Country definition for CMB # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CMB 
   # Resource Reserves 
	energy                 = 540
	metal                  = 270
	rare_materials         = 135
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1401 
	manpower               = 27 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     freedom           = 5 
     free_market       = 6 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 4 
    } 
	peacetime_ic_mod       = 0.6
	nationalprovinces = {
		1400 1401 1402 1398 1422 1427 
		1428 1391 1403
	} 
	ownedprovinces = {
		1400 1401 1402 1422 1427 
		1428 1391
	} 
	controlledprovinces = {  
		1400 1401 1402 1422 1427 
		1428 1391
	} 
	claimedprovinces = {
		1423
	}
  techapps               = { 4010 2150 2290 1010 1190 }
  peacetime_ic_mod = 0.6
  diplomacy = 
   {  relation = {  tag = U08 value = 75  } 
     relation = {  tag = CHI value = 150  } 
    } 
   SpyInfo                = {  country = "CMB" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 541001  } 
   headofgovernment       = {  type = 9 id = 541002  } 
   foreignminister        = {  type = 9 id = 541003  } 
   armamentminister       = {  type = 9 id = 541004  } 
   ministerofsecurity     = {  type = 9 id = 541005  } 
   ministerofintelligence = {  type = 9 id = 541006  } 
   chiefofstaff           = {  type = 9 id = 541007  } 
   chiefofarmy            = {  type = 9 id = 541008  } 
   chiefofnavy            = {  type = 9 id = 541009  } 
   chiefofair             = {  type = 9 id = 541010  } 
   landunit = 
   {  location = 1401 
     name     = "Royal Khmer Army" 
     id       = {  type = 23600 id = 1  } 
     Division = 
     {  id       = {  type = 23600 id = 2  } 
       name     = "1. Khmer Infantry Div." 
       type     = infantry 
	   model = 0
       strength = 90 
      } 
     Division = 
     {  id       = {  type = 23600 id = 3  } 
       name     = "2. Khmer Infantry Div." 
       type     = infantry 
	   model = 0
       strength = 70 
      } 
    } 
   landunit = 
   {  location = 1400 
     name     = "Royal Khmer Police Force" 
     id       = {  type = 23600 id = 4  } 
     Division = 
     {  id       = {  type = 23600 id = 5  } 
       name     = "1. Royal Khmer Police Div." 
       type     = garrison
		model = 0 
       strength = 30 
       extra    = police 
	   brigade_model = 1
      } 
    } 
   navalunit = 
   {  location = 1400 
     base     = 1400 
     name     = "Royal Khmer Navy" 
     id       = {  type = 23600 id = 6  } 
     Division = 
     {  id    = {  type = 23600 id = 7  } 
       name  = "RKNS Sri Ayuthia" 
       type  = light_cruiser 
       model = 0 
      } 
     Division = 
     {  id    = {  type = 23600 id = 8  } 
       name  = "RKNS Dhonburi" 
       type  = light_cruiser 
       model = 0 
      } 
     Division = 
     {  id    = {  type = 23600 id = 10  } 
       name  = "Phra Ruang Flotille" 
       type  = destroyer 
       model = 0
      } 
    } 
   airunit = 
   {  location = 1401 
     base     = 1401 
     name     = "Royal Khmer Airforce" 
     id       = {  type = 23600 id = 12  } 
     Division = 
     {  id       = {  type = 23600 id = 13  } 
       name     = "1. RKAF Fighter Group" 
       type     = interceptor 
       model    = 0 
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 23600 id = 14  } 
       name     = "1. RKAF Tactic Bomb Group" 
       type     = tactical_bomber 
       model    = 0
       strength = 44 
      } 
    } 
  } 
 
