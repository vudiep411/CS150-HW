/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h08.h"

// Place your function definitions in this file.
int countCode(const std::string& s);
std::string everyNth(const std::string & s , int n);
std::string zipZap(const std::string & s);
bool prefixAgain(const std::string & s , int n);
////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
int countCode(const std::string& s)
{
    int result = 0;
    size_t slen = 4;
    for(size_t i = slen , len = s.size(); i <= len; i++)
    {
        string subs = s.substr(i - slen , slen); // i = 4++ , slen = 4
        if(subs.substr(0 , 2) == "co" && subs.back() == 'e')
        {
            result++;
        }
    }
    return result;
}
std::string everyNth(const std::string & s , int n)
{
    string result;
    for(int i = 0 , len = s.size() ; i < len ; i += n)
    {
        result += s.at(i);
    }
    return result;

}
std::string zipZap(const std::string & s)
{
    int len = s.size();
    int i = 0;
    string result;
    if(len < 3) return s;
    while(i < len - 2)
    {
        string zip = s.substr(i , 3);
        if(zip.at(0) == 'z' && zip.at(2) == 'p')
        {
            result += "zp";
            i += 3;
        }
        else
        {
            result += zip.at(0);
            i++;
        }
    }

    return result + s.substr(len - 2 , 2);

}

bool prefixAgain(const string & str , int n)
{
 string prefix = str.substr(0, n);
    int length = str.size();

    for (int i = n; i <= length - n; i++) {
        if (prefix == str.substr(i, i + n) ) {
            return true;
        }
    }
    return false;

}
