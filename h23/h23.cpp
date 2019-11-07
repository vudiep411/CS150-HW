/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
int alternatingSum(const int a[] , size_t size)
{
    int sum = 0;
    for(size_t i = 0; i < size ; i++)
    {
        if(i % 2 == 0) sum += a[i];
        else sum-= a[i];
    }
    return sum;
}
MinMax minMax(const double *ptr, size_t size)
{

    struct MinMax result;

    result.min = ptr;
    result.max = ptr;

    auto * atEnd = ptr + (size - 1);
    if(size == 0)
    {
        result.min = 0;
        result.max = 0;
        return result;
    }
    while (ptr < atEnd)
    {
        ptr++;
        if(*ptr > *(result.max))
        {
            (result.max) = ptr;
        }
        if(*ptr < *(result.min))
        {
            (result.min) = ptr;
        }
    }
    return result;
}
/////////////// STUDENT TESTING ////////////////////

int run()
{

    //test alternatingSum()
    int a[] = { 1 , 2 , 3 , 4 , 5 , 6}; // 1 - 2 + 3 - 4 + 5 - 6 = -3
    int b = alternatingSum(a , 6);
    cout << "expected -3 -> " << b << endl;

    //test minMax()
    double c[] = { 1 , 2 , 3 , 4 , 5 , 6}; // max = 6 , min = 1
    double * p = &c[0];
 MinMax max = minMax(p , 6);
 cout << "expected 6 -> " << *max.max << ", expected 1 -> " << *max.min << endl;

    return 0;
}