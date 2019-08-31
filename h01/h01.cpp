/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * Calculate the time
 * @return 0 for success.
 */
int run()
{

//input
char dis;
int timeHours , timeMinutes , durationHours , durationMins;

cout << "     Time: ";
cin >> timeHours >> dis >> timeMinutes;
cout << "     Duration: ";
cin >> durationHours >> dis >> durationMins;
//processing

int time = timeHours * 60 + timeMinutes;
int duration = durationHours * 60 + durationMins;
int after = time + duration;
int before = (time - duration) ;
int afterhours = after / 60 % 12;
int afterminutes = after % 60;
int beforehours = (before / 60);
int beforeminutes = (before % 60) ;

//output

cout << setfill('0'); // only needed once
cout << setw(2) << after / 60 << ":" << setw(2) << after % 60;
cout << durationHours << ":" << durationMins << " hours after, and before, " << timeHours << ":" << timeMinutes << " is [" << afterhours << ":" << afterminutes << ", " << beforehours << ":" << beforeminutes << "]" << endl;



return 0;

}
