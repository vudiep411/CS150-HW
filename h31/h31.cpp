/**
    @file h31.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h31.h"

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

// Add your implementation here
bool find(const string& s, const string& t)
{
    if (s.size() < t.size()) { return false; }
    else if (s.substr(0, t.size()) == t) { return true; }
    return find(s.substr(1) , t);
}


////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

