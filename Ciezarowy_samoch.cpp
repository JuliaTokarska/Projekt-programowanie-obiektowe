#include "Ciezarowy_samoch.h"

Ciezarowy_samoch::Ciezarowy_samoch(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny)
:Pojazd(rok_produkcji,marka,kolor,nr_rejstracyjny)
{
	ilosc_kol = 6;//dla przykladu
	rodzaj = ciezarowy;
}//uzupelnienie rodzaju w konstruktorze