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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void deleteN(Node *tmp, int val)
{

    Node *tmp2 = tmp;
    while (tmp2->next != NULL)
    {
        if (tmp2->next->val == val)
        {
            Node *toDel = tmp2->next;
            tmp2->next = toDel->next;
            delete toDel;
        }
        else
        {
            tmp2 = tmp2->next;
        }
    }
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

    Node *tmp = head;

    for (Node *i = head; i != NULL; i = i->next)
    {
        int val = i->val;
        Node *tmp = i;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == val)
            {
                Node *toDel = tmp->next;
                tmp->next = toDel->next;
                delete toDel;
            }
            else
            {
                tmp = tmp->next;
            }
        }
    }

    while (tmp != NULL)
    {
        deleteN(tmp, tmp->val);
        tmp = tmp->next;
    }

    print_list(head);

    return 0;
}
