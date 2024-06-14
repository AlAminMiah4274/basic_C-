#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;

    int frequency[26] = {0};
    for (char c:text)
    {
        frequency[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 1; j <= frequency[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}