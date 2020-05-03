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

// we are using function prototypes and using variables 
// you can call the function passing the parameter several things using one line
void numberfunction(int);

int main()
{
	cout << "We will now display how to use function in the variables " << endl;
	numberfunction(3+5);
	numberfunction(8-2);
	numberfunction(9 * 5);
	cout << "All are odd numbers " << endl;
	system("pause");
	return 0;
}

void numberfunction(int number)
{
	cout << "The following numbers have odd numbers " << number << endl;
}