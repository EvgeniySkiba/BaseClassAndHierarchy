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
	cout << "\n";
	cout.setf(ios::left);

	cout << setw(18) << "Фамилия  : " << this->lName  << endl;
	cout.setf(ios::left);

	cout << setw(18) << "Имя  : " << this->fName  << endl;
	cout.setf(ios::left);

	cout << setw(18) << "Отчество  : " << this->mName << endl;
	cout.setf(ios::left);

	cout << setw(18) << " Возраст: " << this->age << endl;
	cout.setf(ios::left);
}

istream & operator >> (istream & stream, Person & o)
{
	cin.clear();
	//очищает поток от имеющихс¤ в нем символов
	cin.sync();
	try {
		cout << "ведите имя :" << endl;
	string _fName;
	cin >> _fName;	
	o.set_Name(_fName);

	}
	catch (const char* msg) {
		cout << "Некорректный формат, имя :";
	}

	try {
		cout << "ведите фамилию :" << endl;
		string _lName;
		cin >> _lName;
		o.set_lName(_lName);
	}
	catch (const char* msg) {
		cout <<"Некорректный формат, фамилия :";
	}

	try {
		cout << "ведите отчество :" << endl;
		string _mName;
		cin >> _mName;
		o.set_mName(_mName);
	}
	catch (const char* msg) {
		cout << "Некорректный формат, отчество :";
	}
	
	try {
		cout << "ведите возраст :" << endl;
		int _age = 16;
		cin >> _age;
		o.set_Age(_age);
	}
	catch (const char* msg) {
		cout << "Некорректный формат, возраст :";
	}	

	return stream;
}
