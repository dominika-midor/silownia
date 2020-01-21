#include <exception>
#include <vector>
using namespace std;

#ifndef __Administrator_h__
#define __Administrator_h__

#include "Karnety.h"
#include "Grupy.h"

class Karnety;
class Grupy;
class Administrator;

class Administrator
{
	public: std::vector<Karnety*> _unnamed_Karnety_;
	public: std::vector<Grupy*> _unnamed_Grupy_;

	public: void przegl�dajDane(Karnety aKarnet);

	public: void przegl�dajGrupy(Grupy aGrupa);

	public: void stw�rz_plik();
};

#endif
