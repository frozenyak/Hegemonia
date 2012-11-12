#####################
# Country main data #
#####################

country =
{ tag                    = U18
  puppet                 = U02
	ai_settings = { flags = { MOB2 = yes reinf = yes } }
  #
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 118
  transports             = 10
  escorts                = 0 
  capital                = 1447
  SpyInfo                = { country = "U18" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 6
    free_market       = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 3
  }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = U02 value = 200 }
    relation = { tag = U08 value = 100 }
  }
  headofstate            = { type = 9 id = 905029 }
  headofgovernment       = { type = 9 id = 905003 }
  foreignminister        = { type = 9 id = 905008 }
  armamentminister       = { type = 9 id = 905010 }
  ministerofsecurity     = { type = 9 id = 905015 }
  ministerofintelligence = { type = 9 id = 905020 }
  chiefofstaff           = { type = 9 id = 905023 }
  chiefofarmy            = { type = 9 id = 905026 }
  chiefofnavy            = { type = 9 id = 905027 }
  chiefofair             = { type = 9 id = 905028 }
  
  techapps               = { 4010 2150 2290 1010 1190 }
  
	nationalprovinces      = { 
		1447 1444 1445 1448 1449 1446 1439 1450
		1440 1441 1443 1442
	}
	ownedprovinces      = { 
		1447 1444 1445 1449 1439 1450
		1440 1443
	}
	controlledprovinces      = { 
		1447 1444 1445 1449 1439 1450
		1440 1443
	}
}
