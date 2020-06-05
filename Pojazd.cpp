#include "Pojazd.h"
#include <string>


Pojazd::Pojazd()
{
}

Pojazd::Pojazd(int rok_produkcji, string marka, string kolor, string nr_rejstracyjny)
{
	this->rok_produkcji = rok_produkcji;
	this->marka = marka;
	this->kolor = kolor;
	this->nr_rejstracyjny = nr_rejstracyjny;//pelni funkcje listy inicjalizacyjnej

}

void Pojazd::Wyswietl_info() 
{	
	cout << "		Rok produkcji: " << rok_produkcji << endl;
	cout << "		Marka: " << marka << endl;
	cout << "		Kolor: " << kolor << endl;
	cout << "		Nr rejstracyjmy: " << nr_rejstracyjny << endl;
	cout << "		Ilosc kol:" << ilosc_kol << endl;
	if (rodzaj == 0)	cout << "		Rodzaj: Osobowy "  << endl;
	if (rodzaj == 1)	cout << "		Rodzaj: Ciezarowy "  << endl;
	if (rodzaj == 2)	cout << "		Rodzaj: Motocykl " << endl;
	cout << endl;
}
bool Pojazd::operator==(Pojazd prawy) //przeciazenie operatora porownania
{
	if (this->nr_rejstracyjny == prawy.nr_rejstracyjny)return true;//porownuje nr.rej poniewa¿ ka¿de auto swoj wlasmy niepowtarzalny
	else return false;
}

Pojazd Pojazd::operator=(Pojazd *pojazd)//przeciazenie operatora przypisania
{	
	this->kolor = pojazd->kolor;
	this->marka = pojazd->marka;
	this->nr_rejstracyjny = pojazd->nr_rejstracyjny;
	this->rodzaj = pojazd->rodzaj;
	this->ilosc_kol = pojazd->ilosc_kol;
	this->rok_produkcji = pojazd->rok_produkcji;

	return *this;
}

Rodzaj Pojazd::zwroc_rodzaj()
{
	return rodzaj;
}
