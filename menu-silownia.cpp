
#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{

	int liczba;
	int liczba2;
	cout << "Wybierz: 1 - staly klient, 2 - administrator, 3 - trener" << endl;
	cin >> liczba;
	switch (liczba){
	case 1:
		cout << "Jestes w zakladce Staly klient" << endl;
		cout << "1 - zaloguj sie, 2- przypomnij haslo" << endl<<endl;
		cin >> liczba2;
		switch (liczba2) {
		case 1:

			cout << "Podaj email" << endl;
			cin >> mail;
			cout << "Podaj haslo" << endl;
			cin >> haslo;

			// Nowy_klient.logowanie(email,haslo);

			cout << "Zalogowałeś się. Dalej możesz:" << endl;
			cout << "->Kupić karnet" << endl << "->przedluzyć karnet" << endl<< "->zapisać sie na zajecia" << endl;

			break;

		case 2:
			string haslo_tymczasowe = "123";
			string podane_haslo;
			cout << "Podaj email" << endl;
			cin >> mail;
			//  if( mail) Stały_klient->przypomnij_hasło( mail); 
			//  else cout<< "nie ma takiego konta";

			 cout << "Wygenerowano haslo tymczasowe (123). Podaj otrzymane hasło." << endl;
			 cin >> podane_haslo;
			 if (podane_haslo == haslo_tymczasowe) cout << "Zalogowano pomyślnie." << endl;
			 else cout << "Spróbuj ponownie" << endl;
			break;
		};
		break;
			
	case 2:
		cout << "Jestes w zakladce Administrator" << endl;
		cout << "1 - przegladaj dane klientow, 2- przeglądaj dane grup" << endl;
		cin >> liczba2;
		switch (liczba2) {
		case 1:
			
			int a;
			cout << "Dane klientów. Czy zapisać raport? 1- Tak, 2- Nie" << endl;
				// Administrator->przeglądajDane();
			cin >> a;
			if (a == 1) {
				// Administrator->stwórz_plik();
				cout << "Zapisano" << endl;
			}
			else cout << "Nie zapisano";
			break;
		case 2:
			int a;
			cout << "Dane grup. Czy zapisać raport? 1- Tak, 2- Nie" << endl;
				// Administrator->przeglądajGrupy();
			cin >> a;
			if (a ==1) {
				// Administrator->stwórz_plik();
				cout << "Zapisano" << endl;
			}
			else cout << "Nie zapisano";
			break;
		}
	break;
	case 3:
		cout << "Jestes w zakladce Trener" << endl;
		cout << "1 - utworz grupe" << endl;
		cin >> liczba2;
		if (liczba2 == 1) {
			// Trener->stworzGrupe();
			cout << "Utworzono grupę" << endl;
			}
	break;
	default:
		cout << "Jestes niezalogowany" << endl;
		cout << "1 - zarejestruj sie, 2- przeglądaj oferte" << endl;
		cin >> liczba2;
		
		switch (liczba2) {
		case 1:
			/*
			string imie, haslo;
			Stały_klient *Gość = new  Stały_klient;
			cout << "Podaj email" << endl;
			cin >> imie;
			cout << "Podaj haslo" << endl;
			cin >> haslo;
			break;
			*/
			break;
		case 2:
			cout << "Wyświetla dane grup" << endl;
			//cout<< Grupy->nazwa<<"Ilosc miejsc: << Grupy->max;
			break;
		}
	}
	return 0;

	system("pause");

   
}

