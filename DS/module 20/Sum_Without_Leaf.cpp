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

int main()
{
    int x;
    cin >> x;

    Node *root = new Node(x);
    queue<Node *> q;

    q.push(root);
    // node input
    while (!q.empty())
    {
        Node *top = q.front();
        q.pop();

        int a, b;
        cin >> a >> b;

        Node *leftNode;
        Node *rightNode;

        if (a == -1)
        {
            leftNode = NULL;
        }
        else
        {
            leftNode = new Node(a);
        }

        if (b == -1)
        {
            rightNode = NULL;
        }
        else
        {
            rightNode = new Node(b);
        }

        top->left = leftNode;
        top->right = rightNode;

        if (top->left)
        {
            q.push(leftNode);
        }

        if (top->right)
        {
            q.push(rightNode);
        }
    }

    int sum = 0;

    queue<Node *> nq;

    nq.push(root);

    while (!nq.empty())
    {
        Node *top = nq.front();
        nq.pop();

        if (top->left != NULL || top->right != NULL)
        {
            sum += top->val;
        }

        if (top->left)
        {
            nq.push(top->left);
        }

        if (top->right)
        {
            nq.push(top->right);
        }
    }

    cout << sum;

    return 0;
}