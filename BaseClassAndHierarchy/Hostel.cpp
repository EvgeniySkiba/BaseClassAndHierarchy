#include "Hostel.h"



Hostel::Hostel()
{
}



Hostel::Hostel(Student * _student)
{
	int n = sizeof(_student) / sizeof(_student[0]);         // число строк

	familyList = new Student[n + 1];

	for (int i = 0; i <= n; i++)
	{
		familyList[i] = _student[i];
	}
}


Hostel::~Hostel()
{
	if (familyList != NULL)
		delete[] familyList;
}

void Hostel::PrintToFile()
{
	std::ofstream out("____HOSTEL____.txt", std::ios::app);

	if (this->familyList == NULL)
		return;

	int n = sizeof(this->familyList) / sizeof((this->familyList));         // число строк

	try {

		if (out.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				out << setw(18) << "Фамилия  : " << (&familyList[0])->get_lName() << endl;
				out.setf(ios::left);

				out << setw(18) << "Имя  : " << (&familyList[0])->get_Name() << endl;
				out.setf(ios::left);

				out << setw(18) << "Отчество  : " << (&familyList[0])->get_mName() << endl;
				out.setf(ios::left);

				out << setw(18) << " Возраст: " << (&familyList[0])->get_Age() << endl;
				out.setf(ios::left);

				out << setw(18) << "Группа: " << (&familyList[0])->get_groupName() << endl;
				out.setf(ios::left);

				out << setw(18) << " Средний бал: " << (&familyList[0])->get_averageScore() << endl;
				out.setf(ios::left);
			}
		}

		out.close();

	}
	catch (const char* msg)
	{
		cout << "Ошибка записи в файл" << endl;
	}
}

void Run(Hostel & f)
{

	if (f.familyList == NULL)
		return;

	int n = sizeof(f.familyList) / sizeof(f.familyList[0]);         // число строк

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		}
	}
}

