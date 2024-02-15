#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40};

    v.insert(v.begin() + 3, 50);

    for (int n : v)
    {
        cout << n << " ";
    }

    return 0;
}