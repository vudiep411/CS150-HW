/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt = "")
{
    string out;
    getline(cin , out);
      if(prompt.empty()) cout << prompt;
      else if(!isspace(prompt.back())) cout << prompt + " ";
      else if (isspace(prompt.back())) cout << prompt;

    return out;
}
int getInt(const string& prompt)
{
    string line = getLine(prompt);
    while(!cin.fail())
    {
        if(!line.empty())
        {
            stringstream in(line);
            int n;
            in >> n;
            in >> ws;
            if(in.eof() && !in.fail())
            {
                return n;
            }
        }
        else
            {
                cerr << line;
                line.clear();
            }
           line = getLine(prompt);
    }
         return 0;
}
double getReal(const string& prompt)
{
    string line = getLine(prompt);
    while(!cin.fail())
    {
        if(!line.empty())
        {
            stringstream in(line);
            double n;
            in >> n;
            in >> ws;
            if(in.eof() && !in.fail())
            {
                return n;
            }
        }
        else
            {
                cerr << line;
                line.clear();


            }

          line = getLine(prompt);
    }
         return 0.0;
}
bool getYN(const string& prompt)
{
    string line = getLine(prompt);
    while(!cin.fail())
    {
        if(!line.empty())
        {
            stringstream in(line);
            string str;
            in >> str;
            char ch = str.at(0);
            if(ch == 'Y' || ch == 'y') return true;
            else if(ch == 'N' || ch == 'n') return false;
        }
        else
        {
            cerr << line;
            line.clear();
        }
        line = getLine(prompt);
}
return false;
}
/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    do
    {
       // string s = getLine("Enter a string: ");
       // cout << "s->\"" << s << "\"" << endl;

        int n = getInt("Enter an integer:");
        cout << "n->" << n << endl;

        double d = getReal("Enter a real number: ");
        cout << "d->" << d << endl;

    } while (getYN("Try again? (Y/N)"));

    return 0;
}