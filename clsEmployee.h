#pragma once

#include <iostream>
#include "clsPerson.h";

using namespace std;

class clsEmployee : public clsPerson
{

private:

	string _Title;
	float _Salary;
	string _Department;


public:

	clsEmployee(int ID, string FirstName, string LastName, string Email, string PhoneNumber, string Department, string Title, float Salary) : clsPerson(ID, FirstName, LastName, Email, PhoneNumber)
	{

		_Title = Title;
		_Salary = Salary;
		_Department = Department;

	}

	void SetTitle(string Title) {

		_Title = Title;
	}

	string Title() {

		return _Title;
	}


	void SetSalary(float Salary) {

		_Salary = Salary;
	}

	float Salary() {

		return _Salary;
	}

	void SetDepatment(string Depatment) {

		_Department = Depatment;
	}

	string Department() {

		return _Department;
	}


	void Print() {

		cout << "           Info         \n";
		cout << "\n_______________________________________\n";
		cout << "ID            : " << ID() << endl;
		cout << "First Name    : " << FirstName() << endl;
		cout << "Last Name     : " << LastName() << endl;
		cout << "Full Name     : " << FullName() << endl;
		cout << "Email         : " << Email() << endl;
		cout << "Phone Number  : " << PhoneNumber() << endl;
		cout << "Title         : " << _Title << endl;
		cout << "Department    : " << _Department << endl;
		cout << "Salary        : " << _Salary << endl;
		cout << "_______________________________________\n";


	}
};
