#pragma once
#include "Family.h"

#include <fstream>

class Hostel
{
	Student * familyList;
public:
	Hostel();

	Hostel(Student * student);
	virtual ~Hostel();

	friend void Run(Hostel &);

	void PrintToFile();

	Student *  get_StudentsList()
	{
		return familyList;
	}
};

