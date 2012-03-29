#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = SCA
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 7
  transports             = 10
  escorts                = 0 
  capital                = 950
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 6
    professional_army = 1
    defense_lobby     = 7
    interventionism   = 1
  }
	nationalprovinces      = { 
		948 949 950 951
		#niger
		#942 945
		#gold coast
		955
	}
	ownedprovinces      = { 
		948 949 950 951
		#niger
		#942 945
		#gold coast
		955
	}
	controlledprovinces      = { 
		948 949 950 951
		#niger
		#942 945
		#gold coast
		955
	}
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
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

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = SCA value = 200 }
    relation = { tag = CON value = 100 }
    relation = { tag = ANG value = 100 }
  }
  headofstate            = { type = 9 id = 69034 }
  headofgovernment       = { type = 9 id = 69037 }
  foreignminister        = { type = 9 id = 69041 }
  armamentminister       = { type = 9 id = 69048 }
  ministerofsecurity     = { type = 9 id = 69058 }
  ministerofintelligence = { type = 9 id = 69065 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69072 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  landunit =
  { id       = { type = 10000 id = 213 }
    location = 950
    name     = "Frilands Arme"
    division =
    { id     = { type = 10000 id = 214 }
      name   = "Frilands Hemvärnskretsar"
      type   = militia
      model  = 0     
    } 
  }  
}
