/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(double gpa, int credits, int honorsCredits);

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ***ANYTHING*** IN THIS FUNCTION

	cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
string getStatus(double gpa , int credits , int honorsCredits )
{
	if( gpa < 2.0 || credits < 180)
	{
		return "not graduating";
	}
	else if(gpa >= 2.0 && gpa < 3.6)
	{
		return "graduating";
	}
	else if( gpa >= 3.6 && gpa < 3.8 && honorsCredits < 15)
	{
		return "cum laude";
	}
	else if ( (gpa >= 3.8 && honorsCredits < 15) || (gpa >= 3.6 && gpa < 3.8 && honorsCredits >= 15) )
	{
	    return "magna cum laude";
	}
    else if (gpa >= 3.8 && honorsCredits >= 15)
    {
    	return "summa cum laude";
    }
       return "" ;

}