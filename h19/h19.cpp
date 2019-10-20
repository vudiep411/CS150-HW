/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID


#include "h19.h"

// Place your function here
vector<WORD> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
vector<WORD> result;
string word;
long long pos;
while(in)
{
   pos = static_cast<long long>(in.tellg());
   if(pos == -1) break;
    in >> word >> ws;
    string temp;
    for(char c : word)
    {
        if(!ispunct(c)) temp += tolower(c);
    }
    word = temp;
    // next
    bool found = false;
    for(WORD e : result)
    {
        if (word == e.word)
        {
        e.positions.push_back(pos);
        found = true;
        }
    }
    //s
  if(found)
  {
      continue;
  }
  else if(!found)
  {
      for(auto ex : excluded)
      {
          if(word == ex) found = true;
      }
  }
  //s
 if(found) continue;
 else if(!found)
 {
     for(auto d : dictionary)
      {
          if (word == d) found = true;
      }
 }
  if(found) continue;
  //s
  else if(!found)
  {
      WORD a;
      a.word = word;
      a.positions.push_back(pos);
      result.push_back(a);
  }
}
return result;
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}