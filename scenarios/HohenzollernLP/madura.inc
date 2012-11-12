#####################
# Country main data #
#####################

country =
{ tag                    = U17
  puppet                 = U02
	ai_settings = { flags = { MOB2 = yes reinf = yes } }
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 38
  transports             = 10
  escorts                = 0 
  capital                = 1500
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 6
    free_market       = 6
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 3
  }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = U02 value = 200 }
    relation = { tag = U08 value = 100 }
    relation = { tag = GER value = 100 }
  }
  headofstate            = { type = 9 id = 900043 }
  headofgovernment       = { type = 9 id = 900003 }
  foreignminister        = { type = 9 id = 900004 }
  armamentminister       = { type = 9 id = 900005 }
  ministerofsecurity     = { type = 9 id = 900006 }
  ministerofintelligence = { type = 9 id = 900007 }
  chiefofstaff           = { type = 9 id = 900008 }
  chiefofarmy            = { type = 9 id = 900009 }
  chiefofnavy            = { type = 9 id = 900010 }
  chiefofair             = { type = 9 id = 900011 }
  
  techapps               = { 4010 2150 2290 1010 1190 }
  
	nationalprovinces      = { 
		1500 1499 1504 1506 1505 1494
		#1509
	}
	ownedprovinces      = { 
		1500 1499 1504 1506 1505 1494
	}
	controlledprovinces      = { 
		1500 1499 1504 1506 1505 1494
	}
}
