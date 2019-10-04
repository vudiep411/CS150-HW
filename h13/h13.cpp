/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h13.h"

// Define your function here
std::string dataSets(const std::string& fileName)
{
    ostringstream result;
    ifstream in;
    in.open(fileName.c_str());
    if(!in.is_open()) {result << "data/notfound.txt cannot be opened.\n";}

    int dataSet = 1;
    int i;
    while (in >> i)
    {
        int count = 0;
        double sum = 0.0;
        while (i != 0)
        {
            double value;
            in >> value;
            count += i;
            sum += i*value;
            in >> i;
        }
        if (dataSet > 1) result << "\n";
        result << fixed << setprecision(4) << "data set " << dataSet << ": total values = " << count << "\naverage value = " << sum / static_cast<double>(count) << endl;
        dataSet++;
    }
    return result.str();
}

///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}