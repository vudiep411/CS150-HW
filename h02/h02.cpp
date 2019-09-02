/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string STUDENT = "Who Are You?";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
//input
int amountNeeded , mouseWeight , weightDesire , lethalDose ;
double cans;
const int POUND_TO_GRAM = 454;
const double PERCENTAGE_IN_GRAM = 7 / 20 ;
cin >> mouseWeight ;
cin >> amountNeeded ;
cin >> weightDesire ;
weightDesire = weightDesire * POUND_TO_GRAM ;
lethalDose = (weightDesire * amountNeeded) / mouseWeight;
cans = lethalDose / PERCENTAGE_IN_GRAM ;
//output
cout << "Weight of the mouse in grams: " << mouseWeight << endl;
cout << "Lethal dose for the mouse (in grams): " << lethalDose << endl;
cout << "Desired weight of the dieter (in pounds): " << weightDesire << endl;
cout << "Lethal dose in grams, cans is [" << setprecision(0) << lethalDose << ", " << cans << "]" << endl;


    return 0;
}
