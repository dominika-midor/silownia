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
{
	private: int _czas_zakupu;
	private: int _okres_wa¿noœci;
	private: bool _rabat;
	private: string _kod;
	public: Sta³y_klient* _unnamed_Sta³y_klient_;
	public: Administrator* _unnamed_Administrator_;

	public: void kup_karnet(Sta³y_klient aKlient, string aRabat);

	public: void przed³u¿_karnet(Sta³y_klient aKlient, string aRabat);

	public: void sprawdz_kod_rabatowy(string aKod);
};

#endif
