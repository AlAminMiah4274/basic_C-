#include <bits/stdc++.h>
using namespace std;

int *dynamic_array(int size)
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
    int *result = dynamic_array(n);
    
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}