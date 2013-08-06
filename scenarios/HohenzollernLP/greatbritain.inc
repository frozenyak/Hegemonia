#####################
# Country main data #
#####################

country =
{ tag                    = ENG
	ai_settings = { flags = { MOB2 = yes MOB3 = yes ai_set = yes } }
	ai = "great britain.ai"
  capital                = 29
  dissent				 = 5
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 122
  transports             = 500
  escorts                = 50
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  research_mod = 0.75
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = U01 value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = SPA value = 100 }
    relation = { tag = IRE value = 25 }
    relation = { tag = KOR value = 200 access = yes }
    relation = { tag = RUS value = 100 }
  }
	nationalprovinces      = {
		29 9 5 4 6 7 12 11 10 13 14 15 18 17 16 24 25 28 19 26 27 20 23 22 21 8
	}
	ownedprovinces    = {
		29 9 5 4 6 7 12 11 10 13 14 15 18 17 16 24 25 28 19 26 27 20 23 22 21 8
		1773 996
		1361 1362 1363 1364 # Taiwan
		#north borneo
		1624 1623 1626 1627 1628 1625
		#south borneo
		1629 1630 1631 1632 1633
		1219 #Port Arthur / Dalian
		#indian ocean
		997 998 1611 1612 1613 1614
		#liaoning
		1214 1215 1217 1218 1220 #1216
		#jilin
		1211
	}
	controlledprovinces    = {
		29 9 5 4 6 7 12 11 10 13 14 15 18 17 16 24 25 28 19 26 27 20 23 22 21 8
		1773 996
		1361 1362 1363 1364 # Taiwan
		#north borneo
		1624 1623 1626 1627 1628 1625
		#south borneo
		1629 1630 1631 1632 1633
		1219 #Port Arthur / Dalian
		#indian ocean
		997 998 1611 1612 1613 1614
		#liaoning
		1214 1215 1217 1218 1220 #1216
		#jilin
		1211
	}
	claimedprovinces = {
		1773 #bermuda
		840 997 998 996 1611 1612 1613 1614 #Indian Ocean Islands
		1588 1589 1590 1591 1592 1593  1679 1682 1687 1749 1750 #Pacific Ocean Islands
		1361 1362 1363 1364 # Taiwan
		#north borneo
		1624 1623 1626 1627 1628 1625
		#south borneo
		1629 1630 1631 1632 1633
		1219 #Port Arthur / Dalian
		#liaoning
		1214 1215 1217 1218 1220 #1216
		#jilin
		1211
	}

	techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	9140 #Strat Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4220 #Basic Strat Bomber
	#4250 #Basic Transport
	
	4190 #Basic Naval Bomber

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2030 #Early Tank
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
	5060 #Improved Machine Tools
	5080 #Basic Construction
	5090 #Improved Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	5320 #Basic Computer
	
	7550 #Rocket Testing
	
	5410 #Basic Radar
	5470 #Atomic Research Faculty
	5480 #Atomic Research Labs

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1150 #Early Marines
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	1310 #Rear Area Supply

	1230 #Basic Motorized Division

	##Land Doctrines - Sup Firepower##
	6010 #Firepower Focus
	6020 #Superior Firepower
	6040 #Delay

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8070 #Fleet-in-Being

	8120 # Battlefleet Concentration Doctrine
	8310 # Floating Fortress Doctrine
	82300 #Basic Amphib Warfare
	
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
	3330 #Early Carrier
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	3280 #Imp Battleship
	3340 #Basic Carrier
	12100 12110 #CVL
	4900 4910 4920 #CAG
	3810 3820 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 4
    freedom = 8
    free_market = 7
    professional_army = 3
    defense_lobby = 4
    interventionism = 5
  }
  headofstate            = { type = 9 id = 1001 }
  headofgovernment       = { type = 9 id = 1002 }
  foreignminister        = { type = 9 id = 1158 }
  armamentminister       = { type = 9 id = 1004 }
  ministerofsecurity     = { type = 9 id = 1005 }
  ministerofintelligence = { type = 9 id = 1102 }
  chiefofstaff           = { type = 9 id = 1117 }
  chiefofarmy            = { type = 9 id = 1127 }
  chiefofnavy            = { type = 9 id = 1009 }
  chiefofair             = { type = 9 id = 1010 }
  #Army
  landunit =
  { id       = { type = 10000 id = 873 }
    location = 19
    name     = "1st Armored Cavalry"
    division =
    { id     = { type = 10000 id = 844 }
      name   = "1st Cavalry Division 'Kings Own'"
      type   = cavalry
      model  = 2
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 845 }
      name   = "1st Armoured Div. 'Royal Hussars'"
      type = light_armor
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10000 id = 877 }
      name   = "1st Motorised Infantry"
      type = motorized
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10000 id = 846 }
    location = 29
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 847 }
      name   = "British High Command"
      type   = hq
      model  = 0
	  strength = 75
    }
    division =
    { id     = { type = 10000 id = 848 }
      name   = "1st Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 849 }
      name   = "2nd Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 850 }
      name   = "3rd Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 851 }
      name   = "4th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 852 }
      name   = "5th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 853 }
    location = 14
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 854 }
      name   = "6th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 855 }
      name   = "7th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 856 }
      name   = "8th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 857 }
      name   = "9th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 858 }
      name   = "10th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 859 }
      name   = "11th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 860 }
    location = 27
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10000 id = 861 }
      name   = "12th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 862 }
      name   = "13th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 863 }
      name   = "14th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 864 }
    location = 23
    name     = "4th Army Corps"
    division =
    { id     = { type = 10000 id = 865 }
      name   = "13th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 866 }
      name   = "14th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 867 }
      name   = "15th Infantry Division"
      type   = infantry
      model  = 0
	  strength = 30
    }
  }
  landunit =
   {  name     = "Taiwan Command"
     location = 1362
     id       = {  type = 10000 id = 868  }
     Division =
     {  id       = {  type = 10000 id = 869  }
       name     = "Taiwan Defence Force"
       type     = militia
       strength = 80
      }
    }
  landunit =
   {  name     = "China Command"
     location = 1219
     id       = {  type = 10000 id = 870  }
     Division =
     {  id       = {  type = 10000 id = 871  }
       name     = "King's Chinese Rifles"
       type     = militia
       strength = 70
      }
    }
  landunit =
   {  name     = "Brunei Command"
     location = 1624
     id       = {  type = 10000 id = 872  }
     Division =
     {  id       = {  type = 10000 id = 874  }
       name     = "Brunei Defence Force"
       type     = militia
       strength = 80
      }
    }
  landunit =
   {  name     = "Bermuda Command"
     location = 1773
     id       = {  type = 10000 id = 875  }
     Division =
     {  id       = {  type = 10000 id = 876  }
       name     = "Bermuda Garrison"
       type     = garrison
       strength = 35
	   locked = yes
      }
    }
  #Air Force
  airunit =
  { location = 26
    base     = 26
    id       = { type = 10500 id = 912 }
    name     = "RAF Interceptor Squadron"
    division =
    { id     = { type = 10500 id = 913 }
      name   = "No.1 RAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 914 }
      name   = "No.2 RAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 915 }
      name   = "No.3 RAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 916 }
      name   = "No.4 RAF Fighter Group"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 23
    base     = 23
    id       = { type = 10500 id = 917 }
    name     = "Naval Bomber Squadron"
    division =
    { id     = { type = 10500 id = 918 }
      name   = "No.1 RN 'Coastal Naval Command'"
      type   = naval_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 919 }
      name   = "No.2 RN 'Coastal Naval Command'"
      type   = naval_bomber
      model  = 0
    }
  }
  airunit =
  { location = 25
    base     = 25
    id       = { type = 10500 id = 920 }
    name     = "Tactical Bomber Squadron"
    division =
    { id     = { type = 10500 id = 921 }
      name   = "No.1 RAF Tactical Group"
      type   = tactical_bomber
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 922 }
      name   = "No.2 RAF Tactical Group"
      type   = tactical_bomber
      model  = 2
    }
  }
  airunit =
  { location = 17
    base     = 17
    id       = { type = 10500 id = 923 }
    name     = "Strategic Bomber Squadron"
    division =
    { id     = { type = 10500 id = 924 }
      name   = "No.1 RAF Strategic Group"
      type   = strategic_bomber
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 925 }
      name   = "No.2 RAF Strategic Group"
      type   = strategic_bomber
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 926 }
    name     = "Transport Fleet"
    location = 5
    base     = 5
    division =
    { id     = { type = 10500 id = 927 }
      name   = "1st Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 928 }
      name   = "2nd Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 929 }
      name   = "3rd Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 930 }
      name   = "4th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 931 }
      name   = "5th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 932 }
      name   = "6th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10501 id = 929 }
      name   = "7th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10501 id = 930 }
      name   = "8th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10501 id = 931 }
      name   = "9th Transport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10501 id = 932 }
      name   = "10th Transport Flotilla"
      type   = transport
      model  = 0
    }
	division = { 
		id = { type = 10501 id = 2223 } 
		name = "Destroyer Division 35" 
		type = destroyer 
		model = 2
	} 
	division = { 
		id = { type = 10501 id = 2224 } 
		name = "Destroyer Division 36" 
		type = destroyer 
		model = 2
	} 
  }
  navalunit =
  { id       = { type = 10500 id = 933 }
    name     = "North Sea Fleet"
    location = 5
    base     = 5
    division =
    { id     = { type = 10501 id = 946 }
      name   = "HMS Royal Sovereign"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 935 }
      name   = "HMS Prince of Wales"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 936 }
      name   = "HMS Duke of York"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 953 }
      name   = "HMS Hermes"
      type   = light_carrier #escort_carrier
      model  = 0
      extra  = light_cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10500 id = 937 }
      name   = "HMS Berkshire"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 938 }
      name   = "HMS Birmingham"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 940 }
      name   = "HMS Manchester"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 941 }
      name   = "HMS Edinburgh"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 942 }
      name   = "HMS Dido"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 943 }
      name   = "8th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 944 }
      name   = "9th Destroyer Flotilla"
      type   = destroyer
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 945 }
      name   = "10th Destroyer Flotilla"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 946 }
    name     = "Home Fleet"
    location = 23
    base     = 23
    division =
    { id     = { type = 10500 id = 947 }
      name   = "HMS King James V"
      type   = battleship
      model  = 3
    }
    division =
    { id     = { type = 10500 id = 934 }
      name   = "HMS Ark Royal"
      type   = carrier
      model  = 2
      extra = cag
      brigade_model = 1
    }
    division =
    { id     = { type = 10501 id = 945 }
      name   = "HMS Nelson"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 947 }
      name   = "HMS Royal Oak"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 948 }
      name   = "HMS Coventry"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 949 }
      name   = "HMS Curlew"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 949 }
      name   = "HMS Northumberland"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 950 }
      name   = "HMS Surrey"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 944 }
      name   = "HMS Rodney"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 948 }
      name   = "HMS Emerald"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 951 }
      name   = "HMS Dauntless"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 952 }
      name   = "HMS Aurora"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 954 }
      name   = "HMS Newcastle"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 955 }
      name   = "HMS Sheffield"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 956 }
      name   = "HMS Glasgow"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 957 }
      name   = "HMS Liverpool"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 958 }
      name   = "1st Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 959 }
      name   = "2nd Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 960 }
      name   = "3rd Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 961 }
      name   = "4th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 962 }
      name   = "5th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 963 }
      name   = "6th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 964 }
      name   = "7th Destroyer Flotilla"
      type   = destroyer
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10501 id = 965 }
    name     = "Far East Fleet"
    location = 1219
    base     = 1219
    division =
    { id     = { type = 10501 id = 963 }
      name   = "HMS Courageous"
      type   = carrier
      model  = 1
      extra = cag
      brigade_model = 1
    }
    division =
    { id     = { type = 10501 id = 962 }
      name   = "HMS Eagle"
      type   = light_carrier #escort_carrier
      model  = 2
      extra  = light_cag
      brigade_model = 2
    }
    division =
    { id     = { type = 10501 id = 964 }
      name   = "HMS Ramillies"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 966 }
      name   = "HMS Nelson"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 967 }
      name   = "HMS Devonshire"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 939 }
      name   = "HMS Gloucester"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 968 }
      name   = "HMS Leander"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 969 }
      name   = "HMS Dunadin"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 970 }
      name   = "HMS Neptune"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 971 }
      name   = "HMS Orion"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10501 id = 972 }
      name   = "18th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 973 }
      name   = "15th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 974 }
      name   = "17th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 975 }
      name   = "14th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10501 id = 976 }
      name   = "16th Destroyer Flotilla"
      type   = destroyer
      model  = 1
    }
  }
  
landdivision = { dormant = yes id = { type = 12700 id = 10001 }  name = "1. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10002 }  name = "2. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10003 }  name = "3. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10004 }  name = "4. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10005 }  name = "5. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10006 }  name = "6. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10007 }  name = "7. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10008 }  name = "8. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10009 }  name = "9. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10010 }  name = "10. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10011 }  name = "11. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10012 }  name = "12. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10013 }  name = "13. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10014 }  name = "14. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10015 }  name = "15. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10016 }  name = "16. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10017 }  name = "17. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
landdivision = { dormant = yes id = { type = 12700 id = 10018 }  name = "18. Home Guard"  type = garrison model = 1 extra = artillery brigade_model = 4 locked  = yes }
}
