#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int n;
        cin >> n;

        int numbers[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int minimum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                minimum = min(minimum, numbers[i] + numbers[j] + j - i);
                
            }
        }

        cout << minimum << endl;
    }

    return 0;
}