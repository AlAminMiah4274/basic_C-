#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }


    return 0;
}