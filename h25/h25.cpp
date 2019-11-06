/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h15.cpp
 */
#include <string>
#include <stdexcept>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
bool sameSet(const int *aBeg, const int *aEnd,
             const int *bBeg, const int *bEnd)
{


    bool aMatches = false;
    bool bMatches = false;

    const size_t A_LEN = aEnd - aBeg;
    const size_t B_LEN = bEnd - bBeg;

    for (size_t i = 0; i < A_LEN; i++)
    {
        for (size_t j = 0; j < B_LEN; j++)
        {
            if (aBeg[i] == bBeg[j])
            {
                 aMatches = true;
                  break;
            }


            aMatches = false;

        }
        if (!aMatches) { break; }
    }

    for (size_t i = 0; i < B_LEN; i++)
    {

        for (size_t j = 0; j < A_LEN; j++)
        {

            if (bBeg[i] == aBeg[j])
            {

                bMatches = true;
                break; //save some work
            }

            bMatches = false;

        }
        if (!bMatches) { break; }
    }

    return aMatches && bMatches ;
}
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    if (bSize < aSize)
    {
        throw length_error(" ... (up to u) ");
    }
    else
    {
        auto pb = b;
        for (auto p = a, end = a + aSize; p != end; p++)
        {
            if (*p % 2 == 0) *pb++ = *p;
        }
        bSize = pb - b;
    }
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}