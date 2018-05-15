#include "Hostel.h"



Hostel::Hostel()
{
}



Hostel::Hostel(Family * _student, int num_)
{
	num = num_;

	familyList = new Family[num_ + 1];

	for (int i = 0; i < num_; i++)
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
	if (this->familyList == NULL)
		return;

	//размер 
	int size = this->num;         // число строк

	// сортируем 
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			//int res = strcmp(cPointers[j + 1], cPointers[j]);
		
			if ((familyList[j+1].get_averageEarnings() < familyList[j].get_averageEarnings()))
			{
				const Family tmp = (familyList[j + 1]);
				(familyList[j + 1]) = (familyList[j]);
				(familyList[j]) = tmp;

			}
		}
	}

	///	cout << "ѕеречень отсортирован" << endl;

		//поток дл¤ записи в файл

	std::ofstream out("____HOSTEL____.txt", std::ios::trunc);

	try {

		if (out.is_open())
		{
			for (int i = 0; i < size; i++)
			{

				// for debug 
				int currMinSalary = 2 * (&familyList[i])->Min_salary;
				int currentSalary = (&familyList[i])->get_averageEarnings();

				// не выводим тех у которых доход больше  двух минимальных зарплат 
				if (currentSalary > currMinSalary)
					continue;

				out << setw(18) << "Фамилия  : " << (&familyList[i])->get_lName();
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Имя  : " << (&familyList[i])->get_fName();
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Отчество  : " << (&familyList[i])->get_mName();
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Возраст: " << (&familyList[i])->get_Age();
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Группа: " << (&familyList[i])->get_groupName();
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Средний бал: " << (&familyList[i])->get_averageScore() << endl;
				out.setf(ios::left);
				out << "|";

				out << setw(18) << "Доход: " << (&familyList[i])->get_averageEarnings() << endl;
				out.setf(ios::left);
				out << "|";
				out << "-----------------------------------------" << endl;
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

