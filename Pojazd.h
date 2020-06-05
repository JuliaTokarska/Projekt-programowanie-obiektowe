#pragma once
#include<string>
#include <iostream>
using namespace std;

enum Rodzaj{osobowy,ciezarowy,motocykl};
class Pojazd
{
private:
	int rok_produkcji;
	string marka;
	string kolor;
	string nr_rejstracyjny;
	
protected://chroniony(dostepny w klasie dziedziczonej)
	Rodzaj rodzaj;
	int ilosc_kol;
public: 
	Pojazd();
	Pojazd(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny);
	void Wyswietl_info();
	bool operator==(Pojazd prawy);
	Pojazd operator=(Pojazd* pojazd);
	Rodzaj zwroc_rodzaj();
};

