 
 ############################## 
 # Country definition for AFG # 
 ############################## 
  
country = {
	tag                    = AFG 
	puppet                 = TUR
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes ai_set = yes } } 
	ai = "afghanistan.ai"
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 43 
      
	capital                = 2171 
	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 2 
		political_left    = 3 
		free_market       = 7 
		freedom           = 6 
		professional_army = 4 
		defense_lobby     = 4 
		interventionism   = 1 
	} 
	peacetime_ic_mod = 0.7
	diplomacy = {
		relation = {  tag = U02 value = 50  } 
	} 
	SpyInfo                = {  country = "AFG" NumberOfSpies = 5  } 
	
	nationalprovinces      = {  2168 2173 2172 2171 2169 2170 1529 1537  } 
	ownedprovinces         = {  2173 2171 2169 2170 1537 } 
	controlledprovinces    = {  2173 2171 2169 2170 1537 } 
   
	techapps               = { 4010 2150 2290 1010 1190 1110 }
	
	headofstate            = {  type = 9 id = 155001  } 
	headofgovernment       = {  type = 9 id = 155002  } 
	foreignminister        = {  type = 9 id = 155003  } 
	armamentminister       = {  type = 9 id = 155004  } 
	ministerofsecurity     = {  type = 9 id = 155005  } 
	ministerofintelligence = {  type = 9 id = 155006  } 
	chiefofstaff           = {  type = 9 id = 155007  } 
	chiefofarmy            = {  type = 9 id = 155008  } 
	chiefofnavy            = {  type = 9 id = 155009  } 
	chiefofair             = {  type = 9 id = 155010  } 

	##################### 
	###AFGHANISTAN OOB### 
	##################### 

	# Even though it was actually a brigade, I made Farah cavalry to have 
	# max_strength of 100.
	# This is because Afghani army had several smaller but still independent 
	# cavalry units.
	# I also put max_strength 80 for smaller infantry divisions to differ them 
	# from mixed infantry divisions.
	# Mixed infantry divisions had also cavalry attachments, and thus their 
	# strength was higher than strength of regular infantry divisions.

	landunit = {
		id = { type = 10000 id = 1 }
		location = 2171 # Kabul
		name = "The Center Military District"

		division = {
			id = { type = 10000 id = 2 }
			name = "Royal Household Division"
			strength = 100
			type = infantry
			model = 0
			extra = artillery 
			brigade_model = 2
		}

		division = {
			id = { type = 10000 id = 3 }
			name = "1st Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}

		division = {
			id = { type = 10000 id = 4 }
			name = "2nd Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}

		division = {
			id = { type = 10000 id = 5 }
			name = "4th Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}
	}

	landunit = {
		id = { type = 10000 id = 6 }
		location = 2171 # Khost
		name = "The South Military District"

		division = {
			id = { type = 10000 id = 7 }
			name = "5th Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}

		division = {
			id = { type = 10000 id = 8 }
			name = "6th Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}

		division = {
			id = { type = 10000 id = 9 }
			name = "7th Infantry Division"
			strength = 20
			type = infantry
			model = 0
		}
	}

	landunit = {
		id = { type = 10000 id = 10 }
		location = 2169 # Chakhansur
		name = "Farah Military District"

		division = {
			id = { type = 10000 id = 11 }
			name = "Farah Cavalry"
			strength = 10
			type = cavalry 
			model = 0
		}

	}
} 