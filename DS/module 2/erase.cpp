#include <iostream>
#include <vector>

using namespace std;

int main()

{

    vector<int> v = {10, 20, 30, 40};

    v.erase(v.begin() + 2, v.end());

    for (int n : v)
    {
        cout << n;
    }

    return 0;
}