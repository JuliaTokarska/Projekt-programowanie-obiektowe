#pragma once
#include "Pojazd.h"
class Miejsce_parkingowe//deklaracja klasy
{
private:
	bool wolne = true;
	int nr_miejsca;
	Pojazd* pojazd;
public:
	Miejsce_parkingowe();
	Miejsce_parkingowe(int nr_miejsca);
	bool zaparkuj(Pojazd *pojazd);
	bool zwolnij_miejsce();
	bool zwroc_wolne();
	Pojazd zwroc_pojazd();
};

