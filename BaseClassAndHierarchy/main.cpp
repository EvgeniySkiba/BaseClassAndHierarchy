
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

	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. Нужно только будет изменить шрифт консоли на Lucida Console или Consola

	Student student("1", "2", "3", 4, "group name", 5);
	//student.print();

	Family *  stud1 = new Family("ф", "имя", "отч", 16, "имя группы", 4, 3500);
	Family *  stud2 = new Family("ф2", "имя2", "отч", 16, "имя группы", 4, 1800);
	Family *  stud3 = new Family("ф3", "имя2", "отч", 16, "имя группы 2 ", 4, 800);

	Student *  stud4 = new Student();
	Student *  stud5 = new Student();
	Student *  stud6 = new Student();
	Student *  stud7 = new Student();

	Family * famillyArray = new Family[3];

	famillyArray[0] = *stud1;
	famillyArray[1] = *stud2;
	famillyArray[2] = *stud3;


	Hostel * hostel = new Hostel(famillyArray);

	hostel->get_StudentsList();


	hostel->PrintToFile();

	delete [] famillyArray;

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