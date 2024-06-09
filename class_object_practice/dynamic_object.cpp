#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no = 7;
    char country[20] = "India";
    int runs = 30000;
    char skin_color[100] = "brown";
};

int main()
{
    Cricketer *dhoni = new Cricketer;

    Cricketer *kohli = new Cricketer;
    // kohli = dhoni;
    kohli->jersey_no= dhoni->jersey_no, *kohli->country = *dhoni->country, *kohli->skin_color = *dhoni->skin_color;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << " " << kohli->skin_color;

    return 0;
}