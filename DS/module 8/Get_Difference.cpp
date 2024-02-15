#include <iostream>
#include <limits.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }

    newNode->next = tail->next;
    tail->next = newNode;

    tail = newNode;
}

int main()
{

    int min = INT_MAX;
    int max = INT_MIN;

    Node *head = NULL;
    Node *tail = NULL;

    int n;

    while (true)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }

        insert_at_tail(head, tail, n);
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
        if (i->val < min)
        {
            min = i->val;
        }
    }

    cout << max - min;

    return 0;
}