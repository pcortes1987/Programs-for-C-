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

// menu function
void showmenu();
void showfees(double, int);

int main()
{
	int choice;
	int months;

	const int adult_choice = 1,
		senior_choice = 2,
		child_choice = 3,
		quit_choice = 4;

	const double adult = 40,
		senior = 30,
		child = 20;

	cout << fixed << showpoint << setprecision(2) << endl;

	do
	{
		showmenu();
		cin >> choice;

		// validate the choices 
		while (choice < adult_choice || choice > quit_choice)
		{
			cout << "Error " << endl;
			cout << "Please enter a valid menu choice " << endl;
			cin >> choice;
		}
		
		
		if (choice != quit_choice)
		{
			cout << "How many months do you want to sign up for " << endl;
			cin >> months;
			switch (choice)
			{
			case adult_choice: 
				showfees(adult, months);
				break;
			case senior_choice:
				showfees(senior, months);
				break;
			case child_choice:
				showfees(child, months);
				break;
			}
		}


	} while (choice != quit_choice);

	system("pause");
	return 0;
}


void showmenu()
{

	cout << "\t\t Health Club Membership menu " << endl;
	cout << "1. Adult membership  " << endl;
	cout << "2. Senior membership  " << endl;
	cout << "3. Child membership  " << endl;
	cout << "4. Exit the program  " << endl;
	cout << "Enter your choice " << endl;
}

void showfees(double memberrate, int months)
{
	cout << "The total charges are " << (memberrate * months) << endl;
	cout << endl;
}


