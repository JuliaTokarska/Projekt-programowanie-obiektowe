#include "Parking.h"
#include "Pietro.h"

Parking::Parking(int i_pieter):ilosc_pieter(i_pieter)//lista inicjalizacyjna 
{
	
	for (int i = 0; i < ilosc_pieter; i++)//wype³nienie tablicy
	{
		pietra[i] = new  Pietro(20);
	}
    Pojazd* osobowy = new Osobowy_samoch(2005, "Passat", "czerwony", "DKA32423");
    Pojazd* ciezarowy = new Ciezarowy_samoch(2011, "Volvo", "czarny", "DB34587");
    Pojazd* motocykl = new Motocykl(1999, "Yamaha", "czerowny", "DKARASZOW");
    ilosc_pojazdow = 3;
    zwrocPietro(1)->zaparkuj(osobowy);
    zwrocPietro(1)->zaparkuj(ciezarowy);
    zwrocPietro(1)->zaparkuj(motocykl);
}

Parking::~Parking()
{
}



void Parking::Wyswietl()
{	
	for (int i = 0; i < ilosc_pieter; i++) {
		cout << "Pietro " << i + 1 << ":" << endl;
		pietra[i].Wyswietl_atrybuty_pietra();
	}
}



bool Parking::DodajPietro(int rozmiar)
{
	if (ilosc_pieter > 20) {
		cout << "Za duzo pieter. Maksymalan ilosc to 20.";
		return true;
	}
	else {
		
		pietra[ilosc_pieter] = new Pietro(rozmiar);
		ilosc_pieter++;
		cout << "Dodano pietro na pozycje " << ilosc_pieter << endl<<endl;
		return false;
	}
}

Pietro* Parking::zwrocPietro(int a)//metoda zwracajaca tablice wskaznikow
{
	return &pietra[a-1];

}

void Parking::zaparkuj(int nr_pietra)
{
	pietra[nr_pietra - 1].zaparkuj(stworz_pojazd());
	return;
}

Pojazd* Parking::stworz_pojazd()
{
    int rok_produkcji;
    string marka;
    string kolor;
    string nr_rejstracyjny;
    cout << "Podaj rok produkcji:  ";
    cin >> rok_produkcji;
    cout << endl << "Podaj marke:  ";
    cin >> marka;
    cout << endl << "Podaj kolor:  ";
    cin >> kolor;
    cout << endl << "Podaj numer rejestracyjny:  ";
    cin >> nr_rejstracyjny;

    cout << "Jakiego typu pojazd?" << endl << "1.Samochod osobowy" << endl;
    cout << "2.Samochod ciezarowy" << endl << "3.Motocykl" << endl << endl;
    int wybor1;
    bool petla = true;
    cin >> wybor1;
    while (petla)
    {
        switch (wybor1)
        {
        case 1:
            pojazdy[ilosc_pojazdow] = new Osobowy_samoch(rok_produkcji, marka, kolor, nr_rejstracyjny);
            //rzutowanie(niejawna konwersja typu Osobowy_samoch na typ Pojazd)
            petla = false;
            break;
        case 2:
            pojazdy[ilosc_pojazdow] = new Ciezarowy_samoch(rok_produkcji, marka, kolor, nr_rejstracyjny);
            petla = false;
            break;
        case 3:
            pojazdy[ilosc_pojazdow] = new Motocykl(rok_produkcji, marka, kolor, nr_rejstracyjny);
            petla = false;
            break;

        default:
            cout << "Wybierz liczbe 1, 2 lub 3" << endl;
            break;
        }
    }

    ilosc_pojazdow++;
    return &pojazdy[ilosc_pojazdow - 1];
}

