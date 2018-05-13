#pragma once
#include "Family.h"
#include <fstream>

class Hostel
{
	Family * familyList;
public:
	Hostel();

	Hostel(Family * student);
	virtual ~Hostel();

	friend void Run(Hostel &);

	void PrintToFile();

	Family *  get_StudentsList()
	{
		return familyList;
	}
};

