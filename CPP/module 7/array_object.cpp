#include <iostream>

using namespace std;

class Student
{
public:
    int roll;

    // Student(int roll)
    // {
    //     this->roll = roll;
    // }
};

int main()
{

    // Student arr[5] = {new Student(21)};
    Student arr[24];

    arr[0].roll = 22;

    Student stdnt;

    stdnt.roll = 21;

    Student *stdn2 = new Student();

    stdn2->roll;

    cout
        << "hello";
    return 0;
}