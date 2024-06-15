#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    bool inside_word = false;
    int count_word = 0;

    for (char c : text)
    {
        if(isalpha(c))
        {
            if (inside_word == false)
            {
                count_word++;
                inside_word = true;
            }
        }
        else 
        {
            inside_word = false;
        }
    }

    cout << count_word << endl;
}