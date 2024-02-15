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

int list_size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;

    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->next;
}

void delete_at(Node *&head, int pos)
{
    int size = list_size(head);
    if (head == NULL)
    {
        return;
    }
    if (pos >= size)
    {
        return;
    }

    if (pos == 0)
    {
        head = head->next;
        return;
    }
    Node *tmp = head;
    while (--pos)
    {
        tmp = tmp->next;
    }

    Node *toDel = tmp->next;
    tmp->next = tmp->next->next;
    delete toDel;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {

        int x;
        int v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, v);
            print_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
            print_list(head);
        }
        else if (x == 2)
        {
            delete_at(head, v);
            print_list(head);
        }
    }

    return 0;
}
