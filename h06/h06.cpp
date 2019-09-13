/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h06.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name

// Implement your function here
string toFrenchGender(const string& country)
{
    string prefix;
    string island = "iles";
    auto len = country.size() - 1;
    string result;
    string last = country.substr(country.size() - 2);

    if(country.substr(0 , 4).compare(island) == 0 || (last == "es" || "is" || "os" || "as") )
    {
        prefix = "les ";
        result = prefix + country;
    }

    else if(country.at(len) == 'e' || 'o')
    {
        prefix = "la ";
        result = prefix + country;
    }
    else
    {
        prefix = "le ";
        result = prefix + country;
    }

    return result;
}


/////////////// Optional Student Code /////////////////

int run()
{
    cout << "Student testing" << endl;
    return 0;
}