#include <bits/stdc++.h>
using namespace std;

int *dynamic_variable(void)
{
    int *num = new int;
    *num = 1000;

    return num;
}

int main()
{
    int *number = new int;
    *number = 100;

    // cout << number << endl;

    float *gpa = new float;
    *gpa = 4.92;
    // cout << *gpa << endl;
    delete gpa;

    int *value = dynamic_variable();
    cout << *value << endl;

    return 0;
}