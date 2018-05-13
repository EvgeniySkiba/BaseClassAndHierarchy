#include "Hostel.h"



Hostel::Hostel()
{
}



Hostel::Hostel(Family * _student)
{
	int n = sizeof(_student) / sizeof(_student[0]);         // ����� �����

	familyList = new Family[n + 1];

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
	if (this->familyList == NULL)
		return;

	//������ 
	int size = sizeof(this->familyList) / sizeof((this->familyList));         // ����� �����

	// ��������� 
	Family temp;

	for (int j = 1; j <= size - 1; j++)
	{
		for (int i = 0; i <= size; i++)
		{
			if ((familyList[i] > familyList[i + 1]));
			{
				temp = familyList[i];
				familyList[i] = familyList[i + 1];
				familyList[i] = temp;
			}
		}
	}
	///	cout << "�������� ������������" << endl;

		//����� ��� ������ � ����

	std::ofstream out("____HOSTEL____.txt", std::ios::app);

	try {

		if (out.is_open())
		{
			for (int i = 0; i < size; i++)
			{


				// �� ������� ��� � ������� ����� ������  ���� ����������� ������� 
				if ((&familyList[0])->get_averageEarnings() > (&familyList[0])->Min_salary)
					continue;

				out << setw(18) << "�������  : " << (&familyList[0])->get_lName() << endl;
				out.setf(ios::left);

				out << setw(18) << "���  : " << (&familyList[0])->get_Name() << endl;
				out.setf(ios::left);

				out << setw(18) << "��������  : " << (&familyList[0])->get_mName() << endl;
				out.setf(ios::left);

				out << setw(18) << " �������: " << (&familyList[0])->get_Age() << endl;
				out.setf(ios::left);

				out << setw(18) << "������: " << (&familyList[0])->get_groupName() << endl;
				out.setf(ios::left);

				out << setw(18) << " ������� ���: " << (&familyList[0])->get_averageScore() << endl;
				out.setf(ios::left);
			}
		}

		out.close();

	}
	catch (const char* msg)
	{
		cout << "������ ������ � ����" << endl;
	}
}

void Run(Hostel & f)
{

	if (f.familyList == NULL)
		return;

	int n = sizeof(f.familyList) / sizeof(f.familyList[0]);         // ����� �����

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		}
	}
}

