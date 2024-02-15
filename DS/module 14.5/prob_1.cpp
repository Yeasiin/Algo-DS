#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    int size()
    {
        return sz;
    }
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;

        tail = newNode;
    }

    int pop()
    {
        sz--;
        int lastVal = tail->val;
        tail = tail->prev;
        if (tail)
        {
            tail->next = NULL;
        }
        else
        {
            tail = NULL;
            head = NULL;
        }
        return lastVal;
    }

    int front()
    {
        return tail->val;
    }

    bool empty()
    {
        if (sz >= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    MyStack stack1;
    MyStack stack2;

    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack1.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        stack2.push(x);
    }

    if (stack1.size() == stack2.size())
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {

            if (stack1.pop() != stack2.pop())
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}