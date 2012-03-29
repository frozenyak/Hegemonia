#####################
# Country main data #
#####################

country =
{ tag                    = VIC
  regular_id = FRA
  intrinsic_gov_type     = stalinist
  ai = "france.ai"
  capital                = 55
  dissent		 = 7 #10
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 141
  transports             = 50
  escorts                = 10
  SpyInfo                = { country = "VIC" NumberOfSpies = 8 }
  research_mod = 0.75
  peacetime_ic_mod = 0.9
	diplomacy =
  { relation = { tag = U06 value = -100 }
    relation = { tag = GER value = -200 }
    relation = { tag = SPA value = -150 }
    relation = { tag = U00 value = 200 }
    relation = { tag = U07 value = 200 access = yes }
    relation = { tag = U10 value = 200 access = yes }
  }
    nationalprovinces      = {
		85 40 62  65  66  54
		63 105 107  104  71
        100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  43  44  47
        48 95 64 88 106 96 97
        98 103
        102 53 46 41 56 101
        #belgium
		114 115 116 112 113 108 117 111
		#netherlands
		#125   122   123   118   119   124 120 121
		#belgium/lux
		#110
		109
		#aquitaine
		#67 68 69 70
		#limousin auvergne
		72 74 #71 73 75 76
		#pyrenees languagedoc
		85 78 #77 79 80 81 82 83 84
		#alpes provence
		92 #86 89 93
	}
	ownedprovinces = {
		#france
		85 40 62  65  66
		54 63 100   52   51   49   59   50   99   45   55   60   61   37   38   39   57   58   42
		43   44   47   72  71
		102 53 46 41 56 101
		98 103 74
		48 95 64  88 96  97
        #belgium
		114 115 116 112 113 108 117 111
		#netherlands
		#125   122   123   118   119   124 120 121
		#belgium/lux
		#110
		109
		#pyrenees languagedoc
		78 #85 77 79 80 81 82 83 84
		#alpes provence
		92 #86 89 90 91 93 87
		#
		840
	}
	controlledprovinces = {
 		#france
		85 40 62  65  66
		54 63 100   52   51   49   59   50   99   45   55   60   61   37   38   39   57   58   42
		43   44   47   72  71
		102 53 46 41 56 101
		98 103 74
		48 95 64  88 96  97
        #belgium
		114 115 116 112 113 108 117 111
		#netherlands
		#125   122   123   118   119   124 120 121
		#belgium/lux
		#110
		109
		#pyrenees languagedoc
		78 #85 77 79 80 81 82 83 84
		#alpes provence
		92 #86 89 90 91 93 87
		#
		840
	}
	claimedprovinces = {
		#90 91 840
		#aquitaine
		#67 68 69 70
		#limousin auvergne
		#71 73 75 76
		#pyrenees languagedoc
		#78 79 80 81 82 83 84 77
		#alpes provence
		#92 86 89 90 91 93 87
		#geneva
		#391
		#sumatra
		1640 1642 1637 1634 1635 1638 1636 1641 1639
		#east indies
		1615 1616 1617 1619 1618 1622
		#andamans
		1421
	}

   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	9040 #Battlefield Dest
	9050 #Dive Bombing
	9090 #Operational Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	#4140 #Basic Tac Bomber
	4170 #Basic CAS
	
	4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2030 #Early Tank
	#2040 #Basic Light Tank
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	2400 #Early Anti-Tank
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
	
	5090 #Improved Construction
	5320 #Basic Computer
	5470 #Atomic Research Faculty
	7550 #Rocket Testing

	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1110 #Early Mountaineers
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1230 #Basic Motorized Division
	1310 #Rear Area Supply
	1340 #Rear Area Repair

	##Land Doctrines - Armored Spearhead##
	6210 #Mobility Focus
	6220 #Spearhead
	6230 #Delay
	6250 #Schwerpunkt
	14000 #Great War Hospital

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8080 #Sealane Interdiction

	8150 # Raider Patrol - convoy raiding +25%
	8160 # Trade Interdiction - convoy raiding +25%
	8090 # Indirect Approach
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
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	12100 12110 #CVL
	4900 4910 #CAG
	3810 3820 #Troopship
  }
	blueprints = {
		#Basic Light Tank
		2040
		#6240 #Elastic Defense 
		6260 #Blitzkrieg
		#6270 #Kampfgruppe
	}
  policy =
  { date              = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 10
        freedom = 1
        free_market = 3 #1
        professional_army = 5
        defense_lobby = 7
        interventionism = 3 #6
  }
  headofstate            = { type = 9 id = 870009 }
  headofgovernment       = { type = 9 id = 870015 }
  foreignminister        = { type = 9 id = 870025 }
  armamentminister       = { type = 9 id = 870038 }
  ministerofsecurity     = { type = 9 id = 870052 }
  ministerofintelligence = { type = 9 id = 870058 }
  chiefofstaff           = { type = 9 id = 870004 }
  chiefofarmy            = { type = 9 id = 870137 }
  chiefofnavy            = { type = 9 id = 870073 }
  chiefofair             = { type = 9 id = 870077 }
  #Army
  landunit =
  { id       = { type = 10005 id = 174 }
    location = 52
    name     = "1st Armored Cavalry"
    division =
    { id     = { type = 10005 id = 175 }
      name   = "1ère Division Cuirassée"
      type = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10005 id = 176 }
      name   = "2e Division Cuirassée"
      type = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10005 id = 177 }
      name   = "1ère Div. d'Infanterie Motorisée"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10005 id = 178 }
    location = 65
    name     = "2nd Armored Cavalry"
    division =
    { id     = { type = 10005 id = 179 }
      name   = "3e Division Cuirassée"
      type = light_armor
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10005 id = 180 }
      name   = "4e Div. d'Infanterie Motorisée"
      type = motorized
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10005 id = 181 }
      name   = "2e Div. d'Infanterie Motorisée"
      type   = motorized
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10005 id = 182 }
    location = 109
    name     = "1st Army Corps"
    division =
    { id     = { type = 10005 id = 183 }
      name   = "1ère Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 189 }
      name   = "4e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
	division =
	{	id    = {  type = 10005 id = 265  }
		name  = "42e Division d'Infanterie"
		strength = 55
		type  = infantry
		model = 1
	}
  }
  landunit =
  { id       = { type = 10005 id = 184 }
    location = 92
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10005 id = 185 }
      name   = "2e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 220 }
      name   = "220e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 221 }
      name   = "221e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 186 }
    location = 100
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10005 id = 187 }
      name   = "3e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10005 id = 222 }
      name   = "222e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 223 }
      name   = "223e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 190 }
    location = 97
    name     = "4th Army Corps"
    division =
    { id     = { type = 10005 id = 191 }
      name   = "5e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 224 }
      name   = "224e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10005 id = 225 }
      name   = "225e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 192 }
    location = 62
    name     = "5th Army Corps"
    division =
    { id     = { type = 10005 id = 193 }
      name   = "6e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 226 }
      name   = "226 Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
     Division =
     {  id    = {  type = 10005 id = 260  }
       name  = "18ème Division d'infanterie"
	   strength = 10
       type  = infantry
       model = 1
      }
  }
  landunit =
  { id       = { type = 10005 id = 194 }
    location = 96
    name     = "6th Army Corps"
    division =
    { id     = { type = 10005 id = 195 }
      name   = "7e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 227 }
      name   = "227e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 228 }
      name   = "228e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 196 }
    location = 72
    name     = "7th Army Corps"
    division =
    { id     = { type = 10005 id = 197 }
      name   = "8e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 229 }
      name   = "229e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 212 }
      name   = "17e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 198 }
    location = 71
    name     = "8th Army Corps"
    division =
    { id     = { type = 10005 id = 199 }
      name   = "9e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 230 }
      name   = "230e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 233 }
      name   = "233e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 202 }
    location = 95
    name     = "9th Army Corps"
    division =
    { id     = { type = 10005 id = 203 }
      name   = "11e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 231 }
      name   = "231e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10005 id = 232 }
      name   = "232e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 204 }
    location = 88
    name     = "10th Army Corps"
    division =
    { id     = { type = 10005 id = 205 }
      name   = "12e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 234 }
      name   = "234e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 235 }
      name   = "235e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 206 }
    location = 55
    name     = "Army of Paris"
    division =
    { id     = { type = 10005 id = 207 }
      name   = "1ère Armée"
      type   = hq
      model  = 0
    }
    division =
    { id     = { type = 10005 id = 208 }
      name   = "13e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10005 id = 209 }
      name   = "14e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
     division =
    { id     = { type = 10005 id = 210 }
      name   = "15e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10005 id = 211 }
      name   = "16e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10005 id = 272 }
    location = 78
    name     = "12th Army Corps"
    division =
    { id     = { type = 10005 id = 273 }
      name   = "73e Division d'Infanterie"
      type = infantry
	  strength = 50
      model  = 1
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10005 id = 274 }
      name   = "74e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
    division =
    { id     = { type = 10005 id = 275 }
      name   = "75e Division d'Infanterie"
      type = infantry
	  strength = 10
      model  = 1
    }
  }
  #Air Force
  airunit =
  { location = 54
    base     = 54
    id       = { type = 10500 id = 140 }
    name     = "Interceptor Flotilla"
    division =
    { id     = { type = 10500 id = 141 }
      name   = "Groupe de Chasse 1"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 142 }
      name   = "Groupe de Chasse 2"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 143 }
      name   = "Groupe de Chasse 3"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 144 }
      name   = "Groupe de Chasse 4"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 55
    base     = 55
    id       = { type = 10500 id = 145 }
    name     = "Bomber Flotilla"
    division =
    { id     = { type = 10500 id = 146 }
      name   = "Groupe de Bombardement Tactique 1"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 147 }
      name   = "Groupe de Bombardement Tactique 3"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 148 }
      name   = "Groupe de Bombardement d'Assaut 1"
      type   = cas
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 149 }
      name   = "Groupe de Bombardement d'Assaut 2"
      type   = cas
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 150 }
    name     = "Transport Fleet"
    location = 37
    base     = 37
    division =
    { id     = { type = 10500 id = 151 }
      name   = "1ère Flottille de Convois"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 152 }
      name   = "2e Flottille de Convois"
      type   = transport
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 153 }
    name     = "Submarine Fleet"
    location = 37
    base     = 37
    division =
    { id     = { type = 10500 id = 154 }
      name   = "1ère Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 155 }
      name   = "2e Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 156 }
      name   = "3e Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 157 }
      name   = "4e Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 158 }
      name   = "5e Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 159 }
      name   = "6e Flottille de Sous-marins"
      type   = submarine
      model  = 2
    }
  }
  navalunit =
  { id       = { type = 10500 id = 160 }
    name     = "Channel Fleet"
    location = 43
    base     = 43
    division =
    { id     = { type = 10500 id = 161 }
      name   = "Internationale"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 162 }
      name   = "Liberté"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 163 }
      name   = "Egalité"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 164 }
      name   = "Fraternité"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 165 }
      name   = "Paris"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 166 }
      name   = "Amsterdam"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 167 }
      name   = "Orléans"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 168 }
      name   = "Brussels"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 169 }
      name   = "Montcalm"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 170 }
      name   = "1ère Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 171 }
      name   = "2e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 172 }
      name   = "3e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 173 }
      name   = "4e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 174 }
      name   = "5e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 175 }
      name   = "6e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 176 }
    name     = "Revolutionary Fleet"
    location = 37
    base     = 37
    division =
    { id     = { type = 10500 id = 177 }
      name   = "Gascoigne"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 178 }
      name   = "Clemenceau"
      type   = battleship
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 179 }
      name   = "Chanzy"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 180 }
      name   = "Pothuau"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 181 }
      name   = "Kléber"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 182 }
      name   = "Gueydon"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 183 }
      name   = "De-Grasse"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 184 }
      name   = "Duguay Trouin"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 185 }
      name   = "Lamotte-Picquet"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 186 }
      name   = "Primaguet"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 187 }
      name   = "7e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 188 }
      name   = "8e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 189 }
      name   = "9e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 190 }
      name   = "10e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 191 }
      name   = "11e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 192 }
      name   = "12e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 193 }
      name   = "13e Flottille de Contre-torpilleurs"
      type   = destroyer
      model  = 2
    }
  }
  #belgian army
  landunit =
   {  id       = {  type = 10005 id = 241  }
     location = 113
     name     = "Corps de Cavalerie"
     Division =
     {  id    = {  type = 10005 id = 242  }
       name  = "1ère Division de cavalerie"
	   strength = 50
       type  = cavalry
       model = 2
       extra = artillery
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10005 id = 243  }
       name  = "2ème Division de cavalerie"
	   strength = 50
       type  = cavalry
       model = 2
      }
     Division =
     {  id    = {  type = 10005 id = 255  }
       name  = "16e Div. d'Infanterie Motorisée"
	   strength = 30
       type  = motorized
       model = 0
      }
    }
   landunit =
   {  id       = {  type = 10005 id = 246  }
     location = 116
     name     = "Ier Corps d'armée"
     Division =
     {  id    = {  type = 10005 id = 247  }
       name  = "1ère Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
       extra = artillery
	   brigade_model = 2
      }
     Division =
     {  id    = {  type = 10005 id = 248  }
       name  = "2ème Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
      }
     Division =
     {  id    = {  type = 10005 id = 249  }
       name  = "13ème Division d'infanterie"
	   strength = 10
       type  = infantry
       model = 1
      }
     Division =
     {  id    = {  type = 10005 id = 250  }
       name  = "14ème Division d'infanterie"
	   strength = 10
       type  = infantry
       model = 1
      }
    division =
    { id     = { type = 10005 id = 276 }
      name   = "2ème Armée"
      type   = hq
      model  = 1
    }
    }
   landunit =
   {  id       = {  type = 10005 id = 251  }
     location = 74
     name     = "IIème Corps d'armée"
     Division =
     {  id    = {  type = 10005 id = 252  }
       name  = "3ème Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
       extra = artillery
	   brigade_model = 2
      }
     Division =
     {  id    = {  type = 10005 id = 253  }
       name  = "4ème Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
      }
     Division =
     {  id    = {  type = 10005 id = 254  }
       name  = "15ème Division d'infanterie"
	   strength = 10
       type  = infantry
       model = 1
      }
    }
   landunit =
   {  id       = {  type = 10005 id = 256  }
     location = 108
     name     = "IIIème Corps d'armée"
     Division =
     {  id    = {  type = 10005 id = 257  }
       name  = "5ème Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
       extra = artillery
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10005 id = 258  }
       name  = "6ème Division d'infanterie"
	   strength = 50
       type  = infantry
       model = 1
      }
     Division =
     {  id    = {  type = 10005 id = 259  }
       name  = "17ème Division d'infanterie"
	   strength = 10
       type  = infantry
       model = 1
      }
    }
	navalunit = {
		id = { type = 10005 id = 267 }
		name = "1ste Transportatie Smaldeel"
		location = 114
		base = 114
		division = {
			id = { type = 10005 id = 268 }
			name = "1ère Transporte Naval"
			type = transport model = 1
			}
		division = {
			id = { type = 10005 id = 269 }
			name = "2de Smaldeel"
			type = transport model = 1
			}
		division = {
			id = { type = 10005 id = 270 }
			name = "1ère Flottille de Contre-Torpilleur"
			type = destroyer
			}
		division = {
			id = { type = 10005 id = 271 }
			name = "2de Flotielje Torpedoboten"
			type = destroyer
			}
		}
}
