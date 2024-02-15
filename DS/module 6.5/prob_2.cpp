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
    }

    tail->next = newNode;
    tail = newNode;
}

bool has_duplicate(Node *head)
{
    bool flag = false;
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
                flag = true;
                break;
            }
            if (flag)
                break;
        }
    }
    return flag;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int input;

    while (true)
    {
        cin >> input;
        if (input == -1)
            break;

        insert_at_tail(head, tail, input);
    }

    if (has_duplicate(head))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}