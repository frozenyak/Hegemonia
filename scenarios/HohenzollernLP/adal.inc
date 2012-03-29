
 ########################################
 # Country definition for ETH by Cardus #
 ########################################


 country =
 {  tag                    = ETH
	#puppet		 = EGY
   # Resource Reserves
	energy                 = 1060
	metal                  = 1180
	rare_materials         = 490
   oil                    = 100
   supplies               = 100
   money                  = 500
   capital                = 825
   manpower               = 75

   policy =
   {  date              = {  year = 0 month = january day = 0  }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 4
    defense_lobby     = 7 #8
    interventionism   = 2
    }
	peacetime_ic_mod       = 0.6
   nationalprovinces      = {
		820 819 822 823 818 829 825 830 826 831 828 827 824
		#821 815 816 817
		#somaliland
		833 832 834 835
	}
	ownedprovinces = {  
		820 819 822 823 818 829 825 830 826 831 828 827 824
		#somaliland
		833 832 834 835
	}
	controlledprovinces = {  
		820 819 822 823 818 829 825 830 826 831 828 827 824
		#somaliland
		833 832 834 835
	}
	claimedprovinces = { 
		#815 816 817 821 
	}
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 1110 }
 peacetime_ic_mod = 0.6
	SpyInfo                = {  country = "ETH" NumberOfSpies = 2  }
	headofstate            = { type = 9 id = 65001 }
	headofgovernment       = { type = 9 id = 65002 }
	foreignminister        = { type = 9 id = 65003 }
	armamentminister       = { type = 9 id = 65004 }
	ministerofsecurity     = { type = 9 id = 65005 }
	ministerofintelligence = { type = 9 id = 65006 }
	chiefofstaff           = { type = 9 id = 65007 }
	chiefofarmy            = { type = 9 id = 65008 }
	chiefofnavy            = { type = 9 id = 65009 }
	chiefofair             = { type = 9 id = 65010 }
  ####################################################################################
 #OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus
 # ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War
 # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia
 # ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force#Early_years_.281929-1935.29
 #####################################################################################

         landunit =
       {  id       = {  type = 31000 id = 1  }
         location = 825
         name     = "Adal Army"
         Division =
         {  id       = {  type = 31000 id = 2  }
           name     = "Kebur Zabangna"
           type     = infantry
           strength = 30
           model    = 0
          }
       Division =
         {  id       = {  type = 31000 id = 3  }
           name     = "Cadet school"
           type     = militia
           strength = 50
           model    = 0
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 4  }
         location = 819
         name     = "Army of the Left"
      # Ras Imru Haile Selassie
         Division =
         {  id       = {  type = 31000 id = 5  }
           name     = "Gojjam  Provincial Armed Forces"
        # Ras Imru Haile Selassie
           type     = infantry
           strength = 70
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 6  }
           name     = "Wolqayt and Semien Sefari"
        # Fitawrari Ayalew Birru
           type     = bergsjaeger
           strength = 70
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 7  }
           name     = "Gojjam Levies"
        #Dejazmach Gessesse Belew  (later deserted, revolted)
           type     = infantry
           strength = 70
           model    = 0
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 30  }
         location = 821
         name     = "Danakil Army"
      #Dejazmach Kassa Sebhat
         Division =
         {  id       = {  type = 31000 id = 31  }
           name     = "Ifrata Sefari"
        #Ras Kebbede
           type     = infantry
           strength = 50
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 33  }
           name     = "Kaffa Sefari"
        #Ras Getachew Abate
           type     = infantry
           strength = 50
           model    = 0
          }
        }
        airunit =
       {  location = 825
         base     = 825
         id       = {  type = 31000 id = 51  }
         name     = "Adal Air Force"
      #Hubert Julian - Head of Ethiopian Air Force ref http://en.wikipedia.org/wiki/Hubert_Julian
         Division =
         {  id       = {  type = 31000 id = 52  }
           name     = "Fighter bomber wing"
           strength = 10
           type     = interceptor
           model    = 0
          }
        }
}