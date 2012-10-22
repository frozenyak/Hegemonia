#####################
# Country main data #
#####################

country =
{ tag                    = SOM
  #puppet		 = EGY
  #industrial_modifier	 = 1.00
  #relative_manpower	 = 2.00
#Minor Power
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 20
  manpower               = 59
  transports             = 10
  escorts                = 0
  capital                = 836
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    free_market       = 4
    freedom           = 1
    professional_army = 4
    defense_lobby     = 3
    interventionism   = 3
  }

	nationalprovinces = {
		#tanganyika
		849 850 852 #848 851
		#kenya
		839 841 842 843
		#somalia
		836 837 838
		#niassa
		853 854
		#ethiopia
		#818 826 827 828 830
		#somaliland
		#833 832 834 835
	}
    ownedprovinces = {
		#tanganyika
		849 850 852 #848 851
		#kenya
		839 841 842 843
		#somalia
		836 837 838
		#niassa
		853 854
		#ethiopia
		#818 826 827 828 830
		#somaliland
		#833 832 834 835
    }
    controlledprovinces = {
		#tanganyika
		849 850 852 #848 851
		#kenya
		839 841 842 843
		#somalia
		836 837 838
		#niassa
		853 854
		#ethiopia
		#818 826 827 828 830
		#somaliland
		#833 832 834 835
    }
  techapps = {
	##Air Doctrines##
	9020 #Flying Circus
	9030 #Force Substitution
	
	##Aircraft##
	4010 #Interwar Fighter
	4120 #Interwar Bomber

	##Armor##
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2450 #GW Flak

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = EGY value = 200 }
  }
  headofstate = { type = 9 id = 770011 }
  headofgovernment = { type = 9 id = 770013 }
  foreignminister = { type = 9 id = 770015 }
  armamentminister = { type = 9 id = 770017 }
  ministerofsecurity = { type = 9 id = 770020  }
  ministerofintelligence = { type = 9 id = 770022  }
  chiefofstaff = { type = 9 id = 770024 }
  chiefofarmy = { type = 9 id = 770026 }
  chiefofnavy = { type = 9 id = 770027 }
  chiefofair = { type = 9 id = 770028 }
  #Army
  landunit =
  { id       = { type = 10000 id = 736 }
    location = 836
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10000 id = 737 }
      name   = "al-Milishiya al-1i"
      type   = cavalry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 738 }
    location = 833
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 739 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 740 }
    location = 842
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 741 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0
    }
  }
}