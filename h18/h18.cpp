/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <sstream>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID


#include "h18.h"

// Place your function definition here
vector<string> fileToWords(const string& filename)
{
    ifstream in(filename);
    if(in.fail()) throw invalid_argument("invalid file name.");

    vector<string> results;
    string line;
    while(getline(in , line))
    {
       string word;
       istringstream check(line);
     while(check >> word)
     {
         results.push_back(word);
     }

    }
    return results;



}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    auto v = fileToWords("excluded.txt");
    cout << "Excluded words:" << endl;
    for (auto e : v) cout << " -" << e << endl;
    return 0;
}