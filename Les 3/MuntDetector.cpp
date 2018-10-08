#include <iostream>
#include "MuntDetector.h"


void MuntDetector::detectMunt(Munt a) {
	std::cout << "It's some sort of curious coin..." << std::endl;
	a.eatCoin();
}

void MuntDetector::detectMunt(Euro b) {
	std::cout << "I have ingested one Euro." << std::endl;
	b.eatCoin();
}

void MuntDetector::detectMunt(FiftyCent c) {
	std::cout << "I have ingested a mere fifty Eurocents." << std::endl;
	c.eatCoin(); 
}

void MuntDetector::detectMunt(Koffiemuntje d) {
	std::cout << "Congratulations! You have won all the coffees I'm able to make!" << std::endl;
	d.eatCoin();
}

