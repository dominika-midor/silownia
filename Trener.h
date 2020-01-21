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
{
	private: string _imiê;
	private: string _nazwisko;
	private: int _ilosc_przepracowanych_godzin;
	public: std::vector<Grupy*> _unnamed_Grupy_;

	public: void utwórz_grupê();
};

#endif
