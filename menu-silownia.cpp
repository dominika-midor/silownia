
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
		cout << "1 - przegladaj dane klientow, 2- przegl¹daj dane grup" << endl;
		cin >> liczba2;
		break;
	case 3:
		cout << "Jestes w zakladce Trener" << endl;
		cout << "1 - utworz grupe" << endl;
		cin >> liczba2;
		break;
	default:
		cout << "Jestes niezalogowany" << endl;
		cout << "1 - zarejestruj sie, 2- przegl¹daj oferte" << endl;
		cin >> liczba2;
		break;
	}
	return 0;

	system("pause");

   
}

