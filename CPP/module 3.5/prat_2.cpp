#include <bits/stdc++.h>

using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char *country;
};

int main()
{
    Cricketer *dhoni = new Cricketer();
    char _country[] = "India";
    dhoni->country = _country;
    dhoni->jersey_no = 10;

    cout << dhoni->country;

    Cricketer *kohli = new Cricketer();

    kohli = dhoni;
    delete dhoni;
    cout << "Kholi\n";
    cout << kohli->country;
    cout << kohli->jersey_no;
    cout << "Kholi\n";
    cout << kohli->jersey_no;

    return 0;
}