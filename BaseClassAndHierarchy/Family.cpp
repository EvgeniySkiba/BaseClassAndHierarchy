#include "Family.h"



Family::Family()
{
}


Family::~Family()
{
}



void  Person::print()
{
	cout << "\n";
	cout.setf(ios::left);

	cout << setw(18) << "Фамилия  : " << this->fName << endl;
	cout.setf(ios::left);

	cout << setw(18) << "Имя  : " << this->mName << endl;
	cout.setf(ios::left);

	cout << setw(18) << "Отчество  : " << this->lName << endl;
	cout.setf(ios::left);

	cout << setw(18) << " Возраст: " << this->age << endl;
	cout.setf(ios::left);
}