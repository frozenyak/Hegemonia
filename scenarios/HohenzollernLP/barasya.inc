#####################
# Country main data #
#####################

country =
{ tag                    = TEX
  puppet		 = MEX
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 18
  transports             = 10
  escorts                = 0 
  capital                = 1931
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 4
    defense_lobby     = 2
    interventionism   = 3
  }
	nationalprovinces      = { 1930 1932 1933 1934 1931 1929 1937 1938 }
	ownedprovinces         = { 1930 1932 1934 1931 1929 1937 }
	controlledprovinces    = { 1930 1932 1934 1931 1929 1937 }
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
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
  diplomacy =
  { relation = { tag = USA value = -50 }
    relation = { tag = CAN value = 50 }
    relation = { tag = PAN value = 100 }
    relation = { tag = MEX value = 200 }
  }
  headofstate            = { type = 9 id = 780001 }
  headofgovernment       = { type = 9 id = 780002 }
  foreignminister        = { type = 9 id = 780003 }
  armamentminister       = { type = 9 id = 780004 }
  ministerofsecurity     = { type = 9 id = 780005 }
  ministerofintelligence = { type = 9 id = 780006 }
  chiefofstaff           = { type = 9 id = 780007 }
  chiefofarmy            = { type = 9 id = 780008 }
  chiefofnavy            = { type = 9 id = 780009 }
  chiefofair             = { type = 9 id = 780010 }
}
