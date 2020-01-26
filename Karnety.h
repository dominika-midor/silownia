#include <exception>
#include <string>
using namespace std;

#ifndef __Karnety_h__
#define __Karnety_h__

#include "Sta³y_klient.h"
// #include "Administrator.h"

class Sta³y_klient;
class Administrator;
class Karnety;

class Karnety
{private: 
 	int czas_zakupu;
	int okres_wa¿noœci;
	bool rabat;
	string kod;
public: 
 
    void kup_karnet(Staly_klient klient, bool rabat);
    void przedluz_karnet(Staly_klient klient, bool rabat);
    void sprawdz_kod_rabatowy(string kod);
};

#endif
