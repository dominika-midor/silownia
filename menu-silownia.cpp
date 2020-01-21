// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

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
	switch (liczba)
	{
	case 1:
		cout << "Jestes w zakladce Staly klient" << endl;
		cout << "1 - zaloguj sie, 2- przypomnij haslo" << endl;
		cin >> liczba2;
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

