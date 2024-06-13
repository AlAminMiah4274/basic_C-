#include <bits/stdc++.h>
using namespace std;

void take_reference(string &text)
{
    text = "Al Amin Miah Rich";
}

int main()
{
    string name = "Al Amin Miah Poor";
    take_reference(name);

    cout << name << endl;

    return 0;
}