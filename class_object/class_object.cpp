#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student one, two, three;
    cin.getline(one.name, 100);
    cin >> one.roll >> one.cgpa;
    getchar();
    cin.getline(two.name, 100);
    cin >> two.roll >> two.cgpa;
    getchar();
    cin.getline(three.name, 100);
    cin >> three.roll >> three.cgpa;

    cout << one.name << " " << one.roll << " " << one.cgpa << endl;
    cout << two.name << " " << two.roll << " " << two.cgpa << endl;
    cout << three.name << " " << three.roll << " " << three.cgpa << endl;

    return 0;
}