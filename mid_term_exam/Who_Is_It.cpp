#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student one, two, three;
        cin >> one.id >> one.name >> one.section >> one.total_marks;
        cin >> two.id >> two.name >> two.section >> two.total_marks;
        cin >> three.id >> three.name >> three.section >> three.total_marks;

        if (one.total_marks > two.total_marks && one.total_marks > three.total_marks)
        {
            cout << one.id << " " << one.name << " " << one.section << " " << one.total_marks << endl;
        }
        else if (two.total_marks > one.total_marks && two.total_marks > three.total_marks)
        {
            cout << two.id << " " << two.name << " " << two.section << " " << two.total_marks << endl;
        }
        else if (three.total_marks > one.total_marks && three.total_marks > two.total_marks)
        {
            cout << three.id << " " << three.name << " " << three.section << " " << three.total_marks << endl;
        }
        else if ((one.total_marks == two.total_marks) || (one.total_marks == three.total_marks) || (two.total_marks == three.total_marks))
        {
            if((one.id < two.id && one.total_marks == two.total_marks) || (one.id < three.id && one.total_marks == three.total_marks))
            {
                cout << one.id << " " << one.name << " " << one.section << " " << one.total_marks << endl;
            }
            else if (two.id < three.id && two.total_marks == three.total_marks)
            {
                cout << two.id << " " << two.name << " " << two.section << " " << two.total_marks << endl;
            }
            else 
            {
                cout << three.id << " " << three.name << " " << three.section << " " << three.total_marks << endl;
            }
        }
    }

    return 0;
}