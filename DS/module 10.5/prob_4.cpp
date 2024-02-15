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

void print_it(Node *head, Node *tail)
{
    Node *tmpHead = head;
    Node *tmpTail = tail;

    while (tmpHead)
    {
        cout << tmpHead->val << " ";
        tmpHead = tmpHead->next;
    }
    cout << endl;

    while (tmpTail)
    {
        cout << tmpTail->val << " ";
        tmpTail = tmpTail->prev;
    }
    cout << endl;
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

void insert_at(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    if (!tmp->next)
    {
        tail = newNode;
    }

    if (tmp->next)
    {
        tmp->next->prev = newNode;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;

    cin >> q;

    for (int i = 0; i < q; i++)
    {

        int x, v;
        cin >> x >> v;

        int size = list_size(head);
        if (x > size)
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_at(head, tail, x, v);
            print_it(head, tail);
        }
    }

    return 0;
}
