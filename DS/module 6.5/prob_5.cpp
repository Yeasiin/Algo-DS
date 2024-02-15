#include <iostream>

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

bool insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return true;
    }

    newNode->next = tail->next;
    tail->next = newNode;

    tail = newNode;
    return true;
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
            break;

        insert_at_tail(head, tail, x);
    }

    bool isSorted = true;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                isSorted = false;
                break;
            }
        }
        if (!isSorted)
            break;
    }
    if (isSorted)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}