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
int time =  timeHours * 60 + timeMinutes;
int durAfter = durationHours * 60 + durationMins;

int sumHours, sumMinutes, diffHours , diffMinutes;

sumHours = (time + durationHours) / 60;
sumMinutes = (time + durationMins) % 60;
diffHours = (time - durationHours) / 60;
diffMinutes = (time - durationHours) % 60;
//output
cout << endl;
cout << setfill('0');
cout << setw(2) << (time + durationHours) / 60 << ":" << setw(2) << (time + durationMins) % 60 ;
cout << durationHours << ":" << durationMins << " hours after, and before, " << timeHours << ":" << timeMinutes << " is [" << sumHours << ":" << sumMinutes << ", " << diffHours << ":" << diffMinutes << "]" << endl;



return 0;

}
