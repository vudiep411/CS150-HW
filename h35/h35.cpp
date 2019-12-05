/**
    @file h35.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h35.h"

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const std::string& name , double r)
 {
     name_ = name;
     rate_ = r;
 }
std::string Worker::getName() const {return name_;}
double Worker::getRate() const {return rate_;}


SalariedWorker::SalariedWorker(const std::string& name , double r) : Worker(name , r) {}
std::string SalariedWorker::payInfo(int hour)
{
    return "";
}


HourlyWorker::HourlyWorker(const std::string& name , double r) : Worker(name , r){}

std::string HourlyWorker::payInfo(int hour)
{
    return "";
}
/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
