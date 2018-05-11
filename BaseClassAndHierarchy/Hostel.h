#pragma once
#include "Family.h"
class Hostel
{
	Family * familyList;
public:
	Hostel();
	virtual ~Hostel();

	friend void Run(Family &);
};

