#####################
# Country main data #
#####################

country =
{ tag                    = AUS
  #puppet		 = GER
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes ai_set = yes } }
	ai = "austria.ai"
  capital                = 195
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 303
  transports             = 10
  escorts                = 0
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = LIT value = 100 }
    relation = { tag = U00 value = -200 }
    }
   nationalprovinces      = {
		190 191 192 195 194 186 187 193 188
		#germany
		#189 401
		#cze
		200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203
		#hun
		276 277 278 279 280 281 282 283 284 296 295 285 289
		#silesia
		164 165 166 167 168 221
		#slovenia/croatia
		346 349
		#italy
		403 404 405 406 #402
		#rom
		286 287 288 292
		#yug
		336 341 345 344 352 347
	}
   ownedprovinces      = {
		190 191 192 195 194 186 187 193 188
		#cze
		200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203
		#hun
		276 277 278 279 280 281 282 283 284 296 295 285 289
		#silesia
		164 165 166 167 168 221
		#slovenia/croatia
		346 349
		#italy
		403 404 405 406
		#rom
		286 287 288 292
		#yug
		336 341 345 344 352 347
	}
   controlledprovinces      = {
		190 191 192 195 194 186 187 193 188
		#cze
		200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203
		#hun
		276 277 278 279 280 281 282 283 284 296 295 285 289
		#silesia
		164 165 166 167 168 221
		#slovenia/croatia
		346 349
		#italy
		403 404 405 406
		#rom
		286 287 288 292
		#yug
		336 341 345 344 352 347
	}
   claimedprovinces 	  = { 
	394 #belluno
	}

  techapps               = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	
	9040 #Battlefield Dest
	9050 #Dive Bombing

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4170 #Basic CAS

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	
	5320 #Basic Computer
	5470 #Atomic Research Faculty
	5480 #Atomic Research Labs

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	
	1310 #Rear Area Supply
	1340 #Rear Area Repair
	1120 #Basic Mountaineers (1935)

	##Land Doctrines - Grand Battle Plan##
	6030 #Grand Battleplan
	6120 #Trench Warfare
	14000 #Great War Hospital
	
	6560 #defensive focus

	##Naval Doctrines##
	8010 #Decisive Battle
	
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3030 #Basic Destroyer
	3140 #Early Heavy Cruiser
	3260 #Early Battleship
	3270 #Basic Battleship
	3420 #Med Range Sub
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic 	      = 6 #3
    political_left    = 4
    freedom           = 7 #3
    free_market       = 7 #4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23041 }
  headofgovernment       = { type = 9 id = 23153 }
  foreignminister        = { type = 9 id = 23059 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23154 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23104 }
  chiefofarmy            = { type = 9 id = 23155 }
  chiefofnavy            = { type = 9 id = 23126 }
  chiefofair             = { type = 9 id = 23156 }
  #Army
  landunit =
  { id       = { type = 10005 id = 1 }
    location = 279
    name     = "Oberkommando der Österreich"
    division =
    { id     = { type = 10005 id = 2 }
      name   = "Armeegruppe Österreich"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10005 id = 3 }
      name   = "13. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 22 }
      name   = "22. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 45 }
      name   = "45. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 46 }
      name   = "46. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 60
    }
  }
  landunit =
  { id       = { type = 10005 id = 4 }
    location = 336
    name     = "1. Armeekorps"
    division =
    { id     = { type = 10005 id = 5 }
      name   = "1. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 6 }
      name   = "2. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 23 }
      name   = "23. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 7 }
    location = 341
    name     = "2. Armeekorps"
    division =
    { id     = { type = 10005 id = 8 }
      name   = "3. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 9 }
      name   = "4. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 24 }
      name   = "24. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 66 }
      name   = "Armeegruppe Ungarn"
      type   = hq
      model  = 0
	  strength = 75
    }
  }
  landunit =
  { id       = { type = 10005 id = 10 }
    location = 344
    name     = "3. Armeekorps"
    division =
    { id     = { type = 10005 id = 11 }
      name   = "5. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 12 }
      name   = "6. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 25 }
      name   = "25. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 13 }
    location = 405
    name     = "4. Armeekorps"
    division =
    { id     = { type = 10005 id = 14 }
      name   = "7. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 15 }
      name   = "8. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 26 }
      name   = "26. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 16 }
    location = 352
    name     = "5. Armeekorps"
    division =
    { id     = { type = 10005 id = 17 }
      name   = "9. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 18 }
      name   = "10. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 27 }
      name   = "27. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 19 }
    location = 403
    name     = "6. Armeekorps"
    division =
    { id     = { type = 10005 id = 20 }
      name   = "11. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 21 }
      name   = "12. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 28 }
      name   = "28. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 29 }
    location = 190
    name     = "1. Gebirgskorps"
    division =
    { id     = { type = 10005 id = 30 }
      name   = "3. Gebirgsdivision"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 31 }
      name   = "1. Gebirgsdivision"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 32 }
      name   = "2. Gebirgsdivision"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 33 }
    location = 191
    name     = "7. Armeekorps"
    division =
    { id     = { type = 10005 id = 34 }
      name   = "34. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 35 }
      name   = "35. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 36 }
      name   = "36. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 37 }
    location = 207
    name     = "8. Armeekorps"
    division =
    { id     = { type = 10005 id = 38 }
      name   = "38. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 39 }
      name   = "39. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 40 }
      name   = "40. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 41 }
    location = 282
    name     = "1. Kavalleriekorps"
    division =
    { id     = { type = 10005 id = 42 }
      name   = "1. Kavalleriedivision"
      type   = cavalry
      model  = 2
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 43 }
      name   = "2. Kavalleriedivision"
      type   = cavalry
      model  = 2
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 44 }
      name   = "3. Kavalleriedivision"
      type   = cavalry
      model  = 2
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 58 }
    location = 295
    name     = "9. Armeekorps"
    division =
    { id     = { type = 10005 id = 59 }
      name   = "59. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 60 }
      name   = "60. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 61 }
      name   = "61. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10005 id = 62 }
    location = 347
    name     = "10. Armeekorps"
    division =
    { id     = { type = 10005 id = 63 }
      name   = "63. Infantriedivision"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10005 id = 64 }
      name   = "64. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10005 id = 65 }
      name   = "65. Infantriedivision"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  #Air Force
  airunit =
  { location = 195
    base     = 195
    id       = { type = 10005 id = 47 }
    name     = "Luftflotte I"
    division =
    { id     = { type = 10005 id = 48 }
      name   = "Fliegergruppe 1"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 49 }
      name   = "Fliegergruppe 2"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 195
    base     = 195
    id       = { type = 10005 id = 53 }
    name     = "Luftflotte II"
    division =
    { id     = { type = 10005 id = 54 }
      name   = "Taktische Fliegergruppe 1"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 55 }
      name   = "Taktische Fliegergruppe 2"
      type   = tactical_bomber
      model  = 1
    }
  }
  airunit =
  { location = 284
    base     = 284
    id       = { type = 10005 id = 50 }
    name     = "Luftflotte III"
    division =
    { id     = { type = 10005 id = 52 }
      name   = "Sturzkampfgeschwader 1"
      type   = cas
      model  = 0
    }
    division =
    { id     = { type = 10005 id = 51 }
      name   = "Sturzkampfgeschwader 2"
      type   = cas
      model  = 0
    }
    division =
    { id     = { type = 10005 id = 56 }
      name   = "Sturzkampfgeschwader 3"
      type   = cas
      model  = 0
    }
    division =
    { id     = { type = 10005 id = 57 }
      name   = "Sturzkampfgeschwader 4"
      type   = cas
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 97 }
    name     = "Königliche Flotte von Österreich"
    location = 406
    base     = 406
    division =
    { id     = { type = 10500 id = 98 }
      name   = "Prinz Eugen"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 99 }
      name   = "Erzherzog Karl"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 100 }
      name   = "Wien"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 101 }
      name   = "Budapest"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 102 }
      name   = "1. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 103 }
      name   = "2. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
  }
}
