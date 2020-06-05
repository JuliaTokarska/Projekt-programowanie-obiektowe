

#include <iostream>
#include "Parking.h"

using namespace std;



void wyswietl_menu()
{
    cout << "MENU:" << endl;
    cout << "1. Wyswietl aktualny stan danych." << endl;
    cout << "2. Dodaj pietro." << endl;
    cout << "3. Stworz i zaparkuj samochod." << endl;
    cout << "4. Wyparkuj samochod." << endl;
    cout << "5. Zakoncz program." << endl;
    cout << "Podaj numer dzialania, ktore chcesz wykonac: " << endl;
    return;
}



int main()
{
    Parking* parking = new Parking(3);//3 to ilosc pieter podczas tworzenia parkingu
    bool petla1 = true;
    while (petla1)
    {
        int numer1=0;
        wyswietl_menu();
        int rozmiar_pietra;
        int nr_pietra = 0;
        int nr_miejsca = 0;
        cin >> numer1;
        switch (numer1)
        {
        case 1:
            parking->Wyswietl();
            break;
        case 2:
            cout << "Podaj ilosc miejsc parkingowych na pietrze:  " << endl;
            cin >> rozmiar_pietra;
            parking->DodajPietro(rozmiar_pietra);
            break;
        case 3:
            cout << "Na jaki pietrze zaparkowac?"<<endl;
            cin >> nr_pietra;
            cout << endl;
            parking->zaparkuj(nr_pietra);
            break;
        case 4:
            cout << "Z jakiego pietra wyparkowac?" << endl;
            cin >> nr_pietra;
            cout << "Z jakiego miejsca wyparkowac?" << endl;
            cin >> nr_miejsca;
            cout << endl;
            parking->zwrocPietro(nr_pietra)->zwolnij_miejsce(nr_miejsca);
            break;
        case 5:
            petla1 = false;
            cout << "program zakonczony";
            break;
        

        }
    }
    return 0;
}

