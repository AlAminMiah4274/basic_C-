#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    // a += b;
    // b += a;
    // a.append(b);

    // a = "HelloA";
    // a += 'A';
    a.push_back('A');

    a.pop_back();
    a.pop_back();


    cout << a << endl;

    return 0;
}