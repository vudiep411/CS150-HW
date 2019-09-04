/**
 *  @author Vu Diep
 *  @date TTHEV
 *  @file h03.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
 //input
 string grade;
 double gradeValue;
 cout << "Enter your letter grade: " ;
 getline(cin , grade);

//processing

if (grade.compare("A+") == 0)
{
    gradeValue = 4.3;
}

else if (grade.compare("A") == 0)
{
    gradeValue = 4.0;
}

else if (grade.compare("A-") == 0)
{
    gradeValue = 3.7;
}

else if (grade.compare("B+") == 0)
{
    gradeValue = 3.3;
}

else if (grade.compare("B") == 0)
{
    gradeValue = 3.0;
}

else if (grade.compare("B-") == 0)
{
    gradeValue = 2.7;
}
else if (grade.compare("C+") == 0)
{
    gradeValue = 2.3;
}

else if (grade.compare("C") == 0)
{
    gradeValue = 2.0;
}

else if (grade.compare("C-") == 0)
{
    gradeValue = 1.7;
}

else if (grade.compare("D+") == 0)
{
    gradeValue = 1.3;
}

else if (grade.compare("D") == 0)
{
    gradeValue = 1.0;
}

else if (grade.compare("D-") == 0)
{
    gradeValue = 0.7;
}

else if (grade.compare("F") == 0)
{
    gradeValue = 0.0;
}
else
{
    cout << "ERROR" << endl;
}
//output
cout << "Grade value is [" << gradeValue << "]";








    return 0;
}
