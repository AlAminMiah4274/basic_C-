#include <bits/stdc++.h>
using namespace std;

int main()
{
    char text[2];
    cin >> text;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            cout << "ALPHA" << endl << "IS CAPITAL" << endl;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            cout << "ALPHA" << endl << "IS SMALL" << endl;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            cout << "IS DIGIT" << endl;
        }
    }

    return 0;
}