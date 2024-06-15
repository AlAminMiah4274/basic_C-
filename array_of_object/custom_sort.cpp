#include <bits/stdc++.h>
using namespace std;

class Frequency
{
public:
    char value;
    int count;
};

bool compare(Frequency a, Frequency b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else 
    {
        return a.count > b.count;
    }
}

int main()
{
    string text;
    cin >> text;

    Frequency alphabet[26];
    
    // setting value and count of the object 
    for (int i = 0; i < 26; i++)
    {
        alphabet[i].value = char(i + 'a');
        alphabet[i].count = 0;
    }

    // increasing count depending on char 
    for (char c:text)
    {
        int index_alphabet = int(c - 'a');
        alphabet[index_alphabet].count++;
    }

    sort(alphabet, alphabet + 26, compare);

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i].count != 0)
        {
            for (int j = 1; j <= alphabet[i].count; j++)
            {
                cout << alphabet[i].value;
            }
        }
    }

    return 0;
}