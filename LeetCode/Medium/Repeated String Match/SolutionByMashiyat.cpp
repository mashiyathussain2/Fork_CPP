#include <bits/stdc++.h>
using namespace std;

bool issubstring(string str2, string str1){
	int M = str2.length();
	int N = str1.length();
	for (int i = 0; i <= N - M; i++) {
		int j;
		for (j = 0; j < M; j++)
			if (str1[i + j] != str2[j])
				break;
		if (j == M) // pattern matched
			return true;
	}
	return false; // not a substring
}
int Min_repetation(string A, string B){
	int ans = 1; // To store minimum number of repetitions
	string S = A; // To store repeated string
	// Until size of S is less than B
	while(S.size() < B.size()){
		S += A;
		ans++;
    }	
	// ans times repetition makes required answer
	if (issubstring(B, S)) 
        return ans;
	// Add one more string of A
	if (issubstring(B, S+A))
		return ans + 1;	
	// If no such solution exists
	return -1;
}
int main(){
	string A = "abcd", B = "cdabcdab";
	cout << Min_repetation(A, B);
	return 0;
}
