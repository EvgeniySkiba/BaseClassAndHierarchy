#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	public Student,  public Person
{
	

public:
	Family();
	~Family();
};

