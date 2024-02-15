#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelUp(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *top = q.front();
        q.pop();

        cout << top->val << " ";

        if (top->left)
            q.push(top->left);

        if (top->right)
            q.push(top->right);
    }
}

int main()
{

    Node *root = new Node(10);

    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    Node *j = new Node(110);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    b->left = e;
    b->right = f;

    c->left = g;
    c->right = h;

    d->left = i;
    d->right = j;

    levelUp(root);

    return 0;
}