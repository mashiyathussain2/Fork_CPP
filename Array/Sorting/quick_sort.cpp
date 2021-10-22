#include <bits/stdc++.h>
using namespace std;

int partition(int l, int r, vector<int> &v)
{
    int pivot = v[r];
    int j = l - 1;
    for (int i = l; i < r; i++)
    {
        if (v[i] < pivot)
        {
            j++;
            swap(v[i], v[j]);
        }
    }
    swap(v[j + 1], v[r]);
    return j + 1;
}
void quicksort(int l, int r, vector<int> &v)
{
    if (l < r)
    {
        int pi = partition(l, r, v);
        quicksort(l, pi - 1, v);
        quicksort(pi, r, v);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &a : v)
        cin >> a;
    quicksort(0, n - 1, v);
    for (int &a : v)
        cout << a << " ";
}
