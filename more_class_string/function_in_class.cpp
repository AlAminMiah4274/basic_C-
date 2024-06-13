#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string name, int age, int marks1, int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    void hello()
    {
        cout << "Hello from Person Class" << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person rakib("Al Amin Miah", 20, 64, 20);

    cout << rakib.name << " " << rakib.age << endl;
    rakib.hello();
    cout << rakib.total_marks() << endl;

    return 0;
}