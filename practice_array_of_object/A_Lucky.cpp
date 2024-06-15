#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string digit;
        cin >> digit;

        int first_sum = 0;
        for (int i = 0; i < 3; i++)
        {
            first_sum += digit[i] - '0';
            
        }

        int last_sum = 0;
        for (int i = 3; i < 6; i++)
        {
            last_sum += digit[i] - '0';
        }

        if(first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}