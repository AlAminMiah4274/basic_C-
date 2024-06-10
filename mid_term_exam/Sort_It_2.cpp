#include <bits/stdc++.h>
using namespace std;

int *sort_it(int size)
{
    int *numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // sorted descending order 
    sort(numbers, numbers + size, greater<int>());

    return numbers;

}

int main()
{
    int n;
    cin >> n;

    int *sorted_array = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << sorted_array[i] << " ";
    }

    delete[] sorted_array;

    return 0;
}