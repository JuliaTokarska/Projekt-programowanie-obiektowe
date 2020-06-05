#pragma once
#include "Pietro.h"
class Parking
{
private:
	int ilosc_pieter;
	Pietro* pietra = new Pietro[20];
	Pojazd* pojazdy = new Pojazd[200];
	int ilosc_pojazdow = 0;
public:
	Parking(int i_pieter);
	~Parking();
	Pojazd* stworz_pojazd();
	void Wyswietl();
	bool DodajPietro(int rozmiar);
	Pietro* zwrocPietro(int a);
	void zaparkuj(int nr_pietra);
	
	

};

