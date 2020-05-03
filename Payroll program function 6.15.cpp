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
/*
global constant is a name constant that is avaiable to every function in a program.
*/
// global constants
const double pay_rate = 22.55;  // pay by the hour
const double base_hours = 40.0; // the average work week hours 
const double overtime_multiplier = 1.5; // overtime pay

double getbasepay(double); // to hold basepay
double getovertimepay(double); // to hold overtimep

 double hours, // the hours you worked
      basepay, // the sum of both payrate * hours
      overtime = 0.0, // if overtime is accumlated
      totalpay; // the sum of base pay + overtime pay

int main()
{
    cout << "How many hours did you work " << endl;
    cin >> hours;

  
    basepay = getbasepay(hours);   // to hold the basepay 

    if (hours > base_hours) // if hours exceed 40 accumaluate overtime 
        overtime = getovertimepay(hours); // to hold overtime pay

    totalpay = basepay + overtime;

    cout << setprecision(2) << fixed << showpoint << endl;
    cout << "Base pay " << basepay << endl;
    cout << "Overtime pay " << overtime << endl;
    cout << "Total pay " << totalpay << endl;


    system("pause");
    return 0;
}

double getbasepay(double hoursworked)
{
    double basepay;
    // if hours worked 20 is greater than 40
    if (hoursworked > base_hours)
                       // 40 * 22.5
        basepay = base_hours * pay_rate;
    else
                       //10  * 22.5
        basepay = hoursworked * pay_rate;
    return basepay;
}

double getovertimepay(double hoursworked)
{
    double overtimepay;
    if (hoursworked > base_hours)
    {
        overtimepay = (hoursworked - base_hours) * pay_rate * overtime_multiplier;
    }
    else
        overtimepay = 0.0;
    return overtimepay;
}