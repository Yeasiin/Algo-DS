for (int i = 1; i < n; i++)
    {
        for (int child : nodes[i])
        {
            cout << child << " ";
        }
        cout << "\n";
    }