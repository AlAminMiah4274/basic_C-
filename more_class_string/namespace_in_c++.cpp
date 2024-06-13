#include <bits/stdc++.h>
using namespace std;

namespace Warner
{
    int runs = 21;
    void hello()
    {
        cout << "Hello from Warner namespace" << endl;
    }

    class Player
    {
    public:
        string name = "Stiven Smith";
        string type = "Batsman";
        int runs = 15000;
        int total_innings = 250;
        int highest_score = 270;
    };
}

namespace Stark
{
    int wickets = 150;
    void indentification()
    {
        cout << "Hello, this mitchel stark" << endl; 
    }
}

using namespace Warner;

int main()
{
    Player smith;
    cout << smith.name << endl;

    cout << Stark::wickets << endl;

    return 0;
}