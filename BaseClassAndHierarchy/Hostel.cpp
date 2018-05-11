#include "Hostel.h"



Hostel::Hostel()
{
}


Hostel::~Hostel()
{
	if (familyList != NULL)
		delete[] familyList;
}
