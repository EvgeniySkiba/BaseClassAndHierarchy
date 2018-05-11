#include "Student.h"



Student::Student()
{
}


Student::Student(std::string fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, int averageScore_) :Person(fName_, mName_, lName_, age_)
{
	averageScore = averageScore_;
	groupName = groupName_;
}

Student::~Student()
{
}

void Student::print()
{
	wprintf(L"\n");

	wprintf(L"Фамилия : %ls", this->fName);
	wprintf(L"Возраст : %i", this->age);

	wprintf(L"\n");
//	wprintf(L"Фамилия : %s , Имя %s , Возраст: %s , Средний бал %s  \n ", this->fName, this->lName, this->age, this->averageScore);
}





