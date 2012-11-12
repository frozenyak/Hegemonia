#####################
# Country main data #
#####################

country =
{ tag                    = SCH
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital                = 392
  #industrial_modifier	 = 0.75
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 25
  transports             = 0
  escorts                = 0
  SpyInfo                = { country = "SCH" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8 #10
    political_left    = 5
    freedom           = 8 #7
    free_market       = 6 #8
    professional_army = 5
    defense_lobby     = 7 #8
    interventionism   = 4
  }
   nationalprovinces      = {  392 391 389 390  }
   ownedprovinces         = {  392 391 389 390  }
   controlledprovinces    = {  392 391 389 390  }
  techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	4120 #Interwar Bomber
	4130 #Early Bomber

	##Armor##
	2010 #Great War Tank
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	6120 #Trench Warfare
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = AUS value = 50 }
    relation = { tag = GER value = 100 }
    relation = { tag = LIT value = 50 }
    relation = { tag = U14 value = 100 }
    relation = { tag = SCA value = 50 }
    relation = { tag = SPA value = 75 }
  }
  headofstate            = { type = 9 id = 17033 }
  headofgovernment       = { type = 9 id = 17002 }
  foreignminister        = { type = 9 id = 17053 }
  armamentminister       = { type = 9 id = 17066 }
  ministerofsecurity     = { type = 9 id = 17087 }
  ministerofintelligence = { type = 9 id = 17095 }
  chiefofstaff           = { type = 9 id = 17100 }
  chiefofarmy            = { type = 9 id = 17103 }
  chiefofnavy            = { type = 9 id = 17009 }
  chiefofair             = { type = 9 id = 17010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 586 }
    location = 391
    name     = "3rd Army Korps"
    division =
    { id     = { type = 10000 id = 601 }
      name   = "6. Felddivision"
      type   = infantry
      model  = 0
	  strength = 10
    }
    division =
    { id     = { type = 10000 id = 597 }
      name   = "3. Felddivision"
      type   = infantry
      model  = 0
	  strength = 20
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 589 }
      name   = "2. Alpenjägerdivision"
      type   = bergsjaeger
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 594 }
    location = 390
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 595 }
      name   = "1. Felddivision"
      type   = infantry
      model  = 0
	  strength = 20
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 596 }
      name   = "2. Felddivision"
      type   = infantry
      model  = 0
	  strength = 10
    }
    division =
    { id     = { type = 10000 id = 590 }
      name   = "2. Alpenjägerdivision"
      type   = bergsjaeger
      model  = 0
	  strength = 20
      extra  = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 598 }
    location = 392
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 587 }
      name   = "1. Feldarmee"
      type   = hq
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 599 }
      name   = "4. Felddivision"
      type   = infantry
      model  = 0
	  strength = 20
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 600 }
      name   = "5. Felddivision"
      type   = infantry
      model  = 0
	  strength = 10
    }
    division =
    { id     = { type = 10000 id = 588 }
      name   = "1. Alpenjägerdivision"
      type   = bergsjaeger
      model  = 0
	  strength = 20
      extra  = artillery
      brigade_model = 2
    }
  }
  #Air Force
  airunit =
  { location = 392
    base     = 392
    id       = { type = 10500 id = 625 }
    name     = "Swiss Air Force"
    division =
    { id     = { type = 10500 id = 626 }
      name   = "Jagdgeschwader 1"
      type   = interceptor
      model  = 1
      strength = 10
    }
    division =
    { id     = { type = 10500 id = 627 }
      name   = "Jagdgeschwader 2"
      type   = interceptor
      model  = 1
      strength = 10
    }
  }
}
