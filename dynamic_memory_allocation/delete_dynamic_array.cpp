#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *numbers_one = new int[3];
    int *numbers_two = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> numbers_one[i];
        numbers_two[i] = numbers_one[i];
    }

    delete[] numbers_one;

    numbers_one = new int[5];
    for (int i = 0; i < 5; i++)
    {
        numbers_one[i] = numbers_two[i];
    }

    delete[] numbers_two;

    numbers_one[3] = 65;
    numbers_one[4] = 13;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers_one[i] << " ";
    }

    return 0;
}