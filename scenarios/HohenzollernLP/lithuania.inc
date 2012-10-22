#####################
# Country main data #
#####################

country =
{ tag                    = LIT
  ai = "lithuania.ai"
  capital                = 599
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 395
  transports             = 40
  escorts                = 0
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = ANG value = 200 }
    relation = { tag = FIN value = 25 guaranteed = { day = 24 month = september year = 1934 } }
    relation = { tag = U03 value = 50 }
    relation = { tag = GEO value = 100 guaranteed = { day = 24 month = september year = 1934 } }
    relation = { tag = SCA value = 50 }
  }
	nationalprovinces	= {  
		259 262 263 260 
		#Poland
		235 233 223 234 230 232 243 237 236 241 242 244 247 228 254 245 238 229 252 255 257 227 251 231 240 248 258 250 246 239 249 256 253 614 618
		#185 222 224 225
		#latvia
		268 269 267 264 266 265
		#estonia
		274 270 275 271 272 273
		#ukraine
		617 608 613 610 612 611 606 605 
		637 640 641 
		619 620 626 622 616 635 
		627 628 609 
		629 636 630 623 624 607 
		638 639 631 632 615 625
		633 634
		#bylorussia
		599 594 595 591 600 596 
		597 601 598 590 592 593
		#krasnodar
		691 692 693 694 695
		#deutsch-krone
		#161
		#rostov
		644
		#novgorod
		550 552 
		#pskov
		566 564 565 573
		#smolensk
		586 587 589 575
		#romania
		300 621 #302
		#poznan
		225 222
	} 
   ownedprovinces	= {  
		259 262 263 260 
		#Poland
		235 233 223  234 230 232  243 237 236 241 242 244 247 228 254 245 238 229 252 255  257 227 251 231 240 248 258 250 246 239 249 256 253    614 618
		#latvia
		268 269 267 264 266 265
		#estonia
		274 270 275 271 272 273
		#ukraine
		617 608 613 610 612 611 606 605 
		637 640 641  
		619 620 626 622 616 635 
		627 628 609 
		629 636 630 623 624 607 
		638 639 631 632 615 625
		633 634
		#bylorussia
		599 594 595 591 600 596 
		597 601 598 590 592 593
		#krasnodar
		691 692 693 694 695
		#rostov
		644
		#novgorod
		550 552 
		#pskov
		566 564 565 573
		#smolensk
		586 587 589 575
		#romania
		300 621 #302
		#poznan
		225 222
	} 
   controlledprovinces	= {  
		259 262 263 260 
		#Poland
		235 233 223  234 230 232  243 237 236 241 242 244 247 228 254 245 238 229 252 255  257 227 251 231 240 248 258 250 246 239 249 256 253    614 618
		#latvia
		268 269 267 264 266 265
		#estonia
		274 270 275 271 272 273
		#ukraine
		617 608 613 610 612 611 606 605 
		637 640 641  
		619 620 626 622 616 635 
		627 628 609 
		629 636 630 623 624 607 
		638 639 631 632 615 625   
		633 634
		#bylorussia
		599 594 595 591 600 596 
		597 601 598 590 592 593
		#krasnodar
		691 692 693 694 695
		#rostov
		644
		#novgorod
		550 552 
		#pskov
		566 564 565 573
		#smolensk
		586 587 589 575
		#romania
		300 621 #302
		#poznan
		225 222
	} 
	claimedprovinces = {
		#poland
		#185 222 225 #224
		#deutsch-krone
		#161
	}
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
	2020 #Tankette
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	#2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	
	1310 #Rear Area Supply
	1110 #Early Mountaineers

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #defensive focus
	6120 #Trench Warfare
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3320 #GW Carrier
	3330 #Early Carrier
	3400 #Dive Boat
	
	12100 12110 12120 #CVL
	4900 4910 #CAG
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 6 #3
    free_market       = 7 #5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 28031 }
  headofgovernment       = { type = 9 id = 28049 }
  foreignminister        = { type = 9 id = 28058 }
  armamentminister       = { type = 9 id = 28076 }
  ministerofsecurity     = { type = 9 id = 28091 }
  ministerofintelligence = { type = 9 id = 28006 }
  chiefofstaff           = { type = 9 id = 28007 }
  chiefofarmy            = { type = 9 id = 28008 }
  chiefofnavy            = { type = 9 id = 28135 }
  chiefofair             = { type = 9 id = 28010 }
  #Army
  landunit =
  { id       = { type = 10003 id = 512 }
    location = 599
    name     = "1st Army Corps"
    division =
    { id     = { type = 10003 id = 513 }
      name   = "I Lietuva Armiya"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10003 id = 514 }
      name   = "I Pestininkai Divizija"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
	  strength = 65
    } 
    division =
    { id     = { type = 10003 id = 515 }
      name   = "II Pestininkai Divizija"
      type   = infantry
      model  = 1
      extra  = engineer
      brigade_model = 0
	  strength = 65  
    }
    division =
    { id     = { type = 10003 id = 516 }
      name   = "III Pestininkai Divizija"
      type   = infantry
      model  = 1
	  strength = 65 
    }
    division =
    { id     = { type = 10003 id = 517 }
      name   = "I Kavalerija Divizija"
      type   = cavalry
      model  = 1
	  strength = 65 
    }
    division =
    { id     = { type = 10003 id = 518 }
      name   = "II Kavalerija Divizija"
      type   = cavalry
      model  = 1
	  strength = 65
    }    
  }
  landunit =
  { id       = { type = 10003 id = 519 }
    location = 270
    name     = "6. Army Corps"
    division =
    { id     = { type = 10003 id = 520 }
      name   = "I Karo Policija Divizija"
      type   = infantry
	  strength = 20
	  model = 1
    }
    division =
    { id     = { type = 10003 id = 1 }
      name   = "101. Karo Policija Divizija"
      type   = infantry
	  strength = 20
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 2 }
      name   = "V Kavalerija Divizija"
      type   = cavalry
	  strength = 65
	  model = 1
    }
  } 
  landunit =
  { id       = { type = 10003 id = 521 }
    location = 693
    name     = "2nd Border Guards"
    division =
    { id     = { type = 10003 id = 522 }
      name   = "II Karo Policija Divizija"
      type   = infantry
	  strength = 20
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 3 }
      name   = "103. Karo Policija Divizija"
      type   = infantry
	  strength = 20
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 4 }
      name   = "104. Karo Policija Divizija"
      type   = infantry
	  strength = 20
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 523 }
    location = 274
    name     = "3rd Border Guards"
    division =
    { id     = { type = 10003 id = 524 }
      name   = "III Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 5 }
      name   = "105. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 6 }
      name   = "106. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 525 }
    location = 573
    name     = "4th Border Guards"
    division =
    { id     = { type = 10003 id = 526 }
      name   = "IV Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 7 }
      name   = "107. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 8 }
      name   = "108. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 527 }
    location = 232
    name     = "10. Army Corps"
    division =
    { id     = { type = 10003 id = 528 }
      name   = "V Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 9 }
      name   = "109. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 10 }
      name   = "110. Karo Policija Divizija"
      type   = cavalry
	  strength = 65
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 529 }
    location = 605
    name     = "6th Border Guards"
    division =
    { id     = { type = 10003 id = 530 }
      name   = "VI Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 11 }
      name   = "111. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 12 }
      name   = "112. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  } 
  landunit =
  { id       = { type = 10003 id = 531 }
    location = 565
    name     = "7th Border Guards"
    division =
    { id     = { type = 10003 id = 532 }
      name   = "VII Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 13 }
      name   = "113. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 14 }
      name   = "114. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  } 
  landunit =
  { id       = { type = 10003 id = 533 }
    location = 575
    name     = "8th Border Guards"
    division =
    { id     = { type = 10003 id = 534 }
      name   = "VIII Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 15 }
      name   = "115. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 16 }
      name   = "116. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 535 }
    location = 587
    name     = "9th Border Guards"
    division =
    { id     = { type = 10003 id = 536 }
      name   = "IX Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 17 }
      name   = "117. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 18 }
      name   = "118. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 537 }
    location = 586
    name     = "10th Border Guards"
    division =
    { id     = { type = 10003 id = 538 }
      name   = "X Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 19 }
      name   = "119. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 20 }
      name   = "120. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 539 }
    location = 566
    name     = "11th Border Guards"
    division =
    { id     = { type = 10003 id = 540 }
      name   = "XI Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 21 }
      name   = "121. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 22 }
      name   = "122. Karo Policija Divizija"
      type   = infantry
	  strength = 10
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 541 }
    location = 636
    name     = "12th Border Guards"
    division =
    { id     = { type = 10003 id = 542 }
      name   = "XII Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 23 }
      name   = "123. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 24 }
      name   = "124. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 543 }
    location = 606
    name     = "13th Border Guards"
    division =
    { id     = { type = 10003 id = 544 }
      name   = "XIII Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 25 }
      name   = "125. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 26 }
      name   = "126. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  } 
  landunit =
  { id       = { type = 10003 id = 545 }
    location = 634
    name     = "14th Border Guards"
    division =
    { id     = { type = 10003 id = 546 }
      name   = "XIV Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 27 }
      name   = "127. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 28 }
      name   = "122. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 547 }
    location = 633
    name     = "15th Border Guards"
    division =
    { id     = { type = 10003 id = 548 }
      name   = "XV Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 29 }
      name   = "129. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 30 }
      name   = "130. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 549 }
    location = 644
    name     = "16th Border Guards"
    division =
    { id     = { type = 10003 id = 550 }
      name   = "XVI Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 31 }
      name   = "131. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 32 }
      name   = "132. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 551 }
    location = 692
    name     = "17th Border Guards"
    division =
    { id     = { type = 10003 id = 552 }
      name   = "XVII Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 33 }
      name   = "133. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 34 }
      name   = "134. Karo Policija Divizija"
      type   = infantry
	  strength = 15
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 553 }
    location = 238
    name     = "3. Army Corps"
    division =
    { id     = { type = 10003 id = 554 }
      name   = "XI Pestininkai Divizija"
      type   = infantry
	  strength = 65
	  model = 1
    } 
    division =
    { id     = { type = 10003 id = 35 }
      name   = "IX Pestininkai Divizija"
      type   = infantry
	  strength = 65
	  model = 1
      extra  = artillery
      brigade_model = 2
    }  
    division =
    { id     = { type = 10003 id = 36 }
      name   = "IV Kavalerija Divizija"
      type   = cavalry
	  strength = 65
	  model = 1
    }
  }  
  landunit =
  { id       = { type = 10003 id = 555 }
    location = 641
    name     = "2. Army Corps"
    division =
    { id     = { type = 10003 id = 556 }
      name   = "VI Pestininkai Divizija"
      type   = infantry
	  strength = 65
      model  = 1
    } 
    division =
    { id     = { type = 10003 id = 37 }
      name   = "VI Pestininkai Divizija"
      type   = infantry
	  strength = 65
	  model = 1
    }  
    division =
    { id     = { type = 10003 id = 38 }
      name   = "VIII Pestininkai Divizija"
      type   = infantry
	  strength = 65
	  model = 1
      extra  = artillery
      brigade_model = 2
    }
  }    
  #Air Force - German Licenses
  airunit =
  { location = 599
    base     = 599
    id       = { type = 10003 id = 571 }
    name     = "Commonwealth Air Force"
    division =
    { id     = { type = 10003 id = 572 }
      name   = "1. Naikintuvas Aviacijos Grupo"
      type   = interceptor
      model  = 2
    }
    division =
    { id     = { type = 10003 id = 573 }
      name   = "2. Naikintuvas Aviacijos Grupo"
      type   = interceptor
      model  = 2
    }
    division =
    { id     = { type = 10003 id = 574 }
      name   = "3. Naikintuvas Aviacijos Grupo"
      type   = interceptor
      model  = 2
    }    
    division =
    { id     = { type = 10003 id = 575 }
      name   = "1. Taktinis Bombonesis Avia. Gr."
      type   = tactical_bomber
      model  = 2
    }    
  }
  #Navy
  navalunit =
  { id       = { type = 10003 id = 576 }
    name     = "Transport Fleet"
    location = 264
    base     = 264
    division =
    { id     = { type = 10003 id = 577 }
      name   = "1. Transportavimas"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 578 }
      name   = "2. Transportavimas"
      type   = transport
      model  = 0
    } 
    division =
    { id     = { type = 10003 id = 579 }
      name   = "3. Transportavimas"
      type   = transport
      model  = 0
    }        
  } 
  navalunit =
  { id       = { type = 10003 id = 580 }
    name     = "Commonwealth Navy"
    location = 641
    base     = 641
    division =
    { id     = { type = 10003 id = 581 }
      name   = "CNS Augustinas IV"
      type   = light_carrier
      model  = 0
      extra  = light_cag
      brigade_model = 1      
    }   
    division =
    { id     = { type = 10003 id = 582 }
      name   = "CNS Kaunas"
      type   = battleship
      model  = 0
    } 
    division =
    { id     = { type = 10003 id = 583 }
      name   = "CNS Moletai"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 584 }
      name   = "CNS Minsk"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10003 id = 585 }
      name   = "CNS Siauliai"
      type   = battleship
      model  = 1
    }    
    division =
    { id     = { type = 10003 id = 586 }
      name   = "CNS Alytus"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 587 }
      name   = "CNS Silute"
      type   = light_cruiser
      model  = 0
    } 
    division =
    { id     = { type = 10003 id = 588 }
      name   = "CNS Taurage"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 589 }
      name   = "CNS Jurbarkas"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 590 }
      name   = "CNS Palanga"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10003 id = 591 }
      name   = "CNS Trakai"
      type   = light_cruiser
      model  = 1
    }   
    division =
    { id     = { type = 10003 id = 592 }
      name   = "CNS Druskininkai"
      type   = light_cruiser
      model  = 1
    }    
    division =
    { id     = { type = 10003 id = 593 }
      name   = "1. Nakintojas Eskadra"
      type   = destroyer
      model  = 0
    }  
    division =
    { id     = { type = 10003 id = 594 }
      name   = "2. Nakintojas Eskadra"
      type   = destroyer
      model  = 0
    } 
    division =
    { id     = { type = 10003 id = 595 }
      name   = "3. Nakintojas Eskadra"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10003 id = 596 }
      name   = "4. Nakintojas Eskadra"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10003 id = 597 }
      name   = "5. Nakintojas Eskadra"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10003 id = 598 }
      name   = "6. Nakintojas Eskadra"
      type   = destroyer
      model  = 1
    }    
  }   
}
