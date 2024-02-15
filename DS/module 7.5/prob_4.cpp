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

void print_at_tail(Node *&head, Node *&tail, int val)
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
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        print_at_tail(head, tail, x);
    }

    int max = INT_MIN;

    Node *tmp = head;

    while (tmp)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << max;

    return 0;
}