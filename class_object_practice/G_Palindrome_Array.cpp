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

    int i = 0, j = n - 1, flag = 1;
    while (i < j)
    {
        if (numbers[i] != numbers[j])
        {
            flag = 0;
        }
        i++;
        j--;
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