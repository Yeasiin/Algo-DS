#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float x = 2.3043042;

    cout << "hello world\n"
         << fixed << setprecision(5) << x << "\nokay now?";

    // std::cout << fixed << setprecision(2) << x;
    return 0;
}
