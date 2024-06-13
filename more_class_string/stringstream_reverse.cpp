#include <bits/stdc++.h>
using namespace std;

void reversely_print(stringstream &text)
{
    string word;
    if(text >> word)
    {
        reversely_print(text);
        cout << word << endl;
    }
}

int main()
{
    string line;
    getline(cin, line);

    stringstream stored_line(line);
    reversely_print(stored_line);

    return 0;
}