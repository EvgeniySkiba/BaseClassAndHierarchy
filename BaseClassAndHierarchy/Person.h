#pragma once
#include <iostream>
#include <string>
#include <iomanip>// setw

using namespace std;

class Person
{

protected:
	std::string fName; // имя
	std::string mName; // отчество
	std::string lName; // фамилия
	int age;

public:

	void set_Name(string fname_) { fName = fname_; }
	void set_mName(string mName_) { mName = mName_; }
	void set_lName(string lName_) { lName = lName_; }


	void set_Age(int age_) { age = age_; }
	
	string get_fName() {
		return fName;
	}

	string get_mName() {
		return mName;
	}

	string get_lName() {
		return lName;
	}

	int  get_Age() {
		return age;
	}


	Person();
	Person(std::string fName_, std::string mName_, std::string lName, int age);
	virtual ~Person();

	// виртуальный - каждый наследник вносит свою реализацию
	virtual void print() = 0;

	// предусмотрено динамическое добавление с консоли 
	friend istream &operator >> (istream &stream, Person &o);
};