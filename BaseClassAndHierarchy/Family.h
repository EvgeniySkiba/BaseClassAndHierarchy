#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	  public  Student 

{

	/// ������� ��������� 
	float averageEarnings;

public:
	Family();
	~Family();


	virtual void print() override;
};

