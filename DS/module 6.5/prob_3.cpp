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

int list_size(Node *head)
{
    int cnt = 0;

    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print_at(Node *head, int pos, bool isDoublePrint)
{
    // cout << "pos" << pos << endl;
    Node *tmp = head;
    while (--pos)
    {
        tmp = tmp->next;
    }
    if (isDoublePrint)
    {

        cout << tmp->val << " ";
        cout << tmp->next->val << " ";
    }
    else
    {
        cout << head->next->val << endl;
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
            break;

        insert_at_tail(head, tail, x);
    }

    int size = list_size(head);
    // cout << size;

    bool isHaveToPrintDouble = size % 2 == 0;

    int pos = size / 2;
    print_at(head, pos, isHaveToPrintDouble);

    return 0;
}