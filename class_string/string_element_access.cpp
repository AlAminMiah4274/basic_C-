#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;

    cout << text[0] << endl;
    cout << text[text.size() - 1] << endl;
    cout << text.back() << endl;
    cout << text.front() << endl;
    cout << text.at(4) << endl;

    return 0;
}