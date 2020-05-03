#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void showmenu();
void showfees(double, int);

int main()
{
	const int adult_choice = 1,
		senior_choice = 2,
		child_choice = 3,
		quit_choice = 4;

	const double adultfee = 40,
		seniorfee = 30,
		childfee = 20;

	int choice;
	double months,
		charge,
		total;

	cout << fixed << showpoint << setprecision(2);
	do
	{
		showmenu();
		cin >> choice;

		while (choice < adult_choice || choice > quit_choice)
		{
			cout << "Error " << endl;
			cout << "Please selected from the menu " << endl;
			cout << "Planet Fitness Menu " << endl;
			cout << "1 to 4 choice selection " << endl;
			cin >> choice;
		}




		if (choice != quit_choice)
		{
			cout << "How many months do you want to sign up for Planet Fitness " << endl;
			cin >> months;

			switch (choice)
			{
			case adult_choice:
				showfees(adultfee, months);
				break;
			case senior_choice:
				showfees(seniorfee, months);
				break;
			case child_choice:
				showfees(childfee, months);
				break;
			case quit_choice:
			{
				cout << "You exit the program " << endl;
				break;
			}
			}

		}
	} while (choice != quit_choice);

system("pause");
return 0;


}

void showmenu()
{
	cout << "\t\t Welcome to Planet Fitness " << endl;
	cout << "Enter from the following category " << endl;
	cout << "1. Adult membership choice " << endl;
	cout << "2. Senior membership choice " << endl;
	cout << "3. Child membership choice " << endl;
	cout << "4. TO exit the program " << endl;
	cout << "Input your choice for membership " << endl;
}

void showfees(double member, int months)
{
	cout << "The total cost for signing up months for Planet Fitness is " << (member * months) << endl;
}