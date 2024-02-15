#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insert_into_heap(vector<int> &v)
{

    int x;
    cin >> x;

    v.push_back(x);

    int last_idx = v.size() - 1;
    // sorting into heap
    while (true)
    {
        int parent = (last_idx - 1) / 2;
        if (v[last_idx] > v[parent])
        {
            swap(v[last_idx], v[parent]);
            last_idx = parent;
        }
        else
        {
            break;
        }
    }
}

void heap_pop_out(vector<int> &v)
{

    v[0] = v[v.size() - 1];
    v.pop_back();

    int curr = 0;

    while (true)
    {

        int left_idx = (curr * 2) + 1;
        int right_idx = (curr * 2) + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {

            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[curr])
            {
                swap(v[curr], v[left_idx]);
                curr = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[curr])
            {
                swap(v[curr], v[right_idx]);
                curr = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] > v[curr])
            {
                swap(v[left_idx], v[curr]);
                curr = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] > v[curr])
            {
                swap(v[right_idx], v[curr]);
                curr = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{

    vector<int> v;

    while (true)
    {

        int com;
        // 0== input
        // 1 = pop
        // 2 = print
        // any == break;
        cin >> com;

        if (com == 0)
        {

            insert_into_heap(v);
        }
        else if (com == 1)
        {
            heap_pop_out(v);
        }
        else if (com == 2)
        {
            for (int iv : v)
            {
                cout << iv << " ";
            }
            cout << endl;
        }
        else
        {
            break;
            //
        }
    }

    return 0;
}