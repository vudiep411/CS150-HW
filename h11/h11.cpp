/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{
bool inSingleCmt = false;
bool inMultiCmt = false;
bool inString = false;
char ch;
while(cin.get(ch))
{
if(!inSingleCmt && !inMultiCmt && !inString)
{
    cout.put(ch);
}






}

}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}