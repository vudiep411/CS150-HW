/**
    @file h33.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h33.h"

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

// Add your implementation here
int subCount(const std::string& str, const std::string& sub)
{
    if(str.empty()) return 0;
    if(str.substr(0 , sub.size()) == sub) return 1 + subCount(str.substr(sub.size()) , sub );
    return subCount(str.substr(1) , sub);
}



////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

