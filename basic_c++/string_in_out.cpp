#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char text[101];
    // getchar(); // it's take the first character and keep that to itself 
    cin.getline(text, 101);
    // fgets(text, 101, stdin);

    // cout << strlen(text) << endl;
    cout << text << endl;

    return 0;
}