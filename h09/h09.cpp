/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
string codeForDigit(int digit)
{
      if (digit == 0) return "||:::";
    else if(digit == 1)  return ":::||";
    else if(digit == 2)  return "::|:|";
    else if(digit == 3)  return "::||:";
    else if(digit == 4)  return ":|::|";
    else if(digit == 5)  return ":|:|:";
    else if(digit == 6)  return ":||::";
    else if(digit == 7)  return "|:::|";
    else if(digit == 8)  return "|::|:";
    return "|:|::";
}

int checkDigit(int zip)
{
    int result = zip;
    int a = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
       a += result % 10;
       result /= 10;
    }

     a = 10 - (a % 10);
    if (a == 10) a = 0;
    return a ;
}

string barCode(int zip)
{
 // int e = checkDigit(zip);
 // string end = barCode(e);
  int a = zip;
  int b = 0;
  string result;
  for(int i = 0 ; i < 5 ; i++)
  {
      b = a % 10;
      a = a / 10;

      result =  codeForDigit(b) + result;
  }
  result = "|" + result + codeForDigit(checkDigit(zip)) + "|";
  return result;

}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}