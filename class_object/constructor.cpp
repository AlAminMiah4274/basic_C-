#include <bits/stdc++.h>
using namespace std;

class Student 
{
public:
    int student_roll;
    int student_class;
    double student_gpa;
    Student(int student_roll, int student_class, double student_gpa)
    {
        this->student_roll = student_roll;
        this->student_class = student_class;
        this->student_gpa = student_gpa;
    }
};

int main()
{
    Student karim(1002, 10, 4.92);
    Student rahim(1003, 10, 3.92);

    cout << karim.student_roll << " " << karim.student_class << " " << karim.student_gpa << endl;
    cout << rahim.student_roll << " " << rahim.student_class << " " << rahim.student_gpa << endl;

    return 0;
}