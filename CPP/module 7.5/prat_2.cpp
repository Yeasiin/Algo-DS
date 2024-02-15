#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{

    int n;
    cin >> n;

    Student sArr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sArr[i].name >> sArr[i].roll >> sArr[i].marks;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << sArr[i].name << " " << sArr[i].roll << " " << sArr[i].marks << endl;
    }

    return 0;
}