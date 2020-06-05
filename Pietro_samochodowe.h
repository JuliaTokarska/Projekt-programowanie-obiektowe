#pragma once
#include "Pietro.h"
#include "Pojazd.h"
class Pietro_samochodowe :public Pietro//dziedziczy z Pietro
{public:
	bool virtual zaparkuj(Pojazd pojazd);

};

