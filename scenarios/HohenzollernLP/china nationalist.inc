#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  regular_id		 = UCH
	ai_settings = { flags = { MOB2 = yes MOB3 = yes MOB4 = yes reinf = yes ai_set = yes } }
	ai = "china nationalist.ai"
  capital                = 1369
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 368
  transports             = 20
  escorts                = 0
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  peacetime_ic_mod = 0.8
	diplomacy =
  { relation = { tag = U74 value = -200 }
    relation = { tag = U08 value = -100 }
    relation = { tag = GER value = -100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = CMB value = 100 guaranteed = { day = 24 month = september year = 1933 } }
  }
  # Fujian
   nationalprovinces      = {
 #Nationalist China at Start
 1333 1261 1303 1339 1323 1321 1334 1336 1340 1341 1319  1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360 1354  1353 1318 1355 1309  1311 1312 1310  1304   1302  1258 1262 1257  1296 1292 1293 1297 1298  1305 1306 1291 1313 1307  1308  1356  1349     1335    1314 1315    1267    1320   1299  1343  1300 1301 1350 1351 1352

 #Yunnan
 1389 1390 1384 1385 1386 1387 1388

 #Guanxi Clique
  1378  1365  1376 1377  1375 510 1380 1381 1382 1383  1369 1370 1373  1379 1367 1374 1368

 #Shanxi
  1241 1247 1246 1251  1242 1254  1331 1332  1252 1253 1248 1249 1250 1327  1243 1244 1245  1328 1329  1330

 #Manchoukou
 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237  1207 1220 1218 2750 1236 1201 1208 1209     1210 1211 1214   1215  1216 1235 1217 1197 1198

 #Xibei san ma
 1269 1268 1270 1271 1264 1263 1272 1265 1266 1283 1284 1285

 #Tibet
 1294 1290 1286 1287 1288 1289 1295

 #Sinkiang
 1273 1279 1280 1281 1277 1274 1275 1282

 #India
 1278 1276

 #Communist China
 1259 1260 1255 1256

 #Japan In China
 1219 1238  1240 1239

 #European Possessions
  1371 1372

 #Taiwan
  1361 1362 1363 1364

 #Mongolia
 1120 1124 1125 1123 1121 1122
 
 #tannu tuva
 1119

		#siam
		#1422 1427
		#indochina
		1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1404 #1391
		#cambodia
		#1400 1401 1402
	 }
	ownedprovinces         = {
		1291 1292 1293 1384 1385 1386 1387 1388 1389 1390
		1306 1312 1311 1354
		#guanxi
		1378   1376 1377  1375  1380 1381 1382 1383  1369 1370 1373  1379 1367  1374 1368
		#indochina
		1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1404 #1391
		#cambodia
		#1400 1401 1402
		#natchi
		1300 1303 1305
		#siam
		#1422 1427
		#European Possessions
		1372 1365 #1371
	}
   controlledprovinces         = {
		1291 1292 1293 1384 1385 1386 1387 1388 1389 1390
		1306 1312 1311 1354
		#guanxi
		1378  1376 1377  1375  1380 1381 1382 1383  1369 1370 1373  1379 1367  1374 1368
		#indochina
		1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1404 #1391
		#cambodia
		#1400 1401 1402
		#natchi
		1300 1303 1305
		#siam
		#1422 1427
		#European Possessions
		1372 1365 #1371
	}
	claimedprovinces = {
		#indochina
		#1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1404 #1391
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
	5010 #Modern Agriculture
	5020 #Mech Agriculture
	5050 #Basic Machine Tools
	5080 #Basic Construction
	5310 #Census Tabulating
	
	5090 #Improved Construction

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1310 #Rear Area Supply

	##Land Doctrines##
	#6570 #Manpower Focus
	#6300 #Human Wave/Peoples army
	
	6030 #Grand Battleplan
	6560 #defensive focus

	##Naval Tech##
	3010 #GW Destroyer
	3020 #Early Destroyer
	3070 #GW Light Cruiser
	3080 #Early Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	3400 #Dive Boat
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    free_market       = 7
    freedom           = 5 #4
    professional_army = 4
    defense_lobby     = 7 #8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52022 }
  headofgovernment       = { type = 9 id = 52026 }
  foreignminister        = { type = 9 id = 52033 }
  armamentminister       = { type = 9 id = 52045 }
  ministerofsecurity     = { type = 9 id = 52063 }
  ministerofintelligence = { type = 9 id = 52078 }
  chiefofstaff           = { type = 9 id = 52088 }
  chiefofarmy            = { type = 9 id = 52096 }
  chiefofnavy            = { type = 9 id = 52103 }
  chiefofair             = { type = 9 id = 52108 }
  #Army
  landunit =
  { id       = { type = 10700 id = 95 }
    location = 1395
    name     = "1st Army Corps"
    division =
    { id     = { type = 10700 id = 96 }
      name   = "Bubing Di 1 Shi"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 97 }
      name   = "Bubing Di 2 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 98 }
      name   = "Bubing Di 3 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 99 }
    location = 1369
    name     = "Southern Army"
    division =
    { id     = { type = 10700 id = 100 }
      name   = "Bubing Di 4 Shi"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 168 }
      name   = "Bubing Di 68 Shi"
      type   = infantry
      model  = 0
      extra  = artillery
      brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 101 }
      name   = "Bubing Di 5 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 102 }
      name   = "Bubing Di 6 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 157 }
      name   = "South Army Headquarters"
      type   = hq
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 103 }
    location = 1399
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10700 id = 104 }
      name   = "Bubing Di 7 Shi"
      type   = infantry
      model  = 0
      extra  = engineer
      brigade_model = 0
    }
    division =
    { id     = { type = 10700 id = 105 }
      name   = "Bubing Di 8 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 106 }
      name   = "Bubing Di 9 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 107 }
    location = 1293
    name     = "1st Militia"
    division =
    { id     = { type = 10700 id = 108 }
      name   = "Minbing Di 1 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 110 }
      name   = "Minbing Di 2 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 113 }
      name   = "Minbing Di 3 Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 114 }
    location = 1311
    name     = "4th Militia"
    division =
    { id     = { type = 10700 id = 115 }
      name   = "Minbing Di 4 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 117 }
      name   = "Minbing Di 5 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 119 }
      name   = "Minbing Di 6 Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 120 }
    location = 1306
    name     = "7th Militia"
    division =
    { id     = { type = 10700 id = 121 }
      name   = "Minbing Di 7 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 123 }
      name   = "Minbing Di 8 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 125 }
      name   = "Minbing Di 9 Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 126 }
    location = 1389
    name     = "10th Militia"
    division =
    { id     = { type = 10700 id = 127 }
      name   = "Minbing Di 10 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 129 }
      name   = "Minbing Di 11 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 131 }
      name   = "Minbing Di 12 Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 116 }
    location = 1300
    name     = "5th Army Corps"
    division =
    { id     = { type = 10700 id = 134 }
      name   = "Bubing Di 34 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 135 }
      name   = "Bubing Di 35 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 136 }
      name   = "Bubing Di 36 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 118 }
    location = 1305
    name     = "6th Army Corps"
    division =
    { id     = { type = 10700 id = 137 }
      name   = "Bubing Di 37 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 138 }
      name   = "Bubing Di 38 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 139 }
      name   = "Bubing Di 39 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 122 }
    location = 1375
    name     = "8th Army Corps"
    division =
    { id     = { type = 10700 id = 140 }
      name   = "Bubing Di 40 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 141 }
      name   = "Bubing Di 41 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 142 }
      name   = "Bubing Di 42 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 124 }
    location = 1292
    name     = "9th Army Corps"
    division =
    { id     = { type = 10700 id = 143 }
      name   = "Bubing Di 43 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 144 }
      name   = "Bubing Di 44 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 145 }
      name   = "Bubing Di 45 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 128 }
    location = 1354
    name     = "11th Army Corps"
    division =
    { id     = { type = 10700 id = 146 }
      name   = "Bubing Di 46 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 147 }
      name   = "Bubing Di 47 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 148 }
      name   = "Bubing Di 48 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 130 }
    location = 1382
    name     = "12th Army Corps"
    division =
    { id     = { type = 10700 id = 150 }
      name   = "Bubing Di 50 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 151 }
      name   = "Bubing Di 51 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 149 }
      name   = "Bubing Di 49 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 109 }
    location = 1312
    name     = "22nd Army Corps"
    division =
    { id     = { type = 10700 id = 152 }
      name   = "Bubing Di 52 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 153 }
      name   = "Bubing Di 53 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 154 }
      name   = "Bubing Di 54 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 112 }
    location = 1291
    name     = "Northern Army"
    division =
    { id     = { type = 10700 id = 155 }
      name   = "Bubing Di 55 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 169 }
      name   = "Bubing Di 69 Shi"
      type   = infantry
      model  = 0
	  extra = artillery
	  brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 156 }
      name   = "Bubing Di 56 Shi"
      type   = infantry
      model  = 0
	  extra = artillery
	  brigade_model = 1
    }
    division =
    { id     = { type = 10700 id = 158 }
      name   = "Bubing Di 57 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 166 }
      name   = "North Army HQ"
      type   = hq
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10700 id = 159 }
    location = 1383
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10700 id = 160 }
      name   = "Qibing Di'1 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10700 id = 161 }
     name   = "Qibing Di'2 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10700 id = 162 }
      name   = "Qibing Di'3 Shi"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10700 id = 163 }
    location = 1300
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10700 id = 164 }
      name   = "Qibing Di'4 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10700 id = 165 }
     name   = "Qibing Di'5 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10700 id = 167 }
      name   = "Qibing Di'6 Shi"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10700 id = 132 }
    location = 1365
    name     = "13th Militia"
    division =
    { id     = { type = 10700 id = 133 }
      name   = "Minbing Di 13 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 170 }
      name   = "Minbing Di 69 Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10700 id = 171 }
      name   = "Minbing Di 68 Shi"
      type   = militia
      model  = 0
    }
  }
  #Air Force
  airunit =
  { location = 1369
    base     = 1369
    id       = { type = 10500 id = 104 }
    name     = "Chinese Air Force"
    division =
    { id     = { type = 10500 id = 105 }
      name   = "Di 1 Zhanshu Hongzhaji Dadui"
      type   = tactical_bomber
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 106 }
      name   = "Di 1 Jianjiji Dadui"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 107 }
    name     = "Chinese Navy"
    location = 1365
    base     = 1365
    division =
    { id     = { type = 10500 id = 108 }
      name   = "Di 1 Quzujian Dadui"
      type   = destroyer
      model  = 0
    }
  }
}
