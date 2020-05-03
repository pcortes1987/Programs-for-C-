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
// 6.8b returning a value from a function
// a function may sent a value back to the part of the program that called the function

int total(int, int);


int main()
{
	int num1, num2, average;

	num1 = 10;
	num2 = 5;

	average = total(num1, num2);

	cout << "The sum of " << num1 << " and " << num2 << " is " << average << endl;




	
	system("pause");
	return 0;
}


int total(int arg1, int arg2)
{
	return  arg1 * arg2;
}