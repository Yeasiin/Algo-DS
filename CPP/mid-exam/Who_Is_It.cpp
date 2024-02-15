#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
void prtStudent(Student stdnt)
{
    cout << stdnt.id << " " << stdnt.name << " " << stdnt.section << " " << stdnt.total_marks;
}

int main()
{
    // Write your code here
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student sakib, akib, rakib;

        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;

        cin >>
            akib.id >> akib.name >> akib.section >> akib.total_marks;

        cin >>
            rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;

        if (sakib.total_marks > akib.total_marks && sakib.total_marks > rakib.total_marks)
        {
            prtStudent(sakib);
        }
        else if (akib.total_marks > sakib.total_marks && akib.total_marks > rakib.total_marks)
        {
            prtStudent(akib);
        }
        else if (rakib.total_marks > sakib.total_marks && rakib.total_marks > akib.total_marks)
        {
            prtStudent(rakib);
        }
        else
        {
            if (sakib.total_marks == rakib.total_marks)
            {
                if (sakib.id < rakib.id)
                {
                    prtStudent(sakib);
                }
                else
                {
                    prtStudent(rakib);
                }
            }
            else if (sakib.total_marks == akib.total_marks)
            {
                if (sakib.id < akib.id)
                {
                    prtStudent(sakib);
                }
                else
                {

                    prtStudent(akib);
                }
            }
            else if (akib.total_marks == rakib.total_marks)
            {
                if (akib.id < rakib.id)
                {

                    prtStudent(akib);
                }
                else
                {

                    prtStudent(rakib);
                }
            }
        }
        cout << endl;
    }

    return 0;
}
