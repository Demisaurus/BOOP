#pragma once
#include "Munt.h"

class Euro : public Munt {
	public:
		void eatCoin() override;
};