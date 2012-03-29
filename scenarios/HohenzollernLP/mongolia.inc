 
 ############################## 
 # Country definition for MON # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MON
	puppet		 = CYN
   # Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
   oil                    = 200 
   supplies               = 500 
   money                  = 10 
   manpower               = 13
   capital                = 1124 
   peacetime_ic_mod = 0.6
	diplomacy = 
   {
     relation = {  tag = CYN value = 150  } 
     relation = {  tag = RUS value = 150  } 
    } 
   SpyInfo                = {  country = "MON" NumberOfSpies = 3  } 
   nationalprovinces      = {  1124 1123 1125 1121 1122 1120 1119 1238 1239 1240 } 
   ownedprovinces         = {  1124 1123 1125 1121 1122 1120 1119 } 
   controlledprovinces    = {  1124 1123 1125 1121 1122 1120 1119 } 
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 1110 }
  
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 7 
     freedom           = 5 
     free_market       = 3 
     professional_army = 4 
     defense_lobby     = 4 
     interventionism   = 1 
    } 
   headofstate            = {  type = 9 id = 300001  } 
   headofgovernment       = {  type = 9 id = 300002  } 
   foreignminister        = {  type = 9 id = 300003  } 
   armamentminister       = {  type = 9 id = 300004  } 
   ministerofsecurity     = {  type = 9 id = 300005  } 
   ministerofintelligence = {  type = 9 id = 300006  } 
   chiefofstaff           = {  type = 9 id = 300007  } 
   chiefofarmy            = {  type = 9 id = 300008  } 
   chiefofnavy            = {  type = 9 id = 300009  } 
   chiefofair             = {  type = 9 id = 300010  } 
   landunit = 
   {  location = 1124 
     name     = "Armija Mongol Nayramdakh" 
     id       = {  type = 30500 id = 1  } 
     Division = 
     {  id   = {  type = 30500 id = 3  } 
       name = "2. Nayramdakh Kavaleriyskaya Div." 
	   strength     = 10
       type = cavalry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 30500 id = 4  } 
       name = "3. Nayramdakh Opolcheniya Div." 
	   strength     = 10
       type = militia 
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 30500 id = 5  } 
       name = "4. Nayramdakh Opolcheniya Div." 
	   strength     = 10
       type = militia 
	   model    = 3
      } 
    } 
  } 
 
