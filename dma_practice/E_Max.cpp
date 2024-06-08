#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int maximum = numbers[0];
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, numbers[i]);
    }

    cout << maximum;

    return 0;
}