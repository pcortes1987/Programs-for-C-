#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;


// this program uses array
// an array allows you to store and work with multiple values of the same data type
/*
array definition	number of elements	size of each element	size of the array
int miles[84];			84				      4						844*9=336
*/

int main()
{
	const int array_size = 10;
	int numbers[array_size];
	int count = 0;
	ifstream inputfile;

	//open file
	inputfile.open("write1to10.txt");

	// read the numbers from the file into the array
	// 0 < 10 && 10 reads 10 file
	while (count < array_size && inputfile >> numbers[count])
		count++;

	inputfile.close();

	// display the numbers read
	cout << "These numbers are " << endl;
	for (count = 0; count < array_size; count++)
	
		cout << numbers[count] << " ";
	cout << endl;










	system("pause");
	return 0;
}