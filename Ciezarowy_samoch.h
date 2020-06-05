#pragma once
#include "Pojazd.h"
class Ciezarowy_samoch :public Pojazd//klasa dziedziczy z klasy Pojazd
{
public:
	Ciezarowy_samoch(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny);
};

