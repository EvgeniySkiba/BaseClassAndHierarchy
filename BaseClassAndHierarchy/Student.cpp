#include "Student.h"

Student::Student()
{

}

Student::Student(std::string fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, float averageScore_) : Person(fName_, mName_, lName_, age_)
{
	averageScore = averageScore_;
	groupName = groupName_;
}

Student::~Student()
{
}


void  Student::print()
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

	cout << setw(8) << " Средний бал: " << this->averageScore << endl;
	cout.setf(ios::left);

	cout << setw(8) << " Группа: " << this->groupName << endl;
	cout.setf(ios::left);
}

istream & operator >> (istream & stream, Student & o)
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
		cout << "Некорректный формат, фамилия :";
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


	try {
		cout << "ведите группу :" << endl;
		string  _groupName ;
		cin >> _groupName;
		o.set_groupName(_groupName);
	}
	catch (const char* msg) {
		cout << "Некорректный формат,  имя группы  :";
	}


	try {
		cout << "ведите средний бал :" << endl;
		int _averageScore = 1;
		cin >> _averageScore;
		o.set_averageScore(_averageScore);
	}
	catch (const char* msg) {
		cout << "Некорректный формат, средний бал  :";
	}

	return stream;
}