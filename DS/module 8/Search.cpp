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
        tail = newNode;
        return;
    }

    newNode->next = tail->next;
    tail->next = newNode;

    tail = newNode;
}

void search(Node *head, int c)
{

    int flag = 0;
    Node *tmp = head;
    int index = 0;
    while (tmp)
    {
        if (tmp->val == c)
        {
            flag = 1;
            break;
        }
        index++;
        tmp = tmp->next;
    }

    if (!flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << index << endl;
    }
};

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
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
        int contain;

        cin >> contain;

        search(head, contain);
    }

    return 0;
}