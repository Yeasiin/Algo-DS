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
        tail = newNode;
        return true;
    }

    newNode->next = tail->next;
    tail->next = newNode;

    tail = newNode;
    return true;
}

void print_recursive(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_recursive(head->next);
    cout << head->val << " ";
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
    cout << "\n";

    print_recursive(head);

    return 0;
}