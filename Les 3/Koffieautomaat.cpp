// SlotDemi_BOOP_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Munt.h"
#include "Euro.h"
#include "FiftyCent.h"
#include "Koffiemuntje.h"

int main()
{
	Munt munt = Munt();
	Euro euro = Euro();
	FiftyCent fiftycent = FiftyCent();
	Koffiemuntje koffiemuntje = Koffiemuntje();

	MuntDetector detector;
	detector.detectMunt(munt);
	detector.detectMunt(euro);
	detector.detectMunt(fiftycent);
	detector.detectMunt(koffiemuntje);

	char pietjepuk;
	std::cin >> pietjepuk;

	return 0;
}

