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
};

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

    bool isPalindrome = true;

    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            isPalindrome = false;
        }
        i = i->next;
        j = j->prev;
    }

    if (i->val != j->val)
    {
        isPalindrome = false;
    }

    if (isPalindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}