// this program illustrates the string theory
/*
ofstream- output file stream, you create an object of this data type when you want to create a file and write data to it
ifstream - input file scream. You can create an object of this data type when you want to open an existing file and read data from it.
fstream - file stream. objects of this data type can be used to open files for reading, writing, or both.
*/
#include <iostream> // to have access to c++ library
#include <cstdlib> // for random numebrs
#include <ctime> // for time function
#include <cmath> // for pow and math problems
#include <iomanip> // to set precision in linements with variable
#include <string> // to input letters inside the variable instead of numbers
#include <fstream> //ofstream, ifstream, fstream
#include <vector> // to use vectors 

using namespace std;

int main()
{
	// this program calculates a payroll of employees
	const int c_employees = 4;

	// to write a vector you define it. 
	vector <double> hours(c_employees);
	vector <double> payrate(c_employees);
	int index;

	cout << "This program calculates the payroll of employees " << endl;
	cout << "Display in the screen " << endl;


	for (int index = 0; index < c_employees; index++)
	{
		cout << "Input the hours worked by each employee " << (index + 1) << " : " << endl;
		cin >> hours[index];
		cout << "Input the hourly rate by each employee " << (index + 1) << " : " << endl;
		cin >> payrate[index];
	}

	cout << "Gross pay for the each employee is " << endl;
	for (int index = 0; index < c_employees; index++)
	{
		double grosspay;
		grosspay = hours[index] * payrate[index];
		cout << "The gross pay for each employee is " << (index + 1) << " : " << grosspay << endl;
	}






	system("pause");
	return 0;


}