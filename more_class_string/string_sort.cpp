#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    sort(text.begin(), text.end());
    for (auto it = text.begin(); it < text.end(); it++)
    {
        if(*it == ' ')
        {
            continue;
        }
        else 
        {
            cout << *it << endl;
        }
    }
    

    return 0;
}