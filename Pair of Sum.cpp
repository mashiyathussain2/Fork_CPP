
 
#include <iostream>
using namespace std;
bool C(int A[], int size,int sum)
{
    int l, r;
    sort(A, A + size);
    l = 0;
    r = size - 1;
    while (l < r)
    {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else 
            r--;
    }
    return 0;
}
 

int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n;
    int s=16;
    cin>>n;
  
    for(int i=0; i<n ; i++)
    {
      cin>>A[i];
    }
  
    int size = sizeof(A) / sizeof(A[0]);
 
    if (C(A, size, s))
        cout << "Array has two elements with given sum";
    else
        cout << "Array doesn't have two elements with given sum";
 
    return 0;
}
