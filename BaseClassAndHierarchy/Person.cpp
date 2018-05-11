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

istream & operator >> (istream & stream, Person & o)
{
	wprintf(L"Фамилия :");
	cin.clear();
	//очищает поток от имеющихс¤ в нем символов
	cin.sync();

	string f_name; 
	cin >> f_name;
	o.set_Name(f_name);

	int _age;
	cin >> _age;
	try {
		o.set_Age(_age);
	}
	catch (const char* msg) {
		wprintf(L"Некорректный формат возраста :");
	}

