#####################
# Country main data #
#####################

country =
{ tag                    = EGY
  #industrial_modifier	 = 0.85
  #relative_manpower	 = 1.50
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 114
  transports             = 20
  escorts                = 0
  capital                = 789 #787
  SpyInfo                = { country = "EGY" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1 #3
    political_left    = 3
    free_market       = 4 #2
    freedom           = 1
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 5
  }


	nationalprovinces      = {
		790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1004 1005 802 1006 793 794 797 795 798 781 782 779
		#suez
		#900
		1007
		#ethiopia
		821 #820 819 822 823  829 825 831 824
		#Eritrea
		815 816 817
		#sudan
		803 804 805 806 807 808 809 810 811 812 813 814
		#bengazi
		760 761 762 763 764
		#tobruk
		765 766 767 768
		#magdalena
		769 770 771 772
		#interior libya
		773 774 775 777
	}
	ownedprovinces      = {
		790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1004 1005 802 1006 793 794 797 795 798 781 782 779
		#suez
		900 1007
		#ethiopia
		821 #820 819 822 823  829 825 831 824
		#Eritrea
		815 816 817
		#sudan
		803 804 805 806 807 808 809 810 811 812 813 814
		#bengazi
		760 761 762 763 764
		#tobruk
		765 766 767 768
		#magdalena
		769 770 771 772
		#interior libya
		773 774 775 777
	}
	controlledprovinces      = {
		790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1004 1005 802 1006 793 794 797 795 798 781 782 779
		#suez
		900 1007
		#ethiopia
		821 #820 819 822 823  829 825 831 824
		#Eritrea
		815 816 817
		#sudan
		803 804 805 806 807 808 809 810 811 812 813 814
		#bengazi
		760 761 762 763 764
		#tobruk
		765 766 767 768
		#magdalena
		769 770 771 772
		#interior libya
		773 774 775 777
	}
    claimedprovinces = {
		#suez
		900 #1007
	}
    techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	#2400 #Early Anti-Tank
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
	1200 #Early Cavalry
	1310 #Rear Area Supply

	##Land Doctrines - Sup Firepower##
	6030 #Grand Battleplan
	6560 #defensive focus

	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	8030 #Fleet Aux Carrier
	8040 #Fleet Aux Sub
	8050 #Convoy Sailing
	8060 #Base Strike
	8070 #Fleet-in-Being
	8080 #Sealane Interdiction

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	
	3810 #Troopship
  }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = USA value = 100 }
    relation = { tag = U00 value = -200 }
    relation = { tag = ARA value = -200 }
    relation = { tag = SOM value = 100 }
    relation = { tag = SPA value = 50 }
    relation = { tag = ETH value = 100 }
    relation = { tag = ENG value = 50 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 25 }
    relation = { tag = LIT value = 25 }
  }

  headofstate = { type = 9 id = 512013 }
  headofgovernment = { type = 9 id = 512014 }
  foreignminister = { type = 9 id = 512003 }
  armamentminister = { type = 9 id = 512004 }
  ministerofsecurity = { type = 9 id = 512062  }
  ministerofintelligence = { type = 9 id = 512072  }
  chiefofstaff = { type = 9 id = 512079 }
  chiefofarmy = { type = 9 id = 512088 }
  chiefofnavy = { type = 9 id = 512009 }
  chiefofair = { type = 9 id = 512103 }
  #Army
  landunit =
  { id       = { type = 10000 id = 146 }
    location = 765
    name     = "Armored Cavalry"
    division =
    { id     = { type = 10000 id = 147 }
      name   = "Sipahis al-1i"
      type = cavalry
      model  = 1
	  strength = 50
	  extra = armored_car
	  brigade_model = 0
    }
   division =
    { id     = { type = 10000 id = 148 }
      name   = "Sipahis al-2i"
      type = cavalry
      model  = 1
	  strength = 50
	  extra = armored_car
	  brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 149 }
      name   = "Sipahis al-3i"
      type   = cavalry
      model  = 1
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 150 }
    location = 787
    name     = "1st Egyptian Army"
    division =
    { id     = { type = 10000 id = 151 }
      name   = "al-Mushati al-1i"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10000 id = 152 }
      name   = "al-Mushati al-2i"
      type   = infantry
      model  = 0
	  strength = 50
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10000 id = 153 }
      name   = "al-Mushati al-3i"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 154 }
    location = 810
    name     = "2nd Egyptian Army"
    division =
    { id     = { type = 10000 id = 155 }
      name   = "al-Mushati al-4i"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 156 }
      name   = "al-Mushati al-5i"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 157 }
      name   = "al-Mushati al-6i"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  landunit =
  { id       = { type = 10000 id = 158 }
    location = 900
    name     = "Suez Garrison"
    division =
    { id     = { type = 10000 id = 159 }
      name   = "al-Mushati al-7i"
      type   = infantry
      model  = 0
	  strength = 50
    }
    division =
    { id     = { type = 10000 id = 160 }
      name   = "al-Mushati al-8i"
      type   = infantry
      model  = 0
	  strength = 50
    }
  }
  #Air Force
  airunit =
  { location = 787
    base     = 787
    id       = { type = 10500 id = 113 }
    name     = "Egyptian Air Force"
    division =
    { id     = { type = 10500 id = 114 }
      name   = "1. EAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 115 }
      name   = "2. EAF Fighter Group"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 116 }
      name   = "1. EAF Tactical Bomb Group"
      type   = tactical_bomber
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 117 }
    name     = "Egyptian Navy"
    location = 789
    base     = 789
    division =
    { id     = { type = 10500 id = 118 }
      name   = "ENS Nasr"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 119 }
      name   = "ENS Bur Safajah"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 120 }
      name   = "Flotille Al Qalibah"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 121 }
      name   = "Flotille Al Ziba"
      type   = destroyer
      model  = 0
    }
  }
}