#include <bits/stdc++.h>

using namespace std;

int lcs(string a, string b, int aa, int bb)
{

    if (aa == 0 || bb == 0)
        return 0;

    if (a[aa - 1] == b[bb - 1])
    {
        int ans = lcs(a, b, aa - 1, bb - 1);
        return ans + 1;
    }
    else
    {

        int op1 = lcs(a, b, aa - 1, bb);
        int op2 = lcs(a, b, aa, bb - 1);

        return max(op1, op2);
    }
}

int main()
{

    while (!cin.eof())
    {

        string a, b;
        cin >> a >> b;

        int aa = a.size();
        int bb = b.size();

        int ans = lcs(a, b, aa, bb);

        if (bb == ans)
        {
            cout << "Possible";
        }
        else
        {
            cout << "Impossible";
        }

        cout << endl;
    }

    return 0;
}