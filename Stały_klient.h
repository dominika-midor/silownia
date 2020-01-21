#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Sta造_klient_h__
#define __Sta造_klient_h__

// #include "Karnety.h"
#include "Grupy.h"

class Karnety;
class Grupy;
class Sta造_klient;

class Sta造_klient
{
	private: string _email;
	private: string _has這;
	public: Karnety* _unnamed_Karnety_;
	public: std::vector<Grupy*> _unnamed_Grupy_;

	public: void logowanie(string aEmail, string aHas這);

	public: void przypomnij_has這(string aEmail);
};

#endif
