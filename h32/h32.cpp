/**
    @file 32.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h32.h"

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

// Add your implementation here
string stringClean(const string& str)
{
    if(str.size() < 2)
		return str;
	if(str.at(0) == str.at(1))
		return stringClean(str.substr(1));
	return str.at(0) + stringClean(str.substr(1));
}



////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

