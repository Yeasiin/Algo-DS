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
        // cout << "inserted at head\n";
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    // cout << "inserted at tail\n";
}

int list_size(Node *head)
{

    Node *tmp = head;

    int cnt = 0;

    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int input;

    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        insert_at_tail(head, tail, input);
    }

    cout << list_size(head);

    return 0;
}