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
	const int size = 9;
	string planets[size] = { "Mercury", "Venus" ,"Earth ", "Mars ", "Jupiter ", "Saturn ", "Neptune ", "Uranus ", "Pluto " };
	cout << "Here are the planets " << endl;

	for (int count = 0; count < size; count++)
	{
		cout << "The planets are " << planets[count] << endl;
	}








	system("pause");
	return 0;


}