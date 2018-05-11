
#include "Person.h"
#include "Family.h"

#include <iostream>
#include <conio.h>

#include <Windows.h>
#include <stdio.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_CTYPE, ".1251");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Student student ("1", "2", "3", 4,"group name", 5);
	student.print();


	wprintf(L"Введите любой символ  любой символ для продолжения ....");
	_getch();

	return 0;
}