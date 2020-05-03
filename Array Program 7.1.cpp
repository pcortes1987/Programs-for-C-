#include <iostream>
using namespace std;


	// this program uses array
	// an array allows you to store and work with multiple values of the same data type
	/*
	array definition	number of elements	size of each element	size of the array
	int miles[84];			84				      4						844*9=336
	*/

int main()
{
	const int number_employees = 4;
	int hours[number_employees];

	cout << "Enter the hours worked by employees " << number_employees << " by employees. " << endl;
	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];

	cout << "The hours worked by employees are " << endl;
	cout << hours[0] << endl;
	cout << hours[1] << endl;
	cout << hours[2] << endl;
	cout << hours[3] << endl;
	system("pause");
	return 0;

}


