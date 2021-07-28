#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compareBoxes(vector<int>b1, vector<int>b2){
    return b1[2]>b2[2];
}
bool canPlace(vector<int>b1,vector<int>b2){
    if(b1[0]>b2[0] and b1[1]>b2[1] and b1[2]>b2[2]){
        return true;
    }
    return false;
}
int boxStacking(vector<vector<int>>boxes){
    // Sorting
    sort(boxes.begin(), boxes.end(), compareBoxes);
    int n = boxes.size();
    // 2. DP
    vector<int>dp(n+1,0);
    for(int i=0;i<n;i++){
        dp[i] = boxes[i][2]; // height pf the ith box
    }
    for(int i = 1; i<n; i++){
        // check for all the boxes whose index is less than i
        for(int j = 0; j<i;j++){
            if(canPlace(boxes[j],boxes[i])){
                int current_height = boxes[i][2];
                if(dp[j] + current_height > dp[i]){
                    dp[i] = dp[j] + current_height;
                }

            }
        }
    }
    int max_height = 0;
    for(int i=0;i<n;i++){
        max_height = max(max_height,dp[i]);
    }
    return max_height;
}

int main(){
    vector<vector<int>>boxes = {
        {2,1,2},
        {3,2,3},
        {2,2,8},
        {2,3,4},
        {2,2,1},
        {4,4,5},
    };
    int height = boxStacking(boxes);
    cout<<"max height "<<height<<endl;
    return 0;
}
