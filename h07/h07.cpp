/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h07.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name

// Implement your function here
int sumNums(const string& s)
{
    int sum = 0;
    int num = 0;
    for(size_t i = 0, len = s.size(); i <= len - 1; i++)
    {
        char a = s.at(i);
        if(isdigit(a))
        {
         a -= '0';
         num *= 10;
         num += a;
        }
    else
    {
        sum += num;
        num = 0;
    }


    }

 return sum;

}

/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}


