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

// ? *& ? (* mean it is a pointer) (*& means the pointer passed by reference) other wise that is passed by value and inside the function if you make change that's not gonna affect outside. if you want to affect outside have to use(*&)

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "inserted at head\n\n";
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << "inserted at tail\n\n";
}

void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        cout << "\nInserted at head\n\n";
    }
    else
    {
        Node *tmp = head;
        int _pos = pos;
        if (tmp == NULL)
        {
            cout << "\nInvalid Index\n\n";
            return;
        }
        while (--pos)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                cout << "\nInvalid Index\n\n";
                return;
            }
        }

        newNode->next = tmp->next;
        tmp->next = newNode;
        cout << "\nInserted at: " << _pos << " postion \n\n";
    }
}

void delete_at_postion(Node *&head, int pos)
{
    Node *tmp = head;
    if (head == NULL)
    {
        cout << "\nInvalid Index\n\n";
        return;
    }
    if (pos == 0)
    {
        // replacing the head value into head->next mean delete current and make it next
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        cout << "\nDeleted the head\n\n";
    }
    else
    {
        int _pos = pos;
        while (--pos)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                cout << "\nInvalid Index\n\n";
                return;
            }
        }
        // replacing the previous index->next into next index->next. (avoiding the current index)
        // by that current index is left over and deleted from list
        if (tmp->next == NULL)
        {
            cout << "\nInvalid Index\n\n";
            return;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;

        cout
            << "\nDelete at the " << _pos << " postion\n\n";
    }
}

void print_list(Node *head)
{
    Node *tmp = head;

    cout << "\nYour list item: ";
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n\n";
    ;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "Option: 0 = Print list\n";
        cout << "Option: 1 = Insert at tail\n";
        cout << "Option: 2 = Insert at Position\n";
        cout << "Option: 3 = Delete at Postion\n";
        cout << "Option: 9 = Break\n";
        int op;
        cin >> op;
        if (op == 0)
        {
            print_list(head);
        }
        else if (op == 1)
        {
            int val;
            cout << "Value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            int pos, val;
            cout << "Postion: ";
            cin >> pos;
            cout << "Value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Postion: ";
            cin >> pos;
            delete_at_postion(head, pos);
        }
        else
        {
            break;
        }
    }

    return 0;
}