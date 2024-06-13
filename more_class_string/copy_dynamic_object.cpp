#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int runs;
    Person(string name, int runs)
    {
        this->name = name;
        this->runs = runs;
    }
};

int main()
{
    Person *warner = new Person("David Warner", 15000);
    Person *smith = new Person("Stiven Smith", 13500);

    *warner = *smith;
    delete smith;

    cout << warner->name << " " << warner->runs << endl;

    return 0;
}