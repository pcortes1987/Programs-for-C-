#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// partial arrays inititlization jsut ebecause you set it to 5 c++ doesnt require u to use all of them it will automaicatally set to 0. 
	/*
	you can have array without the inialization list c++ allows you tpo hold asll initilization values
	double ratings[] = { 9.0,3.0,2.0};
	*/

	const int num_employees = 5;

	int hours[num_employees]; // int hours = 5;
	double payrate;

	// input the hours worked.
	                                           // 5 
	cout << "Enter the hours worked by " << num_employees << " who all earned the same pay rate " << endl;
	
	                     // 0 < 5               0++
	for (int index = 0; index < num_employees; index++)
	{
		                        // +0, +1, +2, +3, +4, +5
		cout << "Employee " << (index + 1) << endl;
		cin >> hours[index]; // the information you put in 
	}

	// input the hourly rate for all employees
	cout << "Enter the hourly pay rate for all the employees " << endl;
	cin >> payrate;

	// display each employee gross pay
	cout << "Here is the gross pay for each employee " << endl;
	cout << fixed << showpoint << setprecision(2) << endl;

	for (int index = 0; index < num_employees; index++)
	{
		    // total = hours * payrate
		double grosspay = hours[index] * payrate; 
		   // employee 1: total = hours * payrate;
		cout << "Employee " << (index + 1) << " : $ " << grosspay << endl;
	}



	system("pause");
	return 0;
}