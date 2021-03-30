#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.insert(x);
        }

        if (s1.size() == m)
            cout << "No" << endl;

        else
            cout << "Yes" << endl;
    }
}
