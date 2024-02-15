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
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
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

    void pop()
    {
        size--;
        Node *toDel = tail;
        tail = tail->prev;
        if (tail)
        {
            tail->next = NULL;
        }
        delete toDel;
    }
    int top()
    {
        return tail->val;
    }

    bool isEmpty()
    {
        if (size < 1)
            return true;
        else
            return false;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
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

    void pop()
    {
        size--;
        Node *toDel = head;
        head = head->next;
        if (head)
        {
            head->prev = NULL;
        }
        delete toDel;
    }
    int front()
    {
        return head->val;
    }
    bool isEmpty()
    {

        if (size < 1)
            return true;
        else
            return false;
    }
};

int main()
{
    int n, m;

    cin >> n >> m;

    MyStack s;
    MyQueue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (q.size != s.size)
    {
        cout << "NO\n";
    }
    else
    {
        bool flag = true;

        while (!q.isEmpty())
        {
            if (q.front() != s.top())
            {
                flag = false;
                break;
            }
            q.pop();
            s.pop();
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

    return 0;
}