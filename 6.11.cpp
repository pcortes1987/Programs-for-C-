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
using namespace std;

// this program uses return statement on voids, the return statement causes a function end immediately.
// function prototype
void divide(double, double);

int main()
{
	double number1,
		number2,
		average;

	cout << "Input two numbers and I will divide them " << endl;
	cin >> number1 >> number2;

	divide(number1, number2);


	system("pause");
	return 0;
}

void divide(double arg1, double arg2)
{
	if (arg2 == 0.0)
	{
		cout << "You cannot divide by 0 " << endl;
		return;
	}
	cout << "The two input numbers are divided by " << (arg1 / arg2) << endl;
}
