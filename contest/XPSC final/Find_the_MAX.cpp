#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 5;
int feq[N] = {0};
class Comp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second != b.second)
        {
            return a.second < b.second;
        }
        else
        {
            return a.first < b.first;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    priority_queue<int> pq;

    while (t--)
    {

        int a, b;

        cin >> a;

        if (a == 1)
        {
            cin >> b;
            feq[b]++;
            pq.push(b);
        }
        else
        {
            if (pq.empty())
            {
                cout << "empty\n";
            }
            else
            {

                int op1 = pq.top();
                pq.pop();

                if (!pq.empty())
                {

                    int op2 = pq.top();
                    pq.pop();

                    if (feq[op1] > feq[op2])
                    {
                        cout << op1 << "\n";
                        feq[op1] = 0;
                        pq.push(op2);
                    }
                    else if (feq[op1] < feq[op2])
                    {
                        cout << op2 << "\n";
                        feq[op2] = 0;
                        pq.push(op1);
                    }
                    else
                    {
                        cout << op1 << "\n";
                        feq[op1] = 0;
                        pq.push(op2);
                    }
                }
                else
                {
                    feq[op1] = 0;
                    cout << op1 << "\n";
                }
            }
        }
    }

    // cout << "hello";

    return 0;
}