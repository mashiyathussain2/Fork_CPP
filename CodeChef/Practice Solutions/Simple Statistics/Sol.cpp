#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int N, K;
	    cin >> N >> K;
	    int A[N];
	    for(int i=0; i<N; i++)
	        cin >> A[i];
	        
        sort(A, A+N);
        
        double sum = 0;
        for(int i=K; i<N-K; i++)
            sum += A[i];
        cout << fixed << setprecision(6) << double(sum/(N-(K*2))) << endl;
	}
	return 0;
}
