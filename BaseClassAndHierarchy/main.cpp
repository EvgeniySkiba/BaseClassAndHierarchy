﻿
#include "Person.h"
#include "Hostel.h"
#include <conio.h>
#include <iostream>

#include <windows.h>

#include <cstdlib>;

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_CTYPE, ".1251");
	setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы

	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. Нужно только будет изменить шрифт консоли на Lucida Console или Consola

	Student student("1", "2", "3", 4, "group name", 5);
	//student.print();

	Family *  stud1 = new Family("Имя", "Отчество", "Фамилия ", 16, "группа ", 4, 3500);
	Family *  stud2 = new Family("Имя", "Отчество 2", "Фамилия", 16, " группа 3", 4, 1800);
	Family *  stud3 = new Family("Имя", "Отчество 3", "Фамилия", 18, " группа  4 ", 4, 800);

	Family *  stud4 = new Family("Имя", "Отчество 4", "Фамилия", 19, " группа 4", 4, 5800);
	Family *  stud5 = new Family("Имя", "Отчество 5", "Фамилия", 20, " группа 5 ", 4, 6800);
	Family *  stud6 = new Family("Имя", "Отчество 6", "Фамилия", 21, " группа 5 ", 4, 2800);
	Family *  stud7 = new Family("Имя", "Отчество 7", "Фамилия", 20, " группа 5 ", 4, 1800);
	Family *  stud8 = new Family("Имя", "Отчество 8", "Фамилия", 21, " группа   ", 4, 1800);


	Family * famillyArray = new Family[8];

	famillyArray[0] = *stud1;
	famillyArray[1] = *stud2;
	famillyArray[2] = *stud3;
	famillyArray[3] = *stud4;
	famillyArray[4] = *stud5;
	famillyArray[5] = *stud6;
	famillyArray[6] = *stud7;
	famillyArray[7] = *stud8;

	Hostel * hostel = new Hostel(famillyArray, 8);

	hostel->get_StudentsList();


	hostel->PrintToFile();

	delete[] famillyArray;

	delete hostel;


	delete stud1;
	delete stud2;
	delete stud3;
	delete stud4;
	delete stud5;
	delete stud6;
	delete stud7;





	cout << "Введите любой символ для продолжения ....";
	_getch();

	return 0;
}