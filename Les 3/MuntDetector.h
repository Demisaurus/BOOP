#pragma once

#include "Munt.h"
#include "Euro.h"
#include "FiftyCent.h"
#include "Koffiemuntje.h"

class MuntDetector {
	public:
		void detectMunt(Koffiemuntje d);

		void detectMunt(FiftyCent c);

		void detectMunt(Euro b);

		void detectMunt(Munt a);
};

