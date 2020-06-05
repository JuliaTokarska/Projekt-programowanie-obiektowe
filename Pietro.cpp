#include "Pietro.h"


Pietro::Pietro()
{
}



Pietro::Pietro(int ilosc_miejsc)//konstruktor Pietra
{
	this->ilosc_miejsc = ilosc_miejsc;//przypisanie argumentu do pola obiektu
	this->ilosc_wolnych = ilosc_miejsc;
	this->ilosc_zajetych = 0;
	this->ostatnie_zajete = 0;
	for (int i = 0; i < ilosc_miejsc; i++)//wype³nienie tablicy
	{
		Miejsce_parkingowe miejsce(i);
		miejsca_parking[i] = miejsce;//przypisanie numerowanych miejsc do tablicy
	}
}

void Pietro::Wyswietl_atrybuty_pietra()
{
	cout << "	Ilosc wszystkich miejsc: " << ilosc_miejsc << endl;
	cout << "	Ilosc wolnych miejsc: " << ilosc_wolnych << endl;
	cout << "	Ilosc zajetych miejsc: " << ilosc_zajetych << endl << endl;
	for (int i = 0; i < ostatnie_zajete; i++) {
		cout << "	Miejsce " << i + 1 << ":" << endl;
		if(miejsca_parking[i].zwroc_wolne() == false)
		miejsca_parking[i].zwroc_pojazd().Wyswietl_info();//wyswietlanie informacji o pojazdach 
		//zaparkowanych na parkingu
	}
	

}
void Pietro::wyswietl_miejsce_parking(int i)
{
	
	cout << "	Miejsce parkingowe " << i << endl;
	i--;
	miejsca_parking[i].zwroc_pojazd().Wyswietl_info();
}
bool Pietro::zaparkuj(Pojazd *pojazd)//fukcja lokuj¹ca nowy samochod na pierwsze wolne miejsce w tablicy
{
	if (ilosc_wolnych > 0)
	{	
		for (int i = 0; i < ilosc_miejsc; i++) 
		{	
			if (miejsca_parking[i].zwroc_wolne()) //sprawdzam czy jest wolne
			{
				miejsca_parking[i].zaparkuj(pojazd);//jezeli tak to parkuje samochod
				ilosc_wolnych--;
				ilosc_zajetych++;
				ostatnie_zajete++;
				return false;
			}

		}
	}

	cout << "B³ad parkowania.";
	return true;
}
bool Pietro::zwolnij_miejsce(Pojazd pojazd)// w argumencie przekazuje,jakie auto chce "wyparkowac"
{
	for (int i = 0; i < ilosc_miejsc; i++)
	{
	if (miejsca_parking[i].zwroc_wolne() == false)//sprawdz tylko zajete miejsca
		{
			if (pojazd == miejsca_parking[i].zwroc_pojazd())//porownanie pojazdow
			{
				miejsca_parking[i].zwolnij_miejsce();//jezeli sa takie same to zwolnij miejsce
				ilosc_wolnych++;
				ilosc_zajetych--;
			}
		}
	}
	return false;
}

Pietro Pietro::operator=(Pietro* pietro)
{
	this->ilosc_miejsc = pietro->ilosc_miejsc;
	this->ilosc_wolnych = pietro->ilosc_wolnych;
	this->ilosc_zajetych = pietro->ilosc_zajetych;
	this->miejsca_parking = pietro->miejsca_parking;
	this->ostatnie_zajete = pietro->ostatnie_zajete;
	return *this;
}



bool Pietro::zwolnij_miejsce(int miejsce)//zwalnianie miejsca na podstawie numeru miejsca parkingowego
{
	
	miejsca_parking[miejsce-1].zwolnij_miejsce();
	ilosc_wolnych++;
	ilosc_zajetych--;
	return false;
}


