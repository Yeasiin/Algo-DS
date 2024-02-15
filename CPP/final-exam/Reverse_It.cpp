#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student studentArr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> studentArr[i].nm >> studentArr[i].cls >> studentArr[i].s >> studentArr[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        char _temp = studentArr[i].s;
        studentArr[i].s = studentArr[n - 1 - i].s;
        studentArr[n - 1 - i].s = _temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << studentArr[i].nm << " " << studentArr[i].cls << " " << studentArr[i].s << " " << studentArr[i].id << endl;
    }

    return 0;
}