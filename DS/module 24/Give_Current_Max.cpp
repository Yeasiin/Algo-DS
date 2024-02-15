#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        else
        {

            return a.marks < b.marks;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        Student stdn = Student(name, roll, marks);

        pq.push(stdn);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int com;
        cin >> com;

        if (com == 0)
        {
            string name;
            int roll;
            int marks;
            getchar();
            cin >> name >> roll >> marks;

            Student studnt = Student(name, roll, marks);
            pq.push(studnt);

            Student top = pq.top();

            cout << top.name << " " << top.roll << " " << top.marks << endl;
        }
        else if (com == 1)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (com == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}