#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }

    newNode->next = tail->next;
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

Node *find_url(Node *node, string val)
{
    Node *tmp = node;
    bool flag = false;
    while (tmp != NULL)
    {

        if (tmp->val == val)
        {
            flag = true;
            break;
        }

        tmp = tmp->next;
    }

    if (flag)
    {
        return tmp;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;

    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    Node *currNode = NULL;
    for (int i = 0; i < q; i++)
    {
        string command, url;
        cin >> command;

        if (command == "visit")
        {
            cin >> url;
            Node *isFound = find_url(head, url);
            if (isFound)
            {
                cout << url << endl;
                currNode = isFound;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (currNode->prev)
            {
                cout << currNode->prev->val << endl;
                currNode = currNode->prev;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (currNode->next)
            {
                cout << currNode->next->val << endl;
                currNode = currNode->next;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}