#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stringstream stored_text(text);

    string word;
    while (stored_text >> word)
    {
        cout << word << endl;
    }

    return 0;
}