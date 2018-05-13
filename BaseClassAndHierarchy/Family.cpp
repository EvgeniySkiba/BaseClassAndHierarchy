#include "Family.h"



Family::Family()
{

}

Family::Family(std::string fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, float averageScore_, float averageEarnings_) 
	: Student(  fName_,  mName_,  lName_,  age_,  groupName_,  averageScore_)

{
	averageEarnings = averageEarnings_;
}

Family::~Family()
{
	
	
}

void  Family::print()
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