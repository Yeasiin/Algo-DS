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
protected:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

public:
    void push(int val)
    {
        this->size++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = head;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        this->size--;
        Node *toDel = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete toDel;
    }

    int top()
    {
        return tail->val;
    }

    bool isEmpty()
    {
        if (this->size == 0)
        {
            return true;
        }
        else
        {
            return false;
        };
    }
};

int main()
{

    MyStack stk;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {

        int x;
        cin >> x;
        stk.push(x);
    }

    while (!stk.isEmpty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}