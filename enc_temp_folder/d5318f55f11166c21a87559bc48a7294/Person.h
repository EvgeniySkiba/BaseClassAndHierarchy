#pragma once
#include <iostream>
#include <string>
#include <iomanip>// setw

using namespace std;

class Person
{

protected:
	std::string fName;
	std::string mName;
	std::string lName;	
	int age;

public:
	Person();
	Person(std::string fName_, std::string mName_, std::string lName, int age);
	virtual ~Person();

	// виртуальный - каждый наследник вносит свою реализацию
	virtual void print()=0;
};

