 ##############################
 # Country definition for NEP #
 ##############################

 country =
 {  tag                    = NEP
	#puppet                 = ENG
	# Resource Reserves
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 200
	supplies               = 200
	money                  = 10
	capital                = 1457
	manpower               = 1
   policy =
   {  date              = {  year = 0 month = january day = 0  }
     democratic        = 4
     political_left    = 3
     freedom           = 6
     free_market       = 5
     professional_army = 2
     defense_lobby     = 2
     interventionism   = 2
    }
   nationalprovinces      = {  1457  }
   ownedprovinces         = {  1457  }
   controlledprovinces    = {  1457  }
   
   # GW fighter
   techapps               = {
	1010 # GW infantry
	1310 # Rear Area Supply Dumps
	1110 # Basic Mountain (Ghurkas)
	1190 # GW Cavalry
	2150 # Basic Armoured Car
	2290 # GW light artillery
	4010 # GW fighter
	6010 # Firepower
  }
   diplomacy =
   { relation = {  tag = BHU value = 200  }
     relation = {  tag = U02 value = 200  }
     relation = {  tag = TIB value = 200  }
     relation = {  tag = CMB value = 150  }
     relation = {  tag = CHI value = 100  }
     relation = {  tag = CYN value = 100  }
    }
	SpyInfo = {  country = "NEP" NumberOfSpies = 2  }

	headofstate = { type = 9 id = 75001 }
	headofgovernment = { type = 9 id = 75002 }
	foreignminister = { type = 9 id = 75015 }
	armamentminister = { type = 9 id = 75024 }
	ministerofsecurity = { type = 9 id = 75033 }
	ministerofintelligence = { type = 9 id = 75039 }
	chiefofstaff = { type = 9 id = 75007 }
	chiefofarmy = { type = 9 id = 75008 }
	chiefofnavy = { type = 9 id = 75054 }
	chiefofair = { type = 9 id = 75055 }

   landunit =
   {  location = 1457
     name     = "Royal Nepalese Army"
     id       = {  type = 31500 id = 1  }
     Division =
     {  id   = {  type = 31500 id = 2  }
       name = "Royal Nepalese Lifeguard Div."
	   strength     = 50
       type = infantry
	   model    = 1
      }
     Division =
     {  id   = {  type = 31500 id = 3  }
       name = "Royal Household Division"
	   strength     = 50
       type = infantry
	   model    = 1
      }
    }
   }

