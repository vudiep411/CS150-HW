/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h05.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h05.h"

// Place the implementation (definition) of your function here

double focalLength(double d, double r1, double r2, double n)
{
    double f = (n - 1.0) * ( (1.0 / r1) - (1.0 / r2) + ((n - 1.0) * d) / (n * r1 * r2));
    f = 1.0 / f;
    return f;


}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
