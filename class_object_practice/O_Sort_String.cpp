#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char text[n];
    cin >> text;

    sort(text, text + n);

    cout << text;

    return 0;
}