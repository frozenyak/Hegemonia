#####################
# Country main data #
#####################

country =
{ tag                    = BRU
  puppet                 = ENG
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 1
  transports             = 10
  escorts                = 0 
  capital                = 1625
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 6
    free_market       = 6
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
	nationalprovinces      = { 
		1625
	}
	ownedprovinces      = { 
		1625
	}
	controlledprovinces      = { 
		1625
	}
  techapps               = { 4010 2150 2290 1010 1190 }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = ENG value = 200 }
    relation = { tag = U08 value = 100 }
  }
  headofstate            = { type = 9 id = 567001 }
  headofgovernment       = { type = 9 id = 567002 }
  foreignminister        = { type = 9 id = 567003 }
  armamentminister       = { type = 9 id = 567004 }
  ministerofsecurity     = { type = 9 id = 567005 }
  ministerofintelligence = { type = 9 id = 567006 }
  chiefofstaff           = { type = 9 id = 567007 }
  chiefofarmy            = { type = 9 id = 567008 }
  chiefofnavy            = { type = 9 id = 567009 }
  chiefofair             = { type = 9 id = 567010 }
}
