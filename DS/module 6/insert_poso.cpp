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

void insert_pos(Node *&head, int pos, int val)
{

    Node *newNode = new Node(val);
    Node *tmp = head;
    // exception insert at head / postion 0;
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        while (--pos)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a1 = new Node(20);
    Node *a2 = new Node(30);
    Node *a3 = new Node(40);
    Node *a4 = new Node(50);
    Node *a5 = new Node(60);

    head->next = a1;
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;

    while (true)
    {
        int o;
        cin >> o;

        if (o == 1)
        {
            cout << "index:" << endl;
            int p;
            cin >> p;
            cout << "Value:" << endl;
            int v;
            cin >> v;

            insert_pos(head, p, v);
        }
        else if (o == 2)
        {

            Node *tmp = head;
            while (tmp)
            {
                cout << tmp->val << " ";
                tmp = tmp->next;
            }
            cout << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}