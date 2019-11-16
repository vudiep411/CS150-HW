/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h26.h"

// Add your code here
void reverse(char * s)
{
    char * a = s;
    char * b = s;

    while (*b)
    {
        b++;
    }
    b--;
    while (a < b)
    {
        auto temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}

const char * findStr(const char *str1, const char *str2)
{
   while (*str1)
    {
        auto p = str1;
        auto p1 = str1;
        auto p2 = str2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')  return p;
        str1++;
    }
    return nullptr;
}


int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}