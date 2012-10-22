#####################
# Country main data #
#####################

country =
{ tag                    = U08
  puppet		 = GER
  capital                = 1415
#Medium Power
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 50
  manpower               = 134
  transports             = 100
  escorts                = 10
  peacetime_ic_mod = 0.6
	diplomacy =
  { relation = { tag = GER value = 200 }
    relation = { tag = UAU value = 50 }
    relation = { tag = CHI value = -100 }
    relation = { tag = JAP value = 100 }
    relation = { tag = IND value = 75 }
  }
	nationalprovinces	= {
		#rangoon
		1415
	}
	ownedprovinces	= {
		1639 1640 1635 1637 1636 1638 1648 1651 1649 1654 1653 1655 1656 1643 1619 1644 1645
		1615 1657 1660 1658 1659 1620 1621 1622 1616 1599 1600 1641 1601 1642 1595 1596 1598
		1597
		1634  1647 1646
		1652
		1650 1618 1594
		#siam
		1430 1429 1424 1423 1426 1425 1431 #1428
		#Malaysia
		1442 1411 1406 1407 1408 1409 1420 1419
		1415 1410 1417 1416 1412 1413 1418 1458 1414 
		1433 1434 1435 1436 1437 1438
		1441 #1440 #1455
		#timor
		1617
		#uk
		1583 1582 1581 1586 1585 1584 1588 1589 1590 1591 1592 1593
		#jap
		1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1682 1684 1685 1686 #Pacific Island
		1683 #Guam
		#new guinea
		1234 1602 1603 1604 1605 1606 1607 1608 1609 1610
		#busmarck archipelago
		1724 1725 1726 1727
		#solomons
		1587
		#bengal
		#1450
	}
	controlledprovinces	= {
		1639 1640 1635 1637 1636 1638 1648 1651 1649 1654 1653 1655 1656 1643 1619 1644 1645
		1615 1657 1660 1658 1659 1620 1621 1622 1616 1599 1600 1641 1601 1642 1595 1596 1598
		1597
		1634  1647 1646
		1652
		1650 1618 1594
		#siam
		1430 1429 1424 1423 1426 1425 1431 #1428
		#Malaysia
		1442 1411 1406 1407 1408 1409 1420 1419
		1415 1410 1417 1416 1412 1413 1418 1458 1414 
		1433 1434 1435 1436 1437 1438
		1441 #1440 #1455
		#timor
		1617
		#uk
		1583 1582 1581 1586 1585 1584 1588 1589 1590 1591 1592 1593
		#jap
		1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1682 1684 1685 1686 #Pacific Island
		1683 #Guam
		#new guinea
		1234 1602 1603 1604 1605 1606 1607 1608 1609 1610
		#busmarck archipelago
		1724 1725 1726 1727
		#solomons
		1587
		#bengal
		#1450
	}
	claimedprovinces	= {
		1639 1640 1635 1637 1636 1638 1648 1651 1649 1654 1653 1655 1656 1643 1619 1644 1645
		1615 1657 1660 1658 1659 1620 1621 1622 1616 1599 1600 1641 1601 1642 1595 1596 1598
		1597
		1634  1647 1646
		1652
		1650 1618 1594
		#siam
		1430 1429 1424 1423 1426 1425 1431 #1428
		#Malaysia
		1442 1411 1406 1407 1408 1409 1420 1419
		1415 1410 1417 1416 1412 1413 1418 1458 1414 
		1433 1434 1435 1436 1437 1438
		1441 1440 #1455
		#timor
		1617
		#uk
		1583 1582 1581 1586 1585 1584 1588 1589 1590 1591 1592 1593
		#jap
		1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1682 1684 1685 1686 #Pacific Island
		1683 #Guam
		#new guinea
		1234 1602 1603 1604 1605 1606 1607 1608 1609 1610
		#busmarck archipelago
		1724 1725 1726 1727
		#solomons
		1587
		#bengal
		1450
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
	#2460 #Early Flak

	##Industry##
	5080 #Basic Construction
	5310 #Census Tabulating

	##Infantry##
	1010 #Great War Infantry
	1190 #Great War Cavalry
	1200 #Early Cavalry
	
	1110 #Early Mountaineer

	##Land Doctrines##
	6030 #Grand Battleplan
	6560 #Defensive focus
	
	##Naval Doctrines##
	8010 #Decisive Battle
	8020 #Naval Firepower
	
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
	3250 #GW Battleship
	3260 #Early Battleship
	3400 #Dive Boat
	3410 #Short Range Sub
	
	3810 #Troopship
  }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic 	      = 3
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 109001 }
  headofgovernment       = { type = 9 id = 109064 }
  foreignminister        = { type = 9 id = 109067 }
  armamentminister       = { type = 9 id = 109022 }
  ministerofsecurity     = { type = 9 id = 109028 }
  ministerofintelligence = { type = 9 id = 109034 }
  chiefofstaff           = { type = 9 id = 109069 }
  chiefofarmy            = { type = 9 id = 109043 }
  chiefofnavy            = { type = 9 id = 109049 }
  chiefofair             = { type = 9 id = 109052 }
  #Army
  landunit =
  { id       = { type = 10000 id = 570 }
    location = 1423
    name     = "1st Colonial Cavalry"
    division =
    { id     = { type = 10000 id = 571 }
      name   = "1. Kavalleriedivision"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 572 }
    location = 1410
    name     = "2nd Colonial Cavalry"
    division =
    { id     = { type = 10000 id = 573 }
      name   = "2. Kavalleriedivision"
      type   = cavalry
      model  = 1
    }
  }
  landunit =
  { id       = { type = 10000 id = 574 }
    location = 1647
    name     = "1st Colonial Militia"
    division =
    { id     = { type = 10000 id = 575 }
      name   = "1. Landesschützendivision"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 576 }
    location = 1670
    name     = "2nd Colonial Militia"
    division =
    { id     = { type = 10000 id = 577 }
      name   = "1. Sicherungsdivision"
      type   = garrison
      model  = 0
	  strength = 35
	  #locked = yes
    }
  }
  landunit =
  { id       = { type = 10000 id = 578 }
    location = 1602
    name     = "3rd Colonial Militia"
    division =
    { id     = { type = 10000 id = 579 }
      name   = "3. Landesschützendivision"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 580 }
    location = 1657
    name     = "4th Colonial Militia"
    division =
    { id     = { type = 10000 id = 581 }
      name   = "4. Landesschützendivision"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 582 }
    location = 1636
    name     = "5th Colonial Militia"
    division =
    { id     = { type = 10000 id = 583 }
      name   = "5. Landesschützendivision"
      type   = militia
      model  = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 584 }
    location = 1415
    name     = "6th Colonial Militia"
    division =
    { id     = { type = 10000 id = 585 }
      name   = "6. Landesschützendivision"
      type   = militia
      model  = 0
    }
  }
  #Air Force
  airunit =
  { location = 1647
    base     = 1647
    id       = { type = 10500 id = 616 }
    name     = "Colonial Air Force"
    division =
    { id     = { type = 10500 id = 617 }
      name   = "Fliegergruppe 1"
      type   = interceptor
      model  = 1
    }
  }
  #Navy
  navalunit =
  { id       = { type = 10500 id = 618 }
    name     = "Colonial Navy"
    location = 1647
    base     = 1647
    division =
    { id     = { type = 10500 id = 619 }
      name   = "1. Truppentransport Flotilla"
      type   = transport
      model  = 0
    }
    division =
    { id     = { type = 10500 id = 620 }
      name   = "KMS Bangkok"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 621 }
      name   = "KMS Batavia"
      type   = light_cruiser
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 622 }
      name   = "1. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 623 }
      name   = "2. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
    division =
    { id     = { type = 10500 id = 624 }
      name   = "3. Zerstörergeschwader"
      type   = destroyer
      model  = 1
    }
  }

}
