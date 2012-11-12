##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
	ai_settings = { flags = { MOB2 = yes MOB3 = yes } }
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 25
  transports             = 0
  escorts                = 0 
  capital                = 1456
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #3
    political_left    = 4
    free_market       = 6 #8
    freedom           = 4 #9
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 1
  }
   nationalprovinces      = { 1456 1452 1457 1455 } 
   ownedprovinces         = { 1456 1452 1457 1455 } 
   controlledprovinces    = { 1456 1452 1457 1455 } 

  techapps               = { 4010 2150 2290 1010 1190 1110 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = U02 value = 100 }
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74003 }
  armamentminister       = { type = 9 id = 74004 }
  ministerofsecurity     = { type = 9 id = 74005 }
  ministerofintelligence = { type = 9 id = 74006 }
  chiefofstaff           = { type = 9 id = 74007 }
  chiefofarmy            = { type = 9 id = 74008 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 92 }
    location = 1456
    name     = "Army of the Glorious Bhutanese Empire"
	 Division = 
     {  id       = {  type = 10000 id = 93  } 
       name     = "Household Division" 
       type     = infantry 
       model    = 1
       strength = 40 
      } 
     Division = 
     {  id       = {  type = 10000 id = 94  } 
       name     = "Royal Division" 
       type     = bergsjaeger 
       model    = 0
       strength = 40 
    } 	
  }
}