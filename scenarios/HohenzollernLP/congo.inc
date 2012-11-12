#####################
# Country main data #
#####################

country =
{ tag                    = CON
  puppet		 = GER
	ai_settings = { flags = { MOB2 = yes reinf = yes } }
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
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
  capital                = 894
  SpyInfo                = { country = "CON" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic 	      = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
	nationalprovinces    = {
		894 #901 904 903 905 906 902 898 897 899 846 847
		#893
		#cameroon
		#907 908 909 910 911 912 913 914 915 916 917 918 919
		#angola
		#890 895
		#uganda
		#844 845
		#tanganyika
		#848 851
		#central africa plains
		#923 924 926 927 928 #921 922 925
	}
	ownedprovinces    = {
		894 901 904 903 905 906 902 898 897 899 846 847
		893
		#cameroon
		907 908 909 910 911 912 913 914 915 916 917 918 919
		#angola
		890 895
		#uganda
		844 845
		#tanganyika
		848 851
		#central africa plains
		923 924 926 927 928 #921 922 925
	}
	controlledprovinces    = {
		894 901 904 903 905 906 902 898 897 899 846 847
		893
		#cameroon
		907 908 909 910 911 912 913 914 915 916 917 918 919
		#angola
		890 895
		#uganda
		844 845
		#tanganyika
		848 851
		#central africa plains
		923 924 926 927 928 #921 922 925
	}
	claimedprovinces    = {
		894 901 904 903 905 906 902 898 897 899 846 847
		893
		#cameroon
		907 908 909 910 911 912 913 914 915 916 917 918 919
		#angola
		890 895
		#uganda
		844 845
		#tanganyika
		848 851
		#central africa plains
		923 924 926 927 928 #921 922 925
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
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #Defensive focus
	
	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = GER value = 200 }
    relation = { tag = ANG value = 100 }
    relation = { tag = LIB value = 100 }
  }
  headofstate            = { type = 9 id = 574037 }
  headofgovernment       = { type = 9 id = 574013 }
  foreignminister        = { type = 9 id = 574015 }
  armamentminister       = { type = 9 id = 574018 }
  ministerofsecurity     = { type = 9 id = 574021 }
  ministerofintelligence = { type = 9 id = 574024 }
  chiefofstaff           = { type = 9 id = 574026 }
  chiefofarmy            = { type = 9 id = 574029 }
  chiefofnavy            = { type = 9 id = 574031 }
  chiefofair             = { type = 9 id = 574034 }
  landunit =
  { id       = { type = 10000 id = 134 }
    location = 893
    name     = "Armee von die Kongo"
    division =
    { id     = { type = 10000 id = 135 }
      name   = "1. Kavalleriedivision"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 136 }
    location = 911
    name     = "1. Infanterie"
    division =
    { id     = { type = 10000 id = 137 }
      name   = "1. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 138 }
      name   = "2. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 139 }
      name   = "3. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10000 id = 140 }
    location = 898
    name     = "2. Infanterie"
    division =
    { id     = { type = 10000 id = 141 }
      name   = "4. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 142 }
      name   = "5. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
    division =
    { id     = { type = 10000 id = 143 }
      name   = "6. Landesschützendivision"
      type   = militia
      model  = 0
	  strength = 30
    }
  }
}