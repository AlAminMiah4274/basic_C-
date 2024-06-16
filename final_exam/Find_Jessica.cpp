#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream stored_text(S);
    string word;

    int flag = 0;
    while (stored_text >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}