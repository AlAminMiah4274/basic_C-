#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student alamin("Al Amin Miah", 9, 'B', 85, 10);
    Student karim("Karim Banzema", 10, 'B', 80, 10);
    Student rahim("Rahim Sterling", 15, 'B', 83, 10);

    if (alamin.math_marks > karim.math_marks && alamin.math_marks > rahim.math_marks)
    {
        cout << alamin.name;
    }
    else if (rahim.math_marks > karim.math_marks)
    {
        cout << rahim.name;
    }
    else 
    {
        cout << karim.name;
    }

    return 0;
}