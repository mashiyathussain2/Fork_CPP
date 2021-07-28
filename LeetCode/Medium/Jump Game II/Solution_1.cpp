// top down approach
int min_jumps(vector<int>arr, int n, vector<int>dp, int i){
    // base case
    if(i==n-1){
        return 0;
    }
    if(i>=n){
        return INT_MAX;
    }
    // recursive case 
    if(dp[i] != 0){
        return dp[i];
    }
    // assume
    int steps = INT_MAX;
    int max_jumps = arr[i];
    for(int jumps = 1; jumps <= max_jumps; jumps++){
        int next_cell = i+jumps;
        int subprob = min_jumps(arr,n,dp,next_cell);

        if(subprob != INT_MAX){
            steps = min(steps,subprob+1);
        }
    }
    return dp[i]=steps;
}
