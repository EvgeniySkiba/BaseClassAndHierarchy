
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

	Student student ("1", "2", "3", 4,"group name", 5);
	//student.print();

	Student *  stud1 = new Student("ф","имя","отч",16,"имя группы",4); 
	Student *  stud2 = new Student();
	Student *  stud3 = new Student();
	Student *  stud4 = new Student();
	Student *  stud5 = new Student();
	Student *  stud6 = new Student();
	Student *  stud7 = new Student();


	Hostel * hostel = new Hostel(stud1);

	hostel->get_StudentsList();


	hostel->PrintToFile();

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