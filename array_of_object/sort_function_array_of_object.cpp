#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compare(Student a, Student b)
{
    // if(a.marks == b.marks)
    // {
    //     return a.roll < b.roll;
    // }
    // else 
    // {
    //     return a.marks > b.marks;
    // }

    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks < b.marks)
    {
        return false;
    }
    else 
    {
        if(a.roll < b.roll)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

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

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}