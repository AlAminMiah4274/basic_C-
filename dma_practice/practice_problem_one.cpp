#include <bits/stdc++.h>
using namespace std;

int *get_array(int size)
{
    int *numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    return numbers;
}

int main()
{
    int n;
    cin >> n;

    int *result = get_array(n);
    for(int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    delete[] result;

    return 0;
}