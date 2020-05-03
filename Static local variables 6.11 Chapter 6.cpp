/*
if a function is called m,ore than once in a program, then the values stored
in the function local varaible do not persist betwen function calls.
This is because the local variable are destroyed when the function terminates and recreated
when the function start again
*/




#include <iostream>
using namespace std;

void showlocal();

int main()
{
	
	showlocal();
	showlocal();






	system("pause");
	return 0;

}

void showlocal()
{
	int localnumber = 5;

	cout << "The number is " << localnumber << endl;
	localnumber = 99;
}