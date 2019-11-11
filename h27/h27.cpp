/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h27.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h27.h"

// Add your code here
FlexArray& readData(istream& in, FlexArray& a)
{
    a.data_ = unique_ptr<int[]>(new int[INITIAL_CAPACITY]);
    int j , pos = 0;
    while(in >> j)
    {
        a.size_++;
        a.data_[pos] = j;
        pos++;
    }
    return a;
}
string toString(const FlexArray& a)
{
    string result;
    if(a.size_ > 0)
    {
    result += to_string(a.data_[0]);
    for(size_t i = 1 ; i < a.size_ ; i++)
    {
        result += ", " + to_string(a.data_[i]);
    }
    }
    return "{" + result + "}";
}
//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}