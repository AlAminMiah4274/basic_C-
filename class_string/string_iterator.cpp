#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;

    for (string::iterator it = text.begin(); it < text.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}