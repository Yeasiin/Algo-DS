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

int list_size(Node *head)
{
    int cnt = 0;

    Node *tmp = head;
    while (tmp)
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

    bool flag = true;
    if (size1 != size2)
    {
        flag = false;
    }

    Node *tmp1 = head1;
    Node *tmp2 = head2;

    for (int i = 0; i < size1; i++)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }

        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
        if (!tmp1 || !tmp2)
        {
            break;
        }
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