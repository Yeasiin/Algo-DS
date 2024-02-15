#include <iostream>

using namespace std;

int main()
{

    int a = 20;
    int *b = new int(22);
    *b = 50;

    cout << "hello " << a << "\n"
         << *b;

    return 0;
}