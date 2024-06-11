#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string name = "Al Amin Miah";
    // cout << name.size();
    // cout << name.max_size();
    // cout << name.capacity();

    // string text = "Hello";
    // text.clear();
    // cout << text;

    // string line = "Fernandez";
    // line.clear();
    // if (line.empty() == true)
    // {
    //     cout << "Empty" << endl;
    // }
    // else 
    // {
    //     cout << "Not Empty" << endl;
    // }

    string text;
    cin >> text;
    text.resize(8);
    text.resize(20, 'd');

    cout << text << endl;

    return 0;
}