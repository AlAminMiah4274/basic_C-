#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;

    while (text.find("EGYPT") != -1)
    {
        text.replace(text.find("EGYPT"), 5, " ");
    }

    cout << text;

    return 0;
}

/*
if required character is not found then find() returns -1 
*/