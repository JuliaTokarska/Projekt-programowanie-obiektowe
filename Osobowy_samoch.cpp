#include "Osobowy_samoch.h"

Osobowy_samoch::Osobowy_samoch(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny)
	:Pojazd(rok_produkcji, marka, kolor,nr_rejstracyjny)//lista inicjalizacyjna
									//(przekazanie argumentow do konstruktora pojazdu)
{
	ilosc_kol = 4;
	rodzaj = osobowy;
}
