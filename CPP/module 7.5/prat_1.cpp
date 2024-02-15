#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool sortAlgo(Student s1, Student s2)
{

    if (s1.marks != s2.marks)
    {
        if (s1.marks < s2.marks)
        {
            return false;
        }
    }
    else
    {
        if (s1.roll > s2.roll)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;

    cin >> n;

    Student sArr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sArr[i].name >> sArr[i].roll >> sArr[i].marks;
    }

    sort(sArr, sArr + n, sortAlgo);

    for (int i = 0; i < n; i++)
    {
        cout << sArr[i].name << " " << sArr[i].roll << " " << sArr[i].marks << endl;
    }

    return 0;
}