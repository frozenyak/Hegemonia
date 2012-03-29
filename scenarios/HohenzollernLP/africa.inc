#####################
# Country main data #
#####################

country =
{ tag                    = U07
  #puppet		 = VIC #U00
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 442
  transports             = 20
  escorts                = 0
  capital                = 747
  SpyInfo                = { country = "U07" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 4
    defense_lobby     = 7 #8
    interventionism   = 6
  }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = SPA value = -200 }
    relation = { tag = U00 value = 200 }
    relation = { tag = EGY value = -200 }
  }
	nationalprovinces      = {
		738 731  734  735  732  736  
		733  727  744  737  728   729  741  740  742  745  746  747  748  749  981  
		982 943 944   984  985  974  978  980  966    965  975  971  972  973  976  959  957
		967  960 962 922 920  925
		921 946 947  958 961 968 970 977 983 986   730 743 
		739  969
		929 930 931 932 933 937 938 939 940 941 952  956 964 979 963
		936 934 935 954 953 
		#libya
		750 751 752 753 754 755 756 757 758 759 776
		#niger
		942 945
		#morocco
		988 724 726 #721 723 725
	}
	ownedprovinces      = {
		738 731  734  735  732  736  
		733  727  744  737  728   729  741  740  742  745  746  747  748  749  981  
		982 943 944   984  985  974  978  980  966    965  975  971  972  973  976  959  957
		967  960 962 922 920  925
		921 946 947  958 961 968 970 977 983 986   730 743 
		739  969
		929 930 931 932 933 937 938 939 940 941 952  956 964 979 963
		936 934 935 954 953 
		#libya
		750 751 752 753 754 755 756 757 758 759 776
		#niger
		942 945
		#morocco
		988 724 726 #721 723 725
	}
	controlledprovinces      = {
		738 731  734  735  732  736  
		733  727  744  737  728   729  741  740  742  745  746  747  748  749  981  
		982 943 944   984  985  974  978  980  966    965  975  971  972  973  976  959  957
		967  960 962 922 920  925
		921 946 947  958 961 968 970 977 983 986   730 743 
		739  969
		929 930 931 932 933 937 938 939 940 941 952  956 964 979 963
		936 934 935 954 953 
		#libya
		750 751 752 753 754 755 756 757 758 759 776
		#niger
		942 945
		#morocco
		988 724 726 #721 723 725
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
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2450 #GW Flak

	##Industry##
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply
	1110 #Early Mountaineers

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	
	3810 #Troopship
  }
  headofstate            = { type = 9 id = 108016 }
  headofgovernment       = { type = 9 id = 108022 }
  foreignminister        = { type = 9 id = 108024 }
  armamentminister       = { type = 9 id = 108027 }
  ministerofsecurity     = { type = 9 id = 108030 }
  ministerofintelligence = { type = 9 id = 108033 }
  chiefofstaff           = { type = 9 id = 108036 }
  chiefofarmy            = { type = 9 id = 108039 }
  chiefofnavy            = { type = 9 id = 108042 }
  chiefofair             = { type = 9 id = 108044 }
  #Army
  landunit =
  { id       = { type = 10000 id = 691 }
    location = 930
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10000 id = 692 }
      name   = "Sipahis al-1i"
      type   = cavalry
      model  = 1   
    } 
  }
  landunit =
  { id       = { type = 10000 id = 693 }
    location = 978
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10000 id = 694 }
      name   = "Sipahis al-2i"
      type   = cavalry
      model  = 1   
    } 
  }
  landunit =
  { id       = { type = 10000 id = 695 }
    location = 978
    name     = "3rd Cavalry Corps"
    division =
    { id     = { type = 10000 id = 696 }
      name   = "Sipahis al-3i"
      type   = cavalry
      model  = 1   
    } 
  }  
  landunit =
  { id       = { type = 10000 id = 697 }
    location = 747
    name     = "1st Army Corps"
    division =
    { id     = { type = 10000 id = 698 }
      name   = "al-Milishiya al-1i"
      type   = militia
      model  = 0
      extra  = artillery
      brigade_model = 1     
    } 
    division =
    { id     = { type = 10000 id = 699 }
      name   = "al-Milishiya al-2i"
      type   = militia
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 700 }
      name   = "al-Milishiya al-3i"
      type   = militia
      model  = 0   
    }    
  } 
  landunit =
  { id       = { type = 10000 id = 701 }
    location = 727
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10000 id = 702 }
      name   = "al-Milishiya al-4i"
      type   = militia
      model  = 0    
    } 
    division =
    { id     = { type = 10000 id = 703 }
      name   = "al-Milishiya al-5i"
      type   = militia
      model  = 0   
    }
    division =
    { id     = { type = 10000 id = 704 }
      name   = "al-Milishiya al-6i"
      type   = militia
      model  = 0   
    }    
  }    
  #Air Force
  airunit =
  { location = 747
    base     = 747
    id       = { type = 10500 id = 825 }
    name     = "North African Air Force"
    division =
    { id     = { type = 10500 id = 826 }
      name   = "1. Groupe de Chassee NAAF"
      type   = interceptor
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 827 }
    name     = "North African Navy"
    location = 727
    base     = 727
    division =
    { id     = { type = 10500 id = 828 }
      name   = "Flottille Al Bi'ra"
      type   = destroyer
      model  = 0
    } 
  }  
}