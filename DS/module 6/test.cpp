#include <iostream>

using namespace std;

int main()
{
    int p = 10;
    int *ptr = &p;
    *ptr = NULL;
    cout << p;
    return 0;
}