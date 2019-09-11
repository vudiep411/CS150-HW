/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h05.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h05.h"

// Place the implementation (definition) of your function here

double focalLength(double d, double r1, double r2, double n)
{
    int f = (1 / r1) + (1 / r2);
    int a = ((n - 1) * d) / (n * r1 * r2);
    f = (n - 1) * (f + a);
    f = 1 / f;
    return f;


}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
