#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Pojazd.h"
#include"Ciezarowy_samoch.h"
#include"Osobowy_samoch.h"
#include"Motocykl.h"
#include "Miejsce_parkingowe.h"
#define MAX 100
using namespace std;


class Pietro
{
private:
	int ilosc_miejsc;
	int ilosc_zajetych;
	int ilosc_wolnych;
	int ostatnie_zajete;
	const int maksymalna_wielkosc = MAX;
	Miejsce_parkingowe* miejsca_parking = new Miejsce_parkingowe[maksymalna_wielkosc];
public:
	Pietro();
	Pietro(int ilosc_miejsc);
	void Wyswietl_atrybuty_pietra();
	void wyswietl_miejsce_parking(int i);
	bool virtual zaparkuj(Pojazd *pojazd);
	bool zwolnij_miejsce(int miejsce);
	bool zwolnij_miejsce(Pojazd pojazd);
	Pietro operator=(Pietro* pietro);
};

