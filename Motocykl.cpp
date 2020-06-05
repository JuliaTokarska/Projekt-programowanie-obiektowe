#include "Motocykl.h"


Motocykl::Motocykl(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny)
:Pojazd(rok_produkcji,marka,kolor,nr_rejstracyjny)
{
	ilosc_kol = 2;
	rodzaj = motocykl;
}
