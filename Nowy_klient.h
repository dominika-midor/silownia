#include <exception>
using namespace std;

#ifndef __Nowy_klient_h__
#define __Nowy_klient_h__

#include "Sta�y_klient.h"

// class Sta�y_klient;
class Nowy_klient;

__abstract class Nowy_klient: public Sta�y_klient, public Sta�y_klient
{

	public: void przegl�daj_oferte();

	public: void rejestracja();
};

#endif
