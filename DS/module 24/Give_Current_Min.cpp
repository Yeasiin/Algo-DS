#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int com;
        cin >> com;

        if (com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            if (!pq.empty())
            {

                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (com == 1)
        {
            if (!pq.empty())
            {

                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (com == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {

                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}