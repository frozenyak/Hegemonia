#####################
# Country main data #
#####################

country =
{ tag                    = USA
  ai = "american federation.ai"
  dissent		 = 5
  #Great Power
  energy                 = 5000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 302
  transports             = 40
  escorts                = 10
  capital                = 1789
  SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  research_mod = 0.75
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = MEX value = -200 }
    relation = { tag = CAN value = 150 }
    relation = { tag = VEN value = 150 guaranteed = { day = 25 month = march year = 1935 } }
    relation = { tag = DOM value = 50 }
    relation = { tag = JAP value = 50 }
    relation = { tag = EGY value = 100 }
    relation = { tag = SCA value = 75 }
    relation = { tag = GER value = 100 }
    relation = { tag = AUS value = 50 }
  }
	nationalprovinces      = {
		1809 1813 1812 1814 1818 1815 1816 1817 1808 1807 1801 1797 1791 1795 1793
		1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806
		1810 1811 1820 1819 1942 1943 1940  1825 1821 1842 1845 1802
		1828   1918 1915  1836 1833 1830 1829 1832 1839
		1838 1841 1843 1834 1837 1859
		1860 1914 1913 1910 1911
		1907 1908  1909 1866 1916 1831  
		1858 1848 1917  1835 1840  1844 1822 1823 1827 1941   1800
		1794 1824 1798 1799 1786 
		#new brunswick
		2128 2130 2131
		#nova scotia
		2132 2133 2134
		#quebec
		2118 2126 2124
		#ontario
		2109 2111
		########barasya
		1929 1931 1937
		#arkansas
		1933 
		#mississippi
		1935 1939 1938 
		#alabama
		1936 1944 1945 1946 1947
		#florida
		1948 1949 1950 1951 1952 1953
		#georgia
		1954 1955 1956 1959
		#S carolina
		1957 1958 1960
		#N carolina
		1961 1962 1963 1964
	}
    ownedprovinces      = {
		1809 1953 1949 1948 1952 1951 1950 1947 1956 1954 1955 1960 1958 1963 1961
		1962 1964 1813 1812 1814 1818 1815 1816 1817 1808 1807 1801 1797 1791 1795 1793
		1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806
		1810 1811 1820 1819 1942 1943 1940 1939 1936 1944 1825 1821 1842 1845 1802
		1957 1828 1918 1915  1836 1833 1830 1829 1832 1839
		1838 1841 1843 1834 1837 1859
		1860 1914 1913 1910 1911
		1907 1908 1909 1866
		1916 1831 1935 1945
		1858 1848 1912
		1917 1835 1840  1844 1822 1823 1827 1941 1946 1959 1800
		1794 1824 1798 1799 1786
		#new brunswick
		2128 2130 2131
		#nova scotia
		2132 2133 2134
		#quebec
		2118 2126 2124
		#ontario
		2109 2111
		#barasya
		1933 1938
		1937 1931 1929
	}
    controlledprovinces      = {
		1809 1953 1949 1948 1952 1951 1950 1947 1956 1954 1955 1960 1958 1963 1961
		1962 1964 1813 1812 1814 1818 1815 1816 1817 1808 1807 1801 1797 1791 1795 1793
		1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806
		1810 1811 1820 1819 1942 1943 1940 1939 1936 1944 1825 1821 1842 1845 1802
		1957 1828 1918 1915  1836 1833 1830 1829 1832 1839
		1838 1841 1843 1834 1837 1859
		1860 1914 1913 1910 1911
		1907 1908 1909 1866
		1916 1831 1935 1945
		1858 1848 1912
		1917 1835 1840  1844 1822 1823 1827 1941 1946 1959 1800
		1794 1824 1798 1799 1786
		#new brunswick
		2128 2130 2131
		#nova scotia
		2132 2133 2134
		#quebec
		2118 2126 2124
		#ontario
		2109 2111
		#barasya
		1933 1938 
		1937 1931 1929
	}
	claimedprovinces = {
		#barasya
		#1929 1931 1937
		#arkansas
		#1933 
		#mississippi
		#1935 1938 1939 
		#alabama
		#1936 1944 1945 1946 1947
		#georgia
		#1954 1955 1956 1959
		#S carolina
		#1957 1958 1960
		#N carolina
		#1961 1962 1963 1964
	}
    techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution
	9040 #Battlefield Dest
	9050 #Dive Bombing
	#9090 #Operational Dest

	##Aircraft##
	4010 #Interwar Fighter
	4020 #Early Fighter
	#4030 #Basic Interceptor
	4120 #Interwar Bomber
	4130 #Early Bomber
	4170 #Basic CAS
	#4250 #Basic Transport

	##Armor##
	2010 #Great War Tank
	2020 #Tankette
	2030 #Early Tank
	2150 #Basic Armored Car
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	2310 #GW Heavy Artillery
	2320 #Early Artillery
	2400 #Early Anti-Tank
	2450 #GW Flak
	#2460 #Early Flak
	2510 #Basic AA Brigade
	
	2040 #Basic Tank

	##Industry##
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5190 #Basic Oil Refining
	5310 #Census Tabulating
	7550 5550 #Rocket Testing
	
	5060 #Improved Machine Tools
	5090 #Improved Construction
	#5320 #Basic Computer
	5470 #Atomic Research Faculty
	
	5480 #Atomic Research Labs
	
	##Infantry##
	1010 #Great War Infantry
	1020 #Early Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	1210 #Basic Cavalry
	#1220 #Semi Motorized Cavalry
	1230 #Basic Motorized (1935)
	1310 #Rear Area Supply
	1340 #Rear Area Repair
	
	#1150 #Early Marines
	1110 #Early Mountaineers
	#1120 #Basic Mountaineers

	##Land Doctrines - Armored Spearhead##
	6210 #Mobility Focus
	6220 #Spearhead
	6250 #Schwerpunkt
	14000 #Great War Hospital
	
	#6230 #Delay

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
	3400 #Dive Boat
	3410 #Short Range Sub
	3420 #Med Range Sub
	
	3810 #Troopship
  }
  inventions = { 3000028 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #3
    political_left    = 1
    freedom           = 2
    free_market       = 4 #3 #1
    professional_army = 5
    defense_lobby     = 7 #8
    interventionism   = 7 #6
  }
  headofstate            = { type = 9 id = 6272 }
  headofgovernment       = { type = 9 id = 6190 }
  foreignminister        = { type = 9 id = 6069 }
  armamentminister       = { type = 9 id = 6094 }
  ministerofsecurity     = { type = 9 id = 6111 }
  ministerofintelligence = { type = 9 id = 6132 }
  chiefofstaff           = { type = 9 id = 6140 }
  chiefofarmy            = { type = 9 id = 6148 }
  chiefofnavy            = { type = 9 id = 6164 }
  chiefofair             = { type = 9 id = 6172 }

  #Army
  landunit =
  { id       = { type = 10001 id = 1 }
    location = 1908
    name     = "Nebraska Armored Cavalry"
    division =
    { id     = { type = 10001 id = 2 }
      name   = "1st Armored Division"
      type   = light_armor
      model  = 0
	  strength = 65
    }
    division =
    { id     = { type = 10001 id = 3 }
      name   = "2nd Armored Division"
      type   = light_armor
      model  = 0
	  strength = 65
    }
    division =
    { id     = { type = 10001 id = 4 }
      name   = "Nebraska Motorized Corps"
      type   = motorized
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 5 }
    location = 1913
    name     = "Oklahoma Armored Cavalry"
    division =
    { id     = { type = 10001 id = 6 }
      name   = "3rd Armored Division"
      type   = light_armor
      model  = 0
	  strength = 65
    }
    division =
    { id     = { type = 10001 id = 7 }
      name   = "4th Motorized Corps"
      type   = motorized
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 8 }
      name   = "Oklahoma Motorized Corps"
      type   = motorized
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 9 }
    location = 1933
    name     = "Arkansas Armored Cavalry"
    division =
    { id     = { type = 10001 id = 10 }
      name   = "5th Armored Division"
      type   = light_armor
      model  = 0
	  strength = 65
    }
    division =
    { id     = { type = 10001 id = 11 }
      name   = "6th Motorized Corps"
      type   = motorized
      model  = 0
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 12 }
      name   = "Arkansas Motorized Corps"
      type   = motorized
      model  = 0
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 14 }
    location = 1858
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10001 id = 15 }
      name   = "1st Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 16 }
      name   = "2nd Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 17 }
      name   = "3rd Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 18 }
    location = 1909
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10001 id = 19 }
      name   = "4th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 20 }
      name   = "5th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 21 }
      name   = "6th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 22 }
    location = 1907
    name     = "4th Army Corps"
    division =
    { id     = { type = 10001 id = 23 }
      name   = "7th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 24 }
      name   = "8th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 25 }
      name   = "9th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 26 }
    location = 1929
    name     = "5th Army Corps"
    division =
    { id     = { type = 10001 id = 27 }
      name   = "10th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 28 }
      name   = "11th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 29 }
      name   = "12th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 30 }
    location = 1911
    name     = "6th Army Corps"
    division =
    { id     = { type = 10001 id = 31 }
      name   = "13th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 32 }
      name   = "14th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 33 }
      name   = "16th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 34 }
    location = 1918
    name     = "7th Army Corps"
    division =
    { id     = { type = 10001 id = 35 }
      name   = "17th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 36 }
      name   = "18th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 37 }
      name   = "19th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 38 }
    location = 1908
    name     = "1st Army Corps"
    division =
    { id     = { type = 10001 id = 39 }
      name   = "20th Infantry Division"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 40 }
      name   = "21st Infantry Division"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 41 }
      name   = "1st Army Command"
      type   = hq
      model  = 1
	  strength = 75
    }
  }
  landunit =
  { id       = { type = 10001 id = 44 }
    location = 1939
    name     = "8th Army Corps"
    division =
    { id     = { type = 10001 id = 45 }
      name   = "20th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = artillery
      brigade_model = 2
    }
    division =
    { id     = { type = 10001 id = 46 }
      name   = "21th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 47 }
      name   = "22nd Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 64 }
      name   = "2nd Army Command"
      type   = hq
      model  = 1
	  strength = 75
    }
  }
  landunit =
  { id       = { type = 10001 id = 48 }
    location = 1910
    name     = "9th Army Corps"
    division =
    { id     = { type = 10001 id = 49 }
      name   = "29th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 50 }
      name   = "30th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 51 }
      name   = "31st Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 52 }
    location = 1907
    name     = "1. Mountaincorps"
    division =
    { id     = { type = 10001 id = 53 }
      name   = "3. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 54 }
      name   = "1. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
    division =
    { id     = { type = 10001 id = 55 }
      name   = "2. Mountaineers"
      type   = bergsjaeger
      model  = 1
	  strength = 40
    }
  }
  landunit =
  { id       = { type = 10001 id = 56 }
    location = 1916
    name     = "10th Army Corps"
    division =
    { id     = { type = 10001 id = 57 }
      name   = "37th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 58 }
      name   = "38th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 59 }
      name   = "39th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 60 }
    location = 1931
    name     = "11th Army Corps"
    division =
    { id     = { type = 10001 id = 61 }
      name   = "44th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 62 }
      name   = "45th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 63 }
      name   = "46th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  landunit =
  { id       = { type = 10001 id = 42 }
    location = 1789
    name     = "12th Army Corps"
    division =
    { id     = { type = 10001 id = 43 }
      name   = "43rd Infantry Division"
      type   = infantry
      model  = 1
	  strength = 40
      extra  = artillery
      brigade_model = 3
    }
    division =
    { id     = { type = 10001 id = 65 }
      name   = "55th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10001 id = 66 }
      name   = "56th Infantry Division"
      type = infantry
	  model = 1
	  strength = 40
      extra  = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 67 }
    location = 1812
    name     = "13th Army Corps"
    division =
    { id     = { type = 10001 id = 68 }
      name   = "58rd Infantry Division"
      type   = infantry
      model  = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 69 }
      name   = "59th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
    division =
    { id     = { type = 10001 id = 70 }
      name   = "54th Infantry Division"
      type = infantry
	  model = 1
	  strength = 30
    }
  }
  #Air Force
  airunit =
  { location = 1833
    base     = 1833
    id       = { type = 10500 id = 1 }
    name     = "AFAF Interceptor Flotilla"
    division =
    { id     = { type = 10500 id = 2 }
      name   = "1st AFAF Fighter Wing"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 3 }
      name   = "2nd AFAF Fighter Wing"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 4 }
      name   = "3rd AFAF Fighter Wing"
      type   = interceptor
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 5 }
      name   = "4th AFAF Fighter Wing"
      type   = interceptor
      model  = 1
    }
  }
  airunit =
  { location = 1940
    base     = 1940
    id       = { type = 10500 id = 6 }
    name     = "AFAF Bomber Flotilla"
    division =
    { id     = { type = 10500 id = 7 }
      name   = "1st AFAF Tactical Bomb. Wing"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 8 }
      name   = "2nd AFAF Tactical Bomb. Wing"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 9 }
      name   = "3rd AFAF Tactical Bomb. Wing"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 10 }
      name   = "4th AFAF Tactical Bomb. Wing"
      type   = tactical_bomber
      model  = 1
    }
  }
  airunit =
  { location = 1913
    base     = 1913
    id       = { type = 10500 id = 11 }
    name     = "AFAF CAS Flotilla"
    division =
    { id     = { type = 10500 id = 12 }
      name   = "1st AFAF Dive Bomb. Wing"
      type   = cas
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 13 }
      name   = "2nd AFAF Dive Bomb. Wing"
      type   = cas
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 14 }
    name     = "Transport Fleet"
    location = 1797
    base     = 1797
    division =
    { id     = { type = 10500 id = 15 }
      name   = "1st Transport Division"
      type   = transport
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 33 }
    name     = "Atlantic Fleet"
    location = 1812
    base     = 1812
    division =
    { id     = { type = 10500 id = 17 }
      name   = "AFS New Britain"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 18 }
      name   = "AFS Independence"
      type   = battleship
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 19 }
      name   = "AFS Fatherland"
      type   = heavy_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 20 }
      name   = "AFS Eagle"
      type   = heavy_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 22 }
      name   = "AFS Helena"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 23 }
      name   = "AFS Atlanta"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 24 }
      name   = "AFS Oakland"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 25 }
      name   = "AFS Liberation"
      type   = light_cruiser
      model  = 2
    }
    division =
    { id     = { type = 10500 id = 27 }
      name   = "9th Destroyer Division"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 28 }
      name   = "10th Destroyer Division"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 29 }
      name   = "11th Destroyer Division"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 30 }
      name   = "12th Destroyer Division"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 31 }
      name   = "13th Destroyer Division"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 32 }
      name   = "14th Destroyer Division"
      type   = destroyer
      model  = 1
    }
  }
  navalunit =
  { id       = { type = 10500 id = 16 }
    name     = "Caribbean Fleet"
    location = 1953
    base     = 1953
    division =
    { id     = { type = 10500 id = 34 }
      name   = "AFS Boston"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 35 }
      name   = "AFS North Carolina"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 36 }
      name   = "AFS Washington"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 21 }
      name   = "AFS Alabama"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 37 }
      name   = "AFS Louisville"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 38 }
      name   = "AFS Columbus"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 39 }
      name   = "AFS Norfolk"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 40 }
      name   = "AFS Tulsa"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 41 }
      name   = "1st Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 42 }
      name   = "2nd Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 43 }
      name   = "3rd Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 44 }
      name   = "4th Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 45 }
      name   = "5th Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 46 }
      name   = "6th Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 47 }
      name   = "7th Destroyer Division"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 26 }
      name   = "8th Destroyer Division"
      type   = destroyer
      model  = 0
    }
  }
}

