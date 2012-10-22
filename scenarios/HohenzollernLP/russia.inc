#####################
# Country main data #
#####################

country =
{ tag                    = RUS
  ai = "russia.ai"
  capital                = 572
  dissent		 = 5
#Great Power
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 415
  transports             = 80
  escorts                = 0
  SpyInfo                = { country = "RUS" NumberOfSpies = 6 }
  research_mod = 0.75
  peacetime_ic_mod = 0.6
	diplomacy =
  {
    relation = { tag = CYN value = 25 }
    relation = { tag = U03 value = 75 guaranteed = { day = 4 month = december year = 1933 } }
    relation = { tag = TUR value = 25 guaranteed = { day = 4 month = december year = 1933 } }
    relation = { tag = FIN value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = SPA value = 150 }
    relation = { tag = IRE value = 150 }
    relation = { tag = U00 value = 50 }
    relation = { tag = GEO value = 50 guaranteed = { day = 11 month = february year = 1934 } }
  }

	nationalprovinces      = {
		1191  1193 1192 1196 1195 1190 1187 1188 1175 1174  1189 1176 1180     1181 1182 1183 1184
		1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154
		1153 1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545
		568      584   1138 1139 583 1136 1135
		1151 1130 1137  1132 1131 1133 690   687 689 688
		542  686 681 543  547
		645  659  662 661 666  1134 665 669 658 668       670 667 675 674 672
		664 671 673 684 663      655  642  651  650  656    578  683  682  679  571  680  678  677  676  548  556
		554  569  572  570  585  574      559  561  551  557  549      560
		           581   582  579  657  654  604
		580  652            603  602  647  646   643      649  653  648
		567                       577  562  558  563    1185
		1149 1141
		576 555
		1126 1127 1128 1069 1070 1161 1170 1171
		#belarus
		#599 594 595 591 596 597 601 598 592
		600 #590 593
		#crimea
		#637 638 639 640 641
		#krasnodar
		692 691 693 694 695
		#finland
		#553
		#astrakhan
		697 660 706
		#manchuko
		#1202 1204 1212 1205 1199 1203 1200 1206 1213 1207 1201 1208 1209 1210 1197 1198
		#kharkov
		633 #634
		#estonia
		274 270
		#novgorod
		550 552
		#pskov
		566 564 565 573
		#smolensk
		586 587 589 575
		#rostov
		#644
		#
		1113 #710 696
	}
	ownedprovinces = {  
		1191 1193 1192 1196 1195 1190 1187 1188 1175 1174  1189 1176 1180     1181 1182 1183 1184
		1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154
		1153 1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545
		568 588 584 1138 1139 583 1136 1135
		1151 1130 1137  1132 1131 690 687 689 688
		542  686 681 543  547
		645  659  662 661 660 666  1134 665 669 658 668 670 667 675 674 672
		664 671 673 684 663 655  642  651  650  656 578  683  682  679  571  680  678  677  676  548  556
		554  569  572  570  585  574 559  561  551  557  549 560
		581 582  579  657  654 
		580 652 643 649  653  
		567 577  562  558  563    1185
		1149 1141
		576 555
		1126 1127 1128 1069 1070 1161 1170 1171 1133
		#astrakhan
		697
		#manchuko
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1207 1201 1208 1209 1210 1197 1198
		#novgorod
		#550 552
		#pskov
		#565 573 566 564
		#smolensk
		#586 589 587 575
		#rostov
		#644
		#kursk
		602 604
		#belgorod
		603 646 647 648
	}
   controlledprovinces    = {  
		1191 1193 1192 1196 1195 1190 1187 1188 1175 1174  1189 1176 1180     1181 1182 1183 1184
		1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154
		1153 1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545
		568 588 584 1138 1139 583 1136 1135
		1151 1130 1137  1132 1131 690 687 689 688
		542  686 681 543  547
		645  659  662 661 660 666  1134 665 669 658 668 670 667 675 674 672
		664 671 673 684 663 655  642  651  650  656 578  683  682  679  571  680  678  677  676  548  556
		554  569  572  570  585  574 559  561  551  557  549 560
		581 582  579  657  654
		580 652 643 649  653  
		567 577  562  558  563    1185
		1149 1141
		576 555
		1126 1127 1128 1069 1070 1161 1170 1171 1133
		#astrakhan
		697
		#manchuko
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1207 1201 1208 1209 1210 1197 1198
		#novgorod
		#550 552
		#pskov
		#565 573 566 564
		#smolensk
		#586 589 587 575
		#rostov
		#644
		#kursk
		602 604
		#belgorod
		603 646 647 648
	}
	claimedprovinces	= {
		#crimea
		#637 638 639 640 641
		#krasnodar
		#691 693 694 695
		#finland
		#553
		#estonia
		#274 270 
		275 271 272 273
		#manchuko
		#1202 1204 1212 1205 1199 1203 1200 1206 1213 1207 1201 1208 1209 1210 1197 1198
	}
 techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	#9090 #Operational Dest
	#9140 #Strat Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	#4050 #Basic Escort
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport

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
	
	2320 #Early Artillery

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5060 #Improved Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	#5320 #Basic Computer
	5470 #Atomic Research Faculty
	7550 5550 #Rocket Testing
	
	5200 #Imp Oil Refining

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	14000 #Great War Hospital
	
	6570 #Manpower Focus
	6300 #Human Wave
	6310 #Large Front

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
	3030 #Basic Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3090 #Basic Light Cruiser
	3130 #GW Heavy Cruiser
	3140 #Early Heavy Cruiser
	3150 #Basic Heavy Cruiser
	3250 #GW Battleship
	3260 #Early Battleship
	3270 #Basic Battleship
	3320 #GW Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	3810 #Troopship
  }
  inventions = { 3000028 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    freedom           = 7 #8
    free_market       = 7 #6
    professional_army = 4
    defense_lobby     = 7 #8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 515001 }
  headofgovernment       = { type = 9 id = 515002 }
  foreignminister        = { type = 9 id = 515003 }
  armamentminister       = { type = 9 id = 515004 }
  ministerofsecurity     = { type = 9 id = 515005 }
  ministerofintelligence = { type = 9 id = 515006 }
  chiefofstaff           = { type = 9 id = 515007 }
  chiefofarmy            = { type = 9 id = 515008 }
  chiefofnavy            = { type = 9 id = 515009 }
  chiefofair             = { type = 9 id = 515010 }
  #Army
  landunit =
  { id       = { type = 9000 id = 939 }
    location = 572
    name     = "1st Army Corps"
    division =
    { id     = { type = 9000 id = 940 }
      name   = "1st Rossiya Armiya"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 9000 id = 941 }
      name   = "1. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 9000 id = 942 }
      name   = "2. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 9000 id = 943 }
    location = 663
    name     = "2nd Army Corps"
    division =
    { id     = { type = 9000 id = 944 }
      name   = "2nd Rossiya Armiya"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 9000 id = 875 }
      name   = "3. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 9000 id = 876 }
      name   = "4. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 9000 id = 877 }
    location = 576
    name     = "3rd Army Corps"
    division =
    { id     = { type = 9000 id = 878 }
      name   = "5. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 9000 id = 879 }
      name   = "6. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 9000 id = 880 }
      name   = "7. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 9000 id = 881 }
    location = 653
    name     = "4th Army Corps"
    division =
    { id     = { type = 9000 id = 882 }
      name   = "8. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 9000 id = 883 }
      name   = "9. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 9000 id = 884 }
      name   = "10. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 9000 id = 885 }
    location = 560
    name     = "5th Army Corps"
    division =
    { id     = { type = 9000 id = 886 }
      name   = "11. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 9000 id = 887 }
      name   = "12. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 9000 id = 888 }
      name   = "13. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 9000 id = 889 }
    location = 645
    name     = "6th Army Corps"
    division =
    { id     = { type = 9000 id = 890 }
      name   = "14. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 9000 id = 891 }
      name   = "15. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
    division =
    { id     = { type = 9000 id = 892 }
      name   = "16. Strelkovaya Diviziya"
      type   = infantry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 9000 id = 893 }
    location = 549
    name     = "1st Border Guards"
    division =
    { id     = { type = 9000 id = 894 }
      name   = "1. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 1 }
      name   = "91. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 2 }
      name   = "92. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 895 }
    location = 551
    name     = "2nd Border Guards"
    division =
    { id     = { type = 9000 id = 896 }
      name   = "2. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 3 }
      name   = "93. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 4 }
      name   = "94. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 897 }
    location = 561
    name     = "3rd Border Guards"
    division =
    { id     = { type = 9000 id = 898 }
      name   = "3. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 5 }
      name   = "95. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 6 }
      name   = "96. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 899 }
    location = 574
    name     = "4th Border Guards"
    division =
    { id     = { type = 9000 id = 900 }
      name   = "4. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 7 }
      name   = "97. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 8 }
      name   = "98. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 901 }
    location = 602
    name     = "5th Border Guards"
    division =
    { id     = { type = 9000 id = 902 }
      name   = "5. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 9 }
      name   = "99. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 10 }
      name   = "100. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 903 }
    location = 603
    name     = "6th Border Guards"
    division =
    { id     = { type = 9000 id = 904 }
      name   = "6. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 11 }
      name   = "101. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 12 }
      name   = "102. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 905 }
    location = 649
    name     = "7th Border Guards"
    division =
    { id     = { type = 9000 id = 906 }
      name   = "7. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 13 }
      name   = "103. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 14 }
      name   = "104. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 907 }
    location = 697
    name     = "8th Border Guards"
    division =
    { id     = { type = 9000 id = 908 }
      name   = "8. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 15 }
      name   = "105. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 16 }
      name   = "106. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 909 }
    location = 1147
    name     = "9th Border Guards"
    division =
    { id     = { type = 9000 id = 910 }
      name   = "9. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 17 }
      name   = "107. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 18 }
      name   = "108. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 911 }
    location = 588
    name     = "10th Border Guards"
    division =
    { id     = { type = 9000 id = 912 }
      name   = "10. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 19 }
      name   = "109. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 20 }
      name   = "110. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 913 }
    location = 581
    name     = "11th Border Guards"
    division =
    { id     = { type = 9000 id = 914 }
      name   = "11. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 21 }
      name   = "111. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 22 }
      name   = "112. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 915 }
    location = 1210
    name     = "12th Border Guards"
    division =
    { id     = { type = 9000 id = 916 }
      name   = "12. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 42 }
      name   = "132. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 23 }
      name   = "113. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 917 }
    location = 1137
    name     = "13th Border Guards"
    division =
    { id     = { type = 9000 id = 918 }
      name   = "13. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 24 }
      name   = "114. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 25 }
      name   = "115. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 919 }
    location = 546
    name     = "14th Border Guards"
    division =
    { id     = { type = 9000 id = 920 }
      name   = "14. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 26 }
      name   = "116. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 27 }
      name   = "117. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 921 }
    location = 666
    name     = "15th Border Guards"
    division =
    { id     = { type = 9000 id = 922 }
      name   = "15. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 28 }
      name   = "118. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 29 }
      name   = "119. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 923 }
    location = 648
    name     = "16th Border Guards"
    division =
    { id     = { type = 9000 id = 924 }
      name   = "16. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 30 }
      name   = "120. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 31 }
      name   = "121. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 925 }
    location = 577
    name     = "17th Border Guards"
    division =
    { id     = { type = 9000 id = 926 }
      name   = "17. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 32 }
      name   = "122. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 33 }
      name   = "123. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 927 }
    location = 557
    name     = "18th Border Guards"
    division =
    { id     = { type = 9000 id = 928 }
      name   = "18. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 34 }
      name   = "124. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 35 }
      name   = "125. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 929 }
    location = 1162
    name     = "19th Border Guards"
    division =
    { id     = { type = 9000 id = 930 }
      name   = "19. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 36 }
      name   = "126. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 43 }
      name   = "133. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 931 }
    location = 1207
    name     = "20th Border Guards"
    division =
    { id     = { type = 9000 id = 932 }
      name   = "20. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 37 }
      name   = "127. Diviziya Opolcheniya"
      type = infantry
	  strength = 10
    }
    division =
    { id     = { type = 9000 id = 38 }
      name   = "128. Diviziya Opolcheniya"
      type = infantry
	  strength = 30
      extra  = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 933 }
    location = 1133
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 9000 id = 934 }
      name   = "1. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 9000 id = 39 }
      name   = "9. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 935 }
    location = 1191
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 9000 id = 936 }
      name   = "2. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 9000 id = 40 }
      name   = "10. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 937 }
    location = 572
    name     = "3rd Cavalry Corps"
    division =
    { id     = { type = 9000 id = 938 }
      name   = "3. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
    division =
    { id     = { type = 9000 id = 44 }
      name   = "11. Kavaleriyskaya Diviziya"
      type   = cavalry
      model  = 2
    }
  }
  landunit =
  { id       = { type = 9000 id = 45 }
    location = 1209
    name     = "Guard Mountain Corps"
    division =
    { id     = { type = 9000 id = 46 }
      name   = "1. Guard Mountaineers"
      type   = bergsjaeger
      model  = 0
    }
    division =
    { id     = { type = 9000 id = 47 }
      name   = "2. Guard Mountaineers"
      type   = bergsjaeger
      model  = 0
    }
    division =
    { id     = { type = 9000 id = 48 }
      name   = "3. Guard Mountaineers"
      type   = bergsjaeger
      model  = 0
    }
  }
  #Air Force
  airunit =
  { location = 572
    base     = 572
    id       = { type = 10500 id = 965 }
    name     = "Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 966 }
      name   = "1. IAD"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 967 }
      name   = "1. IAD"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 968 }
      name   = "1. IAD"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 969 }
      name   = "1. IAD"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 663
    base     = 663
    id       = { type = 10500 id = 970 }
    name     = "Bomber Squadron"
    division =
    { id     = { type = 10500 id = 971 }
      name   = "1. BAD"
      type   = tactical_bomber
      model  = 1
    }
     division =
    { id     = { type = 10500 id = 972 }
      name   = "2. BAD"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 973 }
      name   = "3. BAD"
      type   = tactical_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 974 }
      name   = "1. DBAD"
      type   = strategic_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 975 }
    name     = "Far East Fleet"
    location = 1191
    base     = 1191
    division =
    { id     = { type = 10500 id = 976 }
      name   = "Alexandr Kerenski"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 977 }
      name   = "Rossiya"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 978 }
      name   = "Moskva"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 979 }
      name   = "Vladivostok"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 980 }
      name   = "Ulan Ude"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 981 }
      name   = "Slava"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 982 }
      name   = "Admiral Ushakov"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 983 }
      name   = "Borodino"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 985 }
      name   = "Tsesarevich"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 986 }
      name   = "Pilsudsky"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 987 }
      name   = "Georgiy Pobenosets"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 988 }
      name   = "Yevstafiy"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 989 }
      name   = "Gangut"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 990 }
      name   = "Pilsudsky"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 991 }
      name   = "Gangut"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 992 }
      name   = "Rostislav"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 994 }
      name   = "2nd Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 993 }
      name   = "1st Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 995 }
      name   = "3rd Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 996 }
      name   = "4th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 997 }
      name   = "5th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 998 }
      name   = "6th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 999 }
      name   = "7th Destroyer Flotilla"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 1000 }
      name   = "8th Destroyer Flotilla"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1001 }
    name     = "Submarine Fleet"
    location = 1191
    base     = 1191
    division =
    { id     = { type = 10500 id = 1002 }
      name   = "1st Submarine Flotilla"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1003 }
      name   = "2nd Submarine Flotilla"
      type   = submarine
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1004 }
      name   = "3rd Submarine Flotilla"
      type   = submarine
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1005 }
    name     = "White Sea Fleet"
    location = 542
    base     = 542
    division =
    { id     = { type = 10500 id = 1006 }
      name   = "Arkhangelsk"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1007 }
      name   = "Murmansk"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1008 }
      name   = "Sevastopol"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1009 }
      name   = "Borodino"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1010 }
      name   = "Kinburn"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1011 }
      name   = "Navarin"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1012 }
      name   = "Varyag"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1013 }
      name   = "Vitse Admiral Drozd"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1014 }
      name   = "Admiral Zozulya"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1015 }
      name   = "Admiral Isakov"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1016 }
      name   = "Ochakov"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1017 }
      name   = "Petropavlovsk"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1018 }
      name   = "Tashkent"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1019 }
      name   = "9th Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1020 }
      name   = "10th Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1021 }
      name   = "11th Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 1027 }
    name     = "Transport Fleet"
    location = 542
    base     = 542
    division =
    { id     = { type = 10500 id = 984 }
      name   = "Sisoyveliky"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 1022 }
      name   = "12th Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1023 }
      name   = "13th Destroyer Flotilla"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1024 }
      name   = "1st Transports"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1025 }
      name   = "2nd Transports"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 1026 }
      name   = "3rd Transports"
      type   = transport
      model  = 0
    }
  }
}
