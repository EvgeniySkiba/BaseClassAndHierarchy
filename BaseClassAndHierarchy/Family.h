#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	public  Student

{
private:


protected:
	/// средний зароботок 
	float averageEarnings;


public:
	Family();
	Family(std::string  fName_, std::string mName_, std::string lName_, int age_, std::string groupName_, float averageScore_, float averageEarnings_);
	~Family();

	virtual void print() override;

	//минимальная зарплата
	static const int Min_salary = 2500;

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
		if (averageScore == dec.get_averageScore())
			return true;

		return false;
	}
};

