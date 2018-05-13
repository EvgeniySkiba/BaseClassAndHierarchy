#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	  public  Student 

{

	/// средний зароботок 
	float averageEarnings;

public:
	Family();
	~Family();


	virtual void print() override;
};

