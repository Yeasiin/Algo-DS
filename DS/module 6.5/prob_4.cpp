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
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

bool insert_at_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return true;
    }

    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node *tmp = head;
    while (--index)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid\n";
            return false;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    return true;
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

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int index, value;
        cin >> index >> value;
        bool isValid = insert_at_position(head, index, value);

        if (isValid)
        {
            print_list(head);
        }
    }

    return 0;
}