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

void insert_at(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        else
        {
            // newNode->next = head;
            // head->next = newNode;
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return;
        }
    }
    // cout << "h-lw";
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next)
    {
        tmp->next->prev = newNode;
    }
    newNode->prev = tmp;
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_list(Node *head)
{

    Node *tmp = head;

    cout << "L -> ";
    cout << tmp->val << " ";
    while (tmp->next != NULL)
    {
        cout << tmp->next->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    cout << "R -> ";

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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

        int sz = list_size(head);

        if (x > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at(head, x, v);
            print_list(head);
        }
    }

    return 0;
}