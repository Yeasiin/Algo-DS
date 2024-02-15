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
    tail->next = newNode;

    tail = newNode;
}

void reverse_list(Node *head, Node *tail)
{

    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {

        int tmp = i->val;
        i->val = j->val;
        j->val = tmp;

        i = i->next;
        j = j->prev;
    }
    int tmp = i->val;
    i->val = j->val;
    j->val = tmp;
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

    reverse_list(head, tail);

    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    return 0;
}