#pragma once
#include "Student.h"
#include "Person.h"
class Family :
	  public  Student 

{
private :


protected:
	/// ������� ��������� 
	float averageEarnings;

public:
	Family();
	~Family();


	///����������� ��������
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
	/// ��������������� �������� ������ ��� ��������� ��������� 
	///--------------------------------------
	bool operator > (const Family& dec)
	{	

		if (averageScore > dec.get_averageScore())
			return true;

		return false;

	}
	///--------------------------------------
	/// ��������������� �������� ����� ��� ��������� ��������� 
	///--------------------------------------
	bool operator == (const Family& dec)
	{
		if (averageScore ==  dec.get_averageScore())
			return true;

		return false;
	}
};

