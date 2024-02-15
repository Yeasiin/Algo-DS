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

void insert_tail(Node *head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option: 1 = Insert at tail" << endl;
        cout << "Option: 2 = Print list" << endl;
        cout << "Option: 3 = Break " << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Value: ";
            int x;
            cin >> x;
            insert_tail(head, x);
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else
        {
            break;
        }
    }

    return 0;
}