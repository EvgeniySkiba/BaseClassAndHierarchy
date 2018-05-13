#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Student : public Person
{
protected:
	string groupName;
	float averageScore;

public:
	Student();
	Student(std::string  fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, float averageScore_);
	virtual ~Student();


	void set_groupName(string _groupName) { groupName = _groupName; }
	void set_averageScore(float _averageScore) { averageScore = _averageScore; }

	string get_groupName() {
		return groupName;
	}

	int get_averageScore() {
		return averageScore;
	}

	virtual void print() override;

	friend istream &operator >> (istream &stream, Student &o);
};

