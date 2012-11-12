#####################
# Country main data #
#####################

country =
{ tag                    = ANG
  puppet		 = LIT
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes } }
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 2
  transports             = 10
  escorts                = 0
  capital                = 892
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = LIT value = 200 }
    relation = { tag = CON value = 100 }
    relation = { tag = LIB value = 100 }
  }
	nationalprovinces      = {
		887 888 891 892
		#nambia
		885 886 882
		#rhodesia
		860
	}
	ownedprovinces      = {
		887 888 891 892
		#nambia
		885 886
		#rhodesia
		860
	}
	controlledprovinces      = {
		887 888 891 892
		#nambia
		885 886
		#rhodesia
		860
	}
	claimedprovinces = { 882 }
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
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3 #5
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 568034 }
  headofgovernment       = { type = 9 id = 568002 }
  foreignminister        = { type = 9 id = 568003 }
  armamentminister       = { type = 9 id = 568004 }
  ministerofsecurity     = { type = 9 id = 568005 }
  ministerofintelligence = { type = 9 id = 568006 }
  chiefofstaff           = { type = 9 id = 568007 }
  chiefofarmy            = { type = 9 id = 568008 }
  chiefofnavy            = { type = 9 id = 568009 }
  chiefofair             = { type = 9 id = 568010 }
  landunit =
  { id       = { type = 10000 id = 46 }
    location = 892
    name     = "I Korpusas Angola"
    division =
    { id     = { type = 10000 id = 47 }
      name   = "I Karo Policija Divizija"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 48 }
    location = 860
    name     = "II Korpusas Angola"
    division =
    { id     = { type = 10000 id = 49 }
      name   = "II Karo Policija Divizija"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
}
