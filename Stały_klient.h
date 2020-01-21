#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Sta�y_klient_h__
#define __Sta�y_klient_h__

// #include "Karnety.h"
#include "Grupy.h"

class Karnety;
class Grupy;
class Sta�y_klient;

class Sta�y_klient
{
	private: string _email;
	private: string _has�o;
	public: Karnety* _unnamed_Karnety_;
	public: std::vector<Grupy*> _unnamed_Grupy_;

	public: void logowanie(string aEmail, string aHas�o);

	public: void przypomnij_has�o(string aEmail);
};

#endif
