#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "One" << endl;
        break;

    case 2:
        cout << "Two" << endl;
        break;

    case 3:
        cout << "three" << endl;
        break;

    case 4:
        cout << "Four" << endl;
        break;

    default:
        cout << "Nothing is here" << endl;
    }

    return 0;
}