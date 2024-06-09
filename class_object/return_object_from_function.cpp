#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
    int runs;
    int innings;
    double height;
    Player(int runs, int innings, double height)
    {
        this->runs = runs;
        this->innings = innings;
        this->height = height;
    }
};

Player *object_return()
{
    Player warner(12500, 450, 5.9);
    Player *history = &warner;

    return history;
}

int main()
{
    Player *result = object_return();
    cout << result->runs << " " << result->innings << " " << result->height << endl;

    return 0;
}