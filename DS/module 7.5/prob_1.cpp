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

int list_size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head1, tail1, x);
    }

    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head2, tail2, x);
    }

    int size1 = list_size(head1);
    int size2 = list_size(head2);

    if (size1 == size2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}