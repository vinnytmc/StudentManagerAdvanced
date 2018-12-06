#include "student.h"
#include <iostream>
#include <string>
#include <vector>

student::student()
{
    first = "";
    last = "";
}

void student::setName(string firstName,string lastName)
{
    first = firstName;
    last = lastName;
}

string student::fullName()
{
    string name = first;
    name.append(" ");
    name.append(last);
    return name;
}

double student::addGrade(double grade)
{
    gradeList.push_back(grade);
}

double student::getScore()
{
    double numerator = 0.0;
    double score = 0.0;

    for(int i = 0; i < gradeList.size(); i++)
    {
        numerator += gradeList[i];
    }

    if( gradeList.size() == 0)
    {
        score = 0;
    }
    else
    {
        score = numerator/gradeList.size();
    }
    return score;
}

