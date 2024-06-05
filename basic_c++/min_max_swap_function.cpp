#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    // int a, b;
    // cin >> a >> b;

    // swap(a, b);
    // cout << a << " " << b << endl;

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    // int minimum = min(a, b);
    int minimum = min({a, b, c, d, e, f});
    cout << "min number: " << minimum << endl;

    // int maximum = max(a, b);
    int maximum = max({a, b, c, d, e, f});
    cout << "max number: " << maximum << endl;

    return 0;
}