#####################
# Country main data #
#####################

country =
{ tag                    = CYN
  regular_id             = UCH
  ai = "china yuan.ai"
  capital                = 1337
#Large Power
  energy                 = 800
  metal                  = 800
  rare_materials         = 400
  oil                    = 400
  supplies               = 400
  money                  = 70
  manpower               = 861
  transports             = 40
  escorts                = 0
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2 #3
    political_left    = 4
    freedom           = 3
    free_market       = 5 #6
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
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
 #1120 1124 1125 1123 1121 1122
 
 #tannu tuva
 #1119

                             }
   ownedprovinces         = {
 #Nationalist China at start 1356
 1333 1261   1339  1334 1336 1340 1341 1319  1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360   1353 1318 1355 1309    1310  1304   1302  1296 1297 1298    1313 1307  1308  1356  1349     1335    1314 1315    1267    1320   1299  1343   1301 1350 1351 1352
 1327 1328 1329 1330 1331 1332 1321 1323 1241 1247 1242 1243 1244
    #Communist China at start
	1259 1260 1255
	#shanxi
	1251  1254  1252 1253 1248 1249 1250 1238 1239 1257 1258
	#xibei
	1268 1256 1269 1270 1271 1264 1263 1262 1272 1265 1266 1283 1284
	1236 1237 1240 1246 1216 1235 1245
	#mongolia
	#1124 1123 1125 1121 1122 1120 1119
	}
   # Fujian
   controlledprovinces    = {
 #Nationalist China at start 1356
 1333 1261  1339  1334 1336 1340 1341 1319  1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360   1353 1318 1355 1309    1310  1304   1302  1296 1297 1298    1313 1307  1308  1356  1349     1335    1314 1315    1267    1320   1299  1343   1301 1350 1351 1352
 1327 1328 1329 1330 1331 1332 1321 1323 1241 1247 1242 1243 1244
    #Communist China at start
	1259 1260 1255
	#shanxi
	1251  1254  1252 1253 1248 1249 1250 1238 1239 1257 1258
	#xibei
	1268 1256 1269 1270 1271 1264 1263 1262 1272 1265 1266 1283 1284
	1236 1237 1240 1246 1216 1235 1245
	#mongolia
	#1124 1123 1125 1121 1122 1120 1119
	}
   techapps = {
	##Air Doctrines##
	9010 #Air Superiority
	9020 #Flying Circus
	9030 #Force Substitution

	##Aircraft##
	4010 #Interwar Fighter
	4120 #Interwar Bomber

	##Armor##
	2290 #GW Light Artillery
	2300 #GW Medium Artillery
	#2450 #GW Flak

	##Industry##
	5080 #Basic Construction

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	
	1200 #Early Cavalry
	1310 #Rear Area Supply

	##Land Doctrines##
	#6570 #Manpower Focus
	
	#6030 #Grand Battleplan
	#6560 #defensive focus

	##Naval Tech##
	3010 #GW Destroyer
	3070 #GW Light Cruiser
	3130 #GW Heavy Cruiser
	3250 #GW Battleship
	
	3020 #Early Destroyer
	3080 #Early Light Cruiser
	3810 #Troopship
  }
  peacetime_ic_mod = 0.7
	diplomacy =
  { relation = { tag = JAP value = -100 }
    relation = { tag = TUR value = 125 }
    relation = { tag = CHI value = -200 }
  }
  headofstate            = { type = 9 id = 501021 }
  headofgovernment       = { type = 9 id = 501032 }
  foreignminister        = { type = 9 id = 501013 }
  armamentminister       = { type = 9 id = 501034 }
  ministerofsecurity     = { type = 9 id = 501015 }
  ministerofintelligence = { type = 9 id = 501057 }
  chiefofstaff           = { type = 9 id = 501017 }
  chiefofarmy            = { type = 9 id = 501038 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501050 }
  #Army
  landunit =
  { id       = { type = 10001 id = 762 }
    location = 1360
    name     = "1st Cavalry Corps"
    division =
    { id     = { type = 10001 id = 763 }
      name   = "Qibing Di'1 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 764 }
      name   = "Qibing Di'2 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 765 }
      name   = "Qibing Di'3 Shi"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 766 }
    location = 1352
    name     = "2nd Cavalry Corps"
    division =
    { id     = { type = 10001 id = 767 }
      name   = "Qibing Di'4 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 768 }
      name   = "Qibing Di'5 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 769 }
      name   = "Qibing Di'6 Shi"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 770 }
    location = 1337
    name     = "Army of the Yuan Emperor"
    division =
    { id     = { type = 10001 id = 771 }
      name   = "Di'1 Shi"
      type   = infantry
      model  = 0
	  extra = artillery
	  brigade_model = 1
    }
    division =
    { id     = { type = 10001 id = 772 }
      name   = "Di'2 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 773 }
      name   = "Di'3 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 719 }
      name   = "Yuan Army Headquarters"
      type   = hq
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 774 }
    location = 1360
    name     = "1st Border Guards"
    division =
    { id     = { type = 10001 id = 775 }
      name   = "1. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 761 }
      name   = "31. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 760 }
      name   = "30. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 776 }
    location = 1246
    name     = "2nd Army Corps"
    division =
    { id     = { type = 10001 id = 777 }
      name   = "Di'77 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 759 }
      name   = "Di'59 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 758 }
      name   = "Di'58 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 778 }
    location = 1357
    name     = "3rd Army Corps"
    division =
    { id     = { type = 10001 id = 779 }
      name   = "Di'79 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 756 }
      name   = "Di'56 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 757 }
      name   = "Di'57 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 780 }
    location = 1242
    name     = "4th Army Corps"
    division =
    { id     = { type = 10001 id = 781 }
      name   = "Di'81 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 755 }
      name   = "Di'55 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 754 }
      name   = "Di'54 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 782 }
    location = 1351
    name     = "5th Army Corps"
    division =
    { id     = { type = 10001 id = 783 }
      name   = "Di'83 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 753 }
      name   = "Di'53 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 752 }
      name   = "Di'52 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 784 }
    location = 1355
    name     = "6th Border Guards"
    division =
    { id     = { type = 10001 id = 785 }
      name   = "6. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 751 }
      name   = "34. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 750 }
      name   = "35. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 786 }
    location = 1308
    name     = "7th Border Guards"
    division =
    { id     = { type = 10001 id = 787 }
      name   = "7. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 749 }
      name   = "36. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 748 }
      name   = "37. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 788 }
    location = 1310
    name     = "3rd Cavalry Corps"
    division =
    { id     = { type = 10001 id = 789 }
      name   = "Qibing Di'7 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 747 }
      name   = "Qibing Di'8 Shi"
      type   = cavalry
      model  = 1
    }
    division =
    { id     = { type = 10001 id = 746 }
      name   = "Qibing Di'9 Shi"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 790 }
    location = 1307
    name     = "9th Border Guards"
    division =
    { id     = { type = 10001 id = 791 }
      name   = "9. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 745 }
      name   = "40. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 744 }
      name   = "41. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 792 }
    location = 1304
    name     = "10th Border Guards"
    division =
    { id     = { type = 10001 id = 793 }
      name   = "10. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 743 }
      name   = "42. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 742 }
      name   = "43. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 794 }
    location = 1298
    name     = "11th Border Guards"
    division =
    { id     = { type = 10001 id = 795 }
      name   = "11. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 741 }
      name   = "44. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 740 }
      name   = "45. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 796 }
    location = 1284
    name     = "12th Border Guards"
    division =
    { id     = { type = 10001 id = 797 }
      name   = "12. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 739 }
      name   = "46. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 738 }
      name   = "47. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 798 }
    location = 1283
    name     = "13th Border Guards"
    division =
    { id     = { type = 10001 id = 799 }
      name   = "13. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 737 }
      name   = "48. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 736 }
      name   = "49. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 800 }
    location = 1262
    name     = "14th Border Guards"
    division =
    { id     = { type = 10001 id = 801 }
      name   = "14. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 735 }
      name   = "50. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 734 }
      name   = "51. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 802 }
    location = 1297
    name     = "15th Border Guards"
    division =
    { id     = { type = 10001 id = 803 }
      name   = "15. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 733 }
      name   = "52. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 732 }
      name   = "53. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 804 }
    location = 1237
    name     = "16th Border Guards"
    division =
    { id     = { type = 10001 id = 805 }
      name   = "16. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 731 }
      name   = "54. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 730 }
      name   = "55. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 806 }
    location = 1235
    name     = "17th Border Guards"
    division =
    { id     = { type = 10001 id = 807 }
      name   = "17. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 729 }
      name   = "56. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 728 }
      name   = "55. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 810 }
    location = 1241
    name     = "Tianjin Corps"
    division =
    { id     = { type = 10001 id = 811 }
      name   = "Di'7 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 727 }
      name   = "Di'8 Shi"
      type   = infantry
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 726 }
      name   = "Di'9 Shi"
      type   = infantry
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 812 }
    location = 1309
    name     = "20th Border Guards"
    division =
    { id     = { type = 10001 id = 813 }
      name   = "20. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 725 }
      name   = "61. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 724 }
      name   = "62. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 814 }
    location = 1349
    name     = "21st Border Guards"
    division =
    { id     = { type = 10001 id = 815 }
      name   = "21. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 723 }
      name   = "64. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 722 }
      name   = "63. Min Shi"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10001 id = 808 }
    location = 1296
    name     = "18th Border Guards"
    division =
    { id     = { type = 10001 id = 809 }
      name   = "18. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 721 }
      name   = "57. Min Shi"
      type   = militia
      model  = 0
    }
    division =
    { id     = { type = 10001 id = 720 }
      name   = "58. Min Shi"
      type   = militia
      model  = 0
    }
  }
  #Air Force
  airunit =
  { location = 1345
    base     = 1345
    id       = { type = 10500 id = 882 }
    name     = "Yuan Air Force"
    division =
    { id     = { type = 10500 id = 883 }
      name   = "1. Zhandouji Dadui"
      type   = interceptor
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 884 }
      name   = "2. Zhandouji Dadui"
      type   = interceptor
      model  = 0
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 885 }
    name     = "Transport Fleet"
    location = 1241
    base     = 1241
    division =
    { id     = { type = 10500 id = 886 }
      name   = "1. Yunshuji Dadui"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 887 }
      name   = "2. Yunshuji Dadui"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 888 }
      name   = "3. Yunshuji Dadui"
      type   = transport
      model  = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 889 }
    name     = "Yuan Navy"
    location = 1338
    base     = 1338
    division =
    { id     = { type = 10500 id = 890 }
      name   = "Nan'Shin"
      type   = battleship
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 891 }
      name   = "Pao'Nim"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 892 }
      name   = "Chung'king"
      type   = heavy_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 893 }
      name   = "Hai'Shew"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 894 }
      name   = "Chao'Ho"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 895 }
      name   = "Hai'Cyn"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 896 }
      name   = "Ying'Swei"
      type   = light_cruiser
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 897 }
      name   = "1. Quzujian Dadui"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 898 }
      name   = "2. Quzujian Dadui"
      type   = destroyer
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 899 }
      name   = "3. Quzujian Dadui"
      type   = destroyer
      model  = 0
    }
   }
}
