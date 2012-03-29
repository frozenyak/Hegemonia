#####################
# Country main data #
#####################

country =
{ tag                    = U03
  puppet		 = SCA
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 1
  transports             = 10
  escorts                = 0 
  capital                = 2156
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 7
    free_market       = 7
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 3
  }
  diplomacy =
  { relation = { tag = GER value = 50 }
    relation = { tag = LIT value = 50 }
    relation = { tag = FIN value = 100 }
  }
  nationalprovinces      = { 2156 }
  ownedprovinces         = { 2156 }
  controlledprovinces    = { 2156 }
  techapps = {
	##Air Doctrines##
	9020 #Flying Circus
	9030 #Force Substitution
	
	##Aircraft##
	4010 #Interwar Fighter
	4120 #Interwar Bomber

	##Armor##
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	
	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry

	##Naval Doctrines##
	8010 #Decisive Battle

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3400 #Dive Boat
	
	3810 #Troopship
  }
  headofstate            = { type = 9 id = 66037 }
  headofgovernment       = { type = 9 id = 66039 }
  foreignminister        = { type = 9 id = 66045 }
  armamentminister       = { type = 9 id = 66054 }
  ministerofsecurity     = { type = 9 id = 66065 }
  ministerofintelligence = { type = 9 id = 66073 }
  chiefofstaff           = { type = 9 id = 66083 }
  chiefofarmy            = { type = 9 id = 66087 }
  chiefofnavy            = { type = 9 id = 66100 }
  chiefofair             = { type = 9 id = 66109 }
}
