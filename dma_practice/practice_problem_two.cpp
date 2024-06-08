#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *array_a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array_a[i];
    }

    int m;
    cin >> m;

    int *array_b = new int[m];
    for (int i = 0; i < n; i++)
    {
        array_b[i] = array_a[i];
    }

    delete[] array_a;

    // copied array a into array b
    for (int i = n; i < m; i++)
    {
        cin >> array_b[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << array_b[i] << " ";
    }

    return 0;
}