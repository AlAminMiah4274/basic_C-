#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        // code
        int length = strlen(s);
        sort(s, s + length);

        for (int i = 0; i < length; i++)
        {
            if (s[i] != '\0')
            {
                if (s[i] == ' ')
                {
                    continue;
                }
                else
                {
                    cout << s[i];
                }
            }
        }
        cout << endl;
    }

    return 0;
}