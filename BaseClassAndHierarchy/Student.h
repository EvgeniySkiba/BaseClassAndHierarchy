#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Student: public Person
{
protected:
	string groupName;
	int averageScore;

public:
	Student();
	Student(std::string  fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, int averageScore_);
	virtual ~Student();

	virtual void print() override;
};

