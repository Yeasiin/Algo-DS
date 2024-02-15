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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    newNode->prev = tail;
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

        insert_at_tail(head, tail, x);
    }

    Node *start = head;
    Node *end = tail;

    bool flag = true;
    while (start != end && start->prev != end)
    {

        if (start->val != end->val)
        {
            flag = false;

            break;
        }
        start = start->next;
        end = end->prev;
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}