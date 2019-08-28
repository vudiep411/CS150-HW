/**
 *  @author Vu Diep
 *  @date 8/27/2019
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here

    // Write your code here
cout << STUDENT << ":" << ASSIGNMENT << " : " ;
cout << "Cereal box calculator" << endl;
cout << string(50 , '-') << endl;
    //input
cout << "enter ounces per box of cereal: "  ;
double ouncesPerBox;
cin >> ouncesPerBox;

// processing
const double OUNCE_PER_TON = 35273.92;
double weightInTons = ouncesPerBox / OUNCE_PER_TON;
double boxesPerTons = 1 / weightInTons;

// output
cout << "Weight in metric tons, boxes per tons [" << weightInTons << ", " << boxesPerTons << "]" << endl;
    return 0;
}

