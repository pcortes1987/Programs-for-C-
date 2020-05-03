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


int main()
{
	// arrays may be inititiazlied where they are defined
	const int months = 12;

	// the series of values inside the braces and seperated with commas is called initializtion list
	// the first value is 4 stored in days[0] and so on
	// you can keep it one line or spread out in multiple lines
	int days[months] = { 4,3,2,4,
						6,21,12,43,
						40,23,31,30 };


	for (int count = 0; count < months; count++)
	{
		cout << "Month " << (count + 1) << " has " << days[count] << " days " << endl;
	}









	system("pause");
	return 0;

}
