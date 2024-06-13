#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text("hello world");
    cout << text << endl;

    string text_two("hello world", 5);
    cout << text_two << endl;

    string line = "Corrupted country";
    string text_three(line, 5);
    cout << text_three << endl;

    string text_four(15, 'A');
    cout << text_four << endl;

    return 0;
}