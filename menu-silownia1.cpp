
#include <iostream>
#include <string>


using namespace std;


class Karnety;
class Grupy;
class Staly_klient;
class Nowy_klient;
class Trener;
class Administrator;



class Karnety{

private:
    int czas_zakupu;
    int okres_waznosci;
    bool rabat;
    string kod;
public:
    void kup_karnet(Staly_klient klient, bool rabat);
    void przedluz_karnet(Staly_klient klient, bool rabat);
    void sprawdz_kod_rabatowy(string kod);
};

class Grupy{

private:
    string nazwa;
    int Max;
    int Data;
public:
    void Zapisz_na_zajecia(Staly_klient klient);
};

class Staly_klient{
private:
    string email;
    string haslo;
public:
    void logowanie(string email, string haslo);
    void przypomnij_haslo (string email);

};

class Nowy_klient{
public:
    void Przegladaj_oferte();
    void Rejestracja();
};

class Trener{
private:
    string imie;
    string nazwisko;
    int ilosc_przepracowanych_godzin;
public:
    void utworz_grupe();
};

class Administrator
{
    void przegladaj_dane();
    void przegladaj_grupy();
    void stworz_plik();
};



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

	//system("pause");


}

