#include "Miejsce_parkingowe.h"


Miejsce_parkingowe::Miejsce_parkingowe()//konstruktor domyslny
{
}

Miejsce_parkingowe::Miejsce_parkingowe(int nr_miejsca)//konstruktor
{
	this->nr_miejsca = nr_miejsca;
}
bool Miejsce_parkingowe::zaparkuj(Pojazd *pojazd)// zaparkuj pojazd na miejscu parkingowym
{
	
	this->pojazd = pojazd;
	wolne = false;
	return false;
}

bool Miejsce_parkingowe::zwolnij_miejsce()
{
	wolne = true;
	return false;
}

bool Miejsce_parkingowe::zwroc_wolne()
{
	return wolne;
}

Pojazd Miejsce_parkingowe::zwroc_pojazd()
{
	return *pojazd;
}
