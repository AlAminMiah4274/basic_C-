#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stringstream stored_text(text);
    string word;

    int word_count = 0;
    while (stored_text >> word)
    {
        int flag = 0;
        for (char c:word)
        {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            word_count++;
        }
    }

    cout << word_count << endl;

    return 0;
}