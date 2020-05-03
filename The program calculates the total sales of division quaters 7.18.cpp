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
	/*
	two dimenssional arrays is like several identical arrays put together.
	2 dimensional arrays can hold multiple set of data 
	to define a two dimensional array, two size declarators are required
	the first one number of rows and second one is number of columns
	double score [3] [4]; the data two dimensional arrays each element has two subscript
	*/
	// number of divisions and quarters
	const int num_div = 3;
	const int num_qtrs = 4;

	// array with 3 rows and 4 columns
	double sales[num_div][num_qtrs];

	// to hold total sales
	double totalsales = 0;
	int div,
		qtr;

	cout << "This program will calculater the total sales of all the company division " << endl;
	cout << "Enter the following sales information " << endl;
	for (int div = 0; div < num_div; div++)

	{
		for (int qtr = 0; qtr < num_qtrs; qtr++)
		{
			cout << "Division " << (div + 1) << endl;
			cout << "Quarter " << (qtr + 1) << endl;
			cin >> sales[div][qtr];
		}
		cout << endl;

	}

	for (int div = 0; div < num_div; div++)
	{
		for (int qtr = 0; qtr < num_qtrs; qtr++)
		{
			totalsales += sales[div][qtr];
		}
	}

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "The total sales for the company are " << totalsales << endl;

	system("pause");
	return 0;

}