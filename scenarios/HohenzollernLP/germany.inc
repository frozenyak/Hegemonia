#####################
# Country main data #
#####################
country =
{ tag                    = GER
  ai = "germany.ai"
  capital                = 138
  dissent		 = 10 #20
#Great Power
  energy                 = 10000
  metal                  = 5000
  rare_materials         = 2500
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 91
  transports             = 300
  escorts                = 40
  SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  research_mod = 0.75
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = UAU value = 50 } #guaranteed = { day = 5 month = may year = 1934 }
    relation = { tag = U14 value = 200 access = yes }
    relation = { tag = AUS value = 100 access = yes }
    relation = { tag = U08 value = 200 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CON value = 200 }
    relation = { tag = EGY value = 100 guaranteed = { day = 5 month = january year = 1933 } }
    relation = { tag = FIN value = 25 guaranteed = { day = 18 month = july year = 1934 } }
    relation = { tag = VIC value = -200 }
    relation = { tag = LIT value = 150 access = yes }
    relation = { tag = SCA value = 100 }
    relation = { tag = MEX value = 50 }
    relation = { tag = SCH value = 100 guaranteed = { day = 18 month = november year = 1935 } }
    relation = { tag = RUS value = -200 }
    relation = { tag = U03 value = 50 guaranteed = { day = 5 month = may year = 1934 }  }
    relation = { tag = RSI value = -200 }
  }
	nationalprovinces      = {
		126  145  127  131  142  147  141  137  174  171  176  146  148  154
		151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138
		134 132 178 175 179   184  133
		182 155 161 185 143
		144 160 180 136 139 135 129 128 130
		149
		140
		# Austria
		189
		402 #401
		#alsace
		105 107 104 #106
		#belgium/lux
		110 109
		#poznan
		181 224 226 #225 222
		#klaipeda/memel
		261
		#
		150 216
		#baleares
		#475
	}
	ownedprovinces         = {
		126  145  127  131  142  147  141  137  174  171  176  146  148  154  151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138
		134 132 178 175 179   184 133
		182 155 161 185 143
		144 160 180 136 139 135 129 128 130 149 140
		# Austria
		189
		402 # Bolzano
		#alsace
		105 107 104 106
		#belgium/lux
		110 #109
		#poznan
		181 224 226 #225 222
		#klaipeda/memel
		261
		#ceylon
		1509 1510 1511
		#china
		1371 #1365
		#baleares
		475
		#madagascar
		1001 1002 1003 999 1000
		#atlantic islands
		896
		#singapore
		1432
	}
	controlledprovinces    = {
		126  145  127  131  142  147  141  137  174  171  176  146  148  154  151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138
		134 132 178 175 179   184 133
		182 155 161 185  143
		144 160 180 136 139 135 129 128 130 149 140
		# Austria
		189
		402 # Bolzano
		#alsace
		105 107 104 106
		#belgium/lux
		110 #109
		#poznan
		181 224 226 #225 222
		#klaipeda/memel
		261
		#ceylon
		1509 1510 1511
		#china
		1371 #1365
		#baleares
		475
		#madagascar
		1001 1002 1003 999 1000
		#atlantic islands
		896
		#singapore
		1432
	}
	claimedprovinces = {
		#1605 1602 1668 1667 1727 1726 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 # Pacific
		#1731 #Apia
		#ceylon
		1509 1510 1511
		#china
		1371 #1365
		#baleares
		475
		#madagascar
		1001 1002 1003 999 1000
		#atlantic islands
		896
		#singapore
		1432
		#alsace
		106 #104
		#poland
		#225 222 #224 
	}
   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9090 #Operational Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	#4190 #Basic Naval Bomber
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	#2030 #Early Tank
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	#2330 #Basic Artillery
	#2400 #Early Anti-Tank
	#2410 #Basic Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	#2470 #Basic Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	#5060 #Improved Machine Tools
	#5070 #Advanced Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	#5100 #Advanced Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	#5320 #Basic Computer
	#5350 #Basic Encryption
	#5410 #Basic Radar
	5470 #Atomic Research Faculty
	
	5480 #Atomic Research Labs
	7550 #Rocket Testing

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1150 #Early Marines
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply
	1340 #Rear Area Repair
	
	1230 #Basic Motorized Division

	##Land Doctrines##
	6030 #Grand Battleplan
	6120 #Trench Warfare
	#6110 #Mass Assault
	14000 #Great War Hospital
	
	6560 #Defensive focus

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

	8120 # Battlefleet Concentration Doctrine
	8310 # Floating Fortress Doctrine
	
	8100 # Subsidiary Carrier Role Doctrine
	82300 #Basic Amphib Warfare

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3030 #Basic Destroyer
	3040 #Improved Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3100 #Improved Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3150 #Basic Heavy Cruiser
	3160 #Improved Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3270 #Basic Battleship
	3280 #Improved Battleship
	3320 #GW Carrier
	3330 #Early Carrier
	3340 #Basic Carrier
	#3350 #Improved Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	12100 12110 #CVL
	4900 4910 #CAG
	3810 3820 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic 	      = 3
    political_left    = 3 #4
    freedom           = 4 #5
    free_market       = 5 #6
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 }
  headofgovernment       = { type = 9 id = 2 }
  foreignminister        = { type = 9 id = 61 }
  armamentminister       = { type = 9 id = 77 }
  ministerofsecurity     = { type = 9 id = 110 }
  ministerofintelligence = { type = 9 id = 141 }
  chiefofstaff           = { type = 9 id = 155 }
  chiefofarmy            = { type = 9 id = 179 }
  chiefofnavy            = { type = 9 id = 190 }
  chiefofair             = { type = 9 id = 205 }
  #Army
  landunit =
  { id       = { type = 10001 id = 238 }
    location = 147
    name     = "1. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 239 }
      name   = "1. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 240 }
      name   = "2. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 241 }
      name   = "3. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 242 }
    location = 181
    name     = "2. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 243 }
      name   = "4. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 244 }
      name   = "5. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 245 }
      name   = "6. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 246 }
    location = 126
    name     = "3. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 247 }
      name   = "7. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 248 }
      name   = "8. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 249 }
      name   = "9. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 250 }
    location = 152
    name     = "4. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 251 }
      name   = "10. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 252 }
      name   = "11. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 253 }
      name   = "12. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 254 }
    location = 131
    name     = "5. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 255 }
      name   = "13. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 256 }
      name   = "14. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 257 }
      name   = "15. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 258 }
    location = 104
    name     = "6. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 259 }
      name   = "16. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 260 }
      name   = "17. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 261 }
      name   = "18. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 262 }
    location = 106
    name     = "7. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 263 }
      name   = "19. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 264 }
      name   = "20. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 265 }
      name   = "21. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 266 }
    location = 105
    name     = "8. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 267 }
      name   = "22. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 268 }
      name   = "23. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 269 }
      name   = "24. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 274 }
    location = 402
    name     = "10. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 275 }
      name   = "Oberkommando Süd"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10001 id = 276 }
      name   = "28. Infanterie-Division"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 277 }
      name   = "29. Infanterie-Division"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 278 }
      name   = "30. Infanterie-Division"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 279 }
      name   = "31. Infanterie-Division"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 280 }
    location = 145
    name     = "11. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 281 }
      name   = "Oberkommando Nord"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10001 id = 282 }
      name   = "32. Infanterie-Division"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 283 }
      name   = "33. Infanterie-Division"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 284 }
      name   = "34. Infanterie-Division"
      type   = infantry
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 285 }
      name   = "35. Infanterie-Division"
      type   = infantry
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 286 }
    location = 138
    name     = "1. Kavalleriekorps"
    division =
    { id     = { type = 10001 id = 287 }
      name   = "12. Kavallerie-Division"
      type   = cavalry
	  model  = 2
	  strength = 75
    }
    division =
    { id     = { type = 10001 id = 288 }
      name   = "1. Kavallerie-Division"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 205 }
      name   = "105. Infantrie-Division (mot)"
      type   = motorized
      model  = 0
	  extra = light_armor_brigade
	  brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 289 }
    location = 146
    name     = "2. Kavalleriekorps"
    division =
    { id     = { type = 10001 id = 290 }
      name   = "22. Infanterie-Division (mot)"
      type   = motorized
      model  = 0
	  strength = 75
	  extra = light_armor_brigade
	  brigade_model = 1
    }
    division =
    { id     = { type = 10001 id = 291 }
      name   = "2. Kavallerie-Division"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 10001 id = 206 }
      name   = "3. Kavallerie-Division"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 10001 id = 292 }
    location = 1432
    name     = "Singapore Garrison"
    division =
    { id     = { type = 10001 id = 293 }
      name   = "1. Sicherungs-Division"
      type   = garrison
      model  = 0
	  strength = 35
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 10001 id = 294 }
    location = 1511
    name     = "Ceylon Command"
    division =
    { id     = { type = 10001 id = 295 }
      name   = "2. Sicherungs-Division"
      type   = militia
	  strength = 80
    }
  }
  landunit =
  { id       = { type = 10001 id = 310 }
    location = 1371
    name     = "Hong Kong Garrison"
    division =
    { id     = { type = 10500 id = 311 }
      name   = "3. Sicherungs-Division"
      type   = garrison
      strength = 75
      locked   = yes 
    }
  }
  landunit =
  { id       = { type = 10001 id = 181 }
    location = 110
    name     = "18. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 182 }
      name   = "82. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 183 }
      name   = "83. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 184 }
      name   = "84. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 185 }
    location = 129
    name     = "19. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 186 }
      name   = "86. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 187 }
      name   = "87. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 188 }
      name   = "88. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 189 }
    location = 141
    name     = "20. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 190 }
      name   = "90. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 191 }
      name   = "91. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 192 }
      name   = "92. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 193 }
    location = 127
    name     = "21. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 194 }
      name   = "94. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 195 }
      name   = "95. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 196 }
      name   = "96. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 197 }
    location = 179
    name     = "22. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 198 }
      name   = "98. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 199 }
      name   = "99. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 200 }
      name   = "100. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 201 }
    location = 163
    name     = "23. Kaiserliche Armee"
    division =
    { id     = { type = 10001 id = 202 }
      name   = "102. Infanterie-Division"
      type = infantry
	  model = 1
      extra  = artillery
      brigade_model = 2
	  strength = 60
    }
    division =
    { id     = { type = 10001 id = 203 }
      name   = "103. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 204 }
      name   = "104. Infanterie-Division"
      type = infantry
	  model = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 312 }
    location = 475
    name     = "Baleares Garrison"
    division =
    { id     = { type = 10001 id = 313 }
      name   = "6. Sicherungs-Division"
      type   = garrison
      model  = 0
	  strength = 35
	  locked = yes
    }
  }
  #Air Force
  airunit =
  { location = 138
    base     = 138
    id       = { type = 10500 id = 211 }
    name     = "I .Abfangjägergeschwader"
    division =
    { id     = { type = 10500 id = 212 }
      name   = "Jagdgeschwader 1"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 213 }
      name   = "Jagdgeschwader 2"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 214 }
      name   = "Jagdgeschwader 3"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 215 }
      name   = "Jagdgeschwader 4"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 179
    base     = 179
    id       = { type = 10500 id = 216 }
    name     = "I. Bombergeschwader"
    division =
    { id     = { type = 10500 id = 217 }
      name   = "Kampfgeschwader 1"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 218 }
      name   = "Kampfgeschwader 2"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 219 }
      name   = "Kampfgeschwader 3"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 220 }
      name   = "Kampfgeschwader 4"
      type   = tactical_bomber
      model  = 1
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 10500 id = 221 }
    name     = "II. Bomber Geschwader"
    division =
    { id     = { type = 10500 id = 222 }
      name   = "Kampfgeschwader 5"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 223 }
      name   = "Kampfgeschwader 6"
      type   = tactical_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 224 }
    name     = "I. Unterseebootflotte"
    location = 181
    base     = 181
    division =
    { id     = { type = 10500 id = 225 }
      name   = "1. Unterseebootsflottille"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 226 }
      name   = "2. Unterseebootsflottille"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 227 }
      name   = "3. Unterseebootsflottille"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 228 }
      name   = "4. Unterseebootsflottille"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 229 }
      name   = "5. Unterseebootsflottille"
      type   = submarine
      model  = 2
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 230 }
    name     = "Transport Fleet"
    location = 152
    base     = 152
    division =
    { id     = { type = 10500 id = 231 }
      name   = "1. Truppentransporterflottille"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 232 }
      name   = "2. Truppentransporterflottille"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 233 }
      name   = "3. Truppentransporterflottille"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 234 }
      name   = "1. Zerstörergeschwader"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 235 }
      name   = "2. Zerstörergeschwader"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 236 }
      name   = "3. Zerstörergeschwader"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 237 }
    name     = "Far East Fleet"
    location = 1432
    base     = 1432
    division =
    { id     = { type = 10500 id = 238 }
      name   = "KMS Tirpitz"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 239 }
      name   = "KMS Prinz Waldemar"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 240 }
      name   = "6. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 241 }
      name   = "7. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 242 }
      name   = "8. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 243 }
      name   = "9. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 244 }
      name   = "10. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 245 }
      name   = "11. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 246 }
      name   = "12. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 247 }
      name   = "13. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 248 }
      name   = "KMS Leipzig"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 249 }
      name   = "KMS Nürnberg"
      type   = light_cruiser
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 250 }
    name     = "Indian Ocean Fleet"
    location = 1511
    base     = 1511
    division =
    { id     = { type = 10500 id = 251 }
      name   = "KMS Großdeutschland"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 252 }
      name   = "KMS Ludendorff"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 253 }
      name   = "KMS Blücher"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 254 }
      name   = "KMS Frankfurt"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 255 }
      name   = "KMS Kolberg"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 256 }
      name   = "KMS Heilbronn"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 257 }
      name   = "KMS Ingolstadt"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 258 }
      name   = "KMS Düsseldorf"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 259 }
      name   = "KMS Duisberg"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 260 }
      name   = "KMS Bochum"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 261 }
      name   = "KMS Wuppertal"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 262 }
      name   = "KMS Wiesbaden"
      type   = light_cruiser
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 263 }
    name     = "Atlantic Fleet"
    location = 147
    base     = 147
    division =
    { id     = { type = 10500 id = 264 }
      name   = "KMS Graf Zeppelin"
      type   = carrier
      model  = 2
      extra  = cag
      brigade_model = 1
    }
    division =
    { id     = { type = 10500 id = 265 }
      name   = "KMS Bismarck"
      type   = battleship
      model  = 3
    }
    division =
    { id     = { type = 10500 id = 266 }
      name   = "KMS Waldemar der Große"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 267 }
      name   = "KMS Stuttgart"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 268 }
      name   = "KMS Oberschlesien"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 269 }
      name   = "KMS Wilhelm Filchner"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 270 }
      name   = "KMS Frithjof"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 271 }
      name   = "KMS Friedrich Carl"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 272 }
      name   = "KMS Stettin"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 273 }
      name   = "KMS Dresden"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 274 }
      name   = "KMS Mainz"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 275 }
      name   = "KMS Dortmund"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 276 }
      name   = "KMS Magdeburg"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 277 }
      name   = "KMS Bamberg"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 278 }
      name   = "14. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 279 }
      name   = "15. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 280 }
      name   = "16. Zerstörergeschwader"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 306 }
      name   = "17. Zerstörergeschwader"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 281 }
    name     = "Baltic Fleet"
    location = 153
    base     = 153
    division =
    { id     = { type = 10500 id = 282 }
      name   = "KMS Seydlitz"
      type   = carrier
      model  = 0
      extra  = cag
      brigade_model = 0
    }
    division =
    { id     = { type = 10500 id = 283 }
      name   = "KMS Hindenburg"
      type   = battleship
      model  = 0
    }
     division =
    { id     = { type = 10500 id = 284 }
      name   = "KMS Moltke"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 285 }
      name   = "KMS Bayern"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 286 }
      name   = "KMS Schwaben"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 287 }
      name   = "KMS Deutschland"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 288 }
      name   = "KMS Prinz Frederick"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 289 }
      name   = "KMS Lützow"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 290 }
      name   = "KMS Admiral Scheer"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 291 }
      name   = "KMS Admiral Graf Spee"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 292 }
      name   = "KMS Admiral Pohl"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 293 }
      name   = "KMS Kleist"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 294 }
      name   = "KMS Bethmann-Hollweg"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 295 }
      name   = "KMS Stosch"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 296 }
      name   = "KMS Stein"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 297 }
      name   = "KMS Steuben"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 298 }
      name   = "KMS Mackensen"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 299 }
      name   = "KMS Großer Kurfürst"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 300 }
      name   = "KMS Friedrich Carl"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 301 }
      name   = "KMS Wernher von Braun"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 302 }
      name   = "KMS Friedrich Carl"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 303 }
      name   = "KMS Emden"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 304 }
      name   = "4. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 305 }
      name   = "5. Zerstörergeschwader"
      type   = destroyer
      model  = 0
    }
  }
}
