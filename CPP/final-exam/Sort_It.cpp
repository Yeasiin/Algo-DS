#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool sortAlgo(Student s1, Student s2)
{
    int s1Total = s1.math_marks + s1.eng_marks;
    int s2Total = s2.math_marks + s2.eng_marks;

    if (s1Total != s2Total)
    {
        if (s1Total < s2Total)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        if (s1.id > s2.id)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{

    int n;

    cin >> n;

    Student sArr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> sArr[i].name >> sArr[i].cls >> sArr[i].section >> sArr[i].id >> sArr[i].math_marks >> sArr[i].eng_marks;
    }

    sort(sArr, sArr + n, sortAlgo);

    for (int i = 0; i < n; i++)
    {

        cout << sArr[i].name << " " << sArr[i].cls << " " << sArr[i].section << " " << sArr[i].id << " " << sArr[i].math_marks << " " << sArr[i].eng_marks << endl;
    }

    return 0;
}