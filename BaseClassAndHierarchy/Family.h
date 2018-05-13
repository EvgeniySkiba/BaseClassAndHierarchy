#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	  public  Student 

{
private :


protected:
	/// средний зароботок 
	float averageEarnings;

public:
	Family();
	~Family();


	///минимальная зарплата
	static   float Min_salary ;

	virtual void print() override;


	float get_averageEarnings()
	{
		return averageEarnings;
	}

	bool operator < (const Family& dec)
	{
		if (averageScore < dec.get_averageScore())		
			return true;
		
		return false;
	}


	///--------------------------------------
	/// переопределение операции больше для сравнения элементов 
	///--------------------------------------
	bool operator > (const Family& dec)
	{	

		if (averageScore > dec.get_averageScore())
			return true;

		return false;

	}
	///--------------------------------------
	/// переопределение операции равно для сравнения элементов 
	///--------------------------------------
	bool operator == (const Family& dec)
	{
		if (averageScore ==  dec.get_averageScore())
			return true;

		return false;
	}
};

