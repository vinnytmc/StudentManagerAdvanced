#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <vector>
#include <string>

using namespace std;

class student 
{
  private:
    string first;
    string last;
    vector<double> gradeList;

    public:
    void setName(string,string);
    string fullName();
    double getScore();
    double addGrade(double);
    student();
};
 

#endif
