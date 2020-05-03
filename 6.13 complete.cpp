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

double getradius();
double square(double);

int main()
{
	const double pi = 3.14159;
	double radius;
	double area;

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program calculates the area of a circle " << endl;
	radius = getradius();

	area = pi * square(radius);
	cout << "The area is " << area << endl;
	system("pause");
	return 0;

}

double getradius()
{
	double rad;

	cout << "Enter the radius of a circle " << endl;
	cin >> rad;
	return rad;
}

double square(double number)
{
	return number * number;
}