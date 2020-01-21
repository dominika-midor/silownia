#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Grupy_h__
#define __Grupy_h__

#include "Trener.h"
#include "Sta造_klient.h"
// #include "Administrator.h"

class Trener;
class Sta造_klient;
class Administrator;
class Grupy;

class Grupy
{
	public: string _nazwa;
	public: int _max;
	public: int _data;
	public: std::vector<Trener*> _unnamed_Trener_;
	public: std::vector<Sta造_klient*> _unnamed_Sta造_klient_;
	public: Administrator* _unnamed_Administrator_;

	public: void zapisz_na_zaj璚ia(Sta造_klient aKlient);

	public: void operation();
};

#endif
