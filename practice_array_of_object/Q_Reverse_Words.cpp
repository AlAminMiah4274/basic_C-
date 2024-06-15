#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stringstream stored_text(text);
    string word;

    bool first_word = true;
    while (stored_text >> word)
    {
        for (auto it = word.begin(); it < word.end() - 1; it++)
        {
            for (auto jt = it + 1; jt < word.end(); jt++)
            {
                swap(*it, *jt);
            }
        }

        if(!first_word)
        {
            cout << " ";
        }
        else 
        {
            first_word = false;
        }

        cout << word;
        
    }

    return 0;
}