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
while(*b)
{
    b++;
    if(*b == '\0')
    {
        b--;
        break;
    }
}
 while(a < b)
    {
        char temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }

}
const char * findStr(const char *str1, const char *str2)
{
return str1;
}
//////////////////////// STUDENT TESTING //////////////////////////
int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}