#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Trener_h__
#define __Trener_h__

#include "Grupy.h"

class Grupy;
class Trener;

class Trener
{private: 
	string imie;
	string nazwisko;
	int _ilosc_przepracowanych_godzin;
	
public: 
 	void utwórz_grupe();
};

#endif
