#pragma once
#include "Family.h"
#include <fstream>

class Hostel
{
	Family * familyList;
	int num;
public:
	Hostel();

	Hostel(Family * student,  int num_);
	virtual ~Hostel();

	friend void Run(Hostel &);

	void PrintToFile();

	Family *  get_StudentsList()
	{
		return familyList;
	}
};

