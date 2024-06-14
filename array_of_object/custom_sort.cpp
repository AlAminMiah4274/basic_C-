#include <bits/stdc++.h>
using namespace std;

class Frequency
{
public:
    char value;
    int count;
};

// declared a comparing function 
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

    // creating array of object 
    Frequency alphabet[26];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i].value = char(i + 'a');
        alphabet[i].count = 0;
    }

    // increasing the count 
    for (char c : text)
    {
        int ascii = int(c - 'a');
        alphabet[ascii].count++;
    }

    // sort function for sorting 
    sort(alphabet, alphabet + 26, compare);

    // printing the value 
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