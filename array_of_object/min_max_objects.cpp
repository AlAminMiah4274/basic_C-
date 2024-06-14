#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    Student maximum;
    maximum.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > maximum.marks)
        {
            maximum = students[i];
        }
    }

    Student minimum;
    minimum.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks < minimum.marks)
        {
            minimum = students[i];
        }
    }

    cout << maximum.name << " " << maximum.roll << " " << maximum.marks << endl;
    cout << minimum.name << " " << minimum.roll << " " << minimum.marks << endl;

    return 0;
}