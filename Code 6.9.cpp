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
// we are passing the argument to the parameter but it doesnt change the parameter do not affect the original argument
void changenumber(int)

int main()
{
	int number;
	number = 12;
	cout << "The display number is  " << endl;
	cout << "The number is " << number << endl;
	cout << "Now I change it " << endl;
	changenumber();
	cout << "The number has change back " << number << endl;
	system("pause");
	return 0;

}

void changenumber(int number)
{
	int number;
	number = 20;
	cout << "The number that has been change to " << number << endl;
}