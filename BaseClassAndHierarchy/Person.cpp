#include "Person.h"



Person::Person()
{
}

Person::Person(std::string fName_, std::string mName_, std::string lName_, int age_)
{
	fName = fName_;
	mName = mName_;
	lName = lName_;
	age = age_;
}


Person::~Person()
{
}


void  Person::print()
{
	wprintf(L"\n");
	wprintf(L"Фамилия : %s , Имя %s \n ", this->fName, this->lName);	
}
