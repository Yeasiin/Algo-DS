#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

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

    Node *root = NULL;

    if (x != -1)
        root = new Node(x);

    queue<Node *> q;

    vector<int> v;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {

        Node *top = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *leftNode = NULL;
        Node *rightNode = NULL;

        if (l != -1)
        {
            leftNode = new Node(l);
        }
        if (r != -1)
        {
            rightNode = new Node(r);
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

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *top = q.front();
        q.pop();

        if (top->left == NULL && top->right == NULL)
            v.push_back(top->val);

        if (top->left)
        {
            q.push(top->left);
        }

        if (top->right)
        {
            q.push(top->right);
        }
    }

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}