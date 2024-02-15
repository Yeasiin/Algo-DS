#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char *name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char *name, int roll, char section, int math_marks, int cls)
    {
        // strcpy(this->name, name);
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    char temp[] = "Yeasin";
    Student yeasin(temp, 20, 'A', 66, 10);

    char arfatTemp[] = "arfat";
    Student arfat(arfatTemp, 22, 'B', 88, 9);

    char emonTemp[] = "emon";
    Student emon(emonTemp, 25, 'A', 83, 8);

    if (yeasin.math_marks > arfat.math_marks && yeasin.math_marks > emon.math_marks)
    {
        cout << yeasin.name;
    }
    else if (arfat.math_marks > yeasin.math_marks && arfat.math_marks > emon.math_marks)
    {
        cout << arfat.name;
    }
    else
    {
        cout << emon.math_marks;
    }

    return 0;
}