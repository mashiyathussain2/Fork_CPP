class Solution {
    bool isSafe(vector<vector<bool>>& grid, int row, int col) {
        int n = grid.size();
        if(row == 0) {
            return true; 
        }
        //left up diag
        for(int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
            if(grid[i][j]) {
                return false;
            }
        }
        
        for(int i = row, j = col; i >= 0 && j < n; --i, j++) {
            if(grid[i][j]) {
                return false;
            }
        }
        return true;
    }
    void bt(int q, vector<vector<bool>>& grid, vector<int> sub,  vector<bool>& vis, vector<vector<int>>& res) {
        if(q == vis.size() + 1) {
            res.push_back(sub);
            return;
        }
        for(int i = 0; i < vis.size(); ++i) {
            if(vis[i] == false && isSafe(grid, q-1, i)) {
                grid[q-1][i] = true;
                vis[i] = true;
                sub.push_back(i+1);
                bt(q + 1, grid, sub, vis, res);
                grid[q-1][i] = false;
                vis[i] = false;
                sub.pop_back();
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<bool> vis(n, false);
        vector<vector<int>> res;
        vector<vector<bool>> grid(n, vector<bool> (n, false));
        bt(1, grid, {},  vis, res);
        sort(res.begin(), res.end());
        vector<vector<string>> ans;
        for(auto v: res) {
            vector<string> sub;
            for(int i: v) {
                string s(v.size(), '.');
                s[i-1] = 'Q';
                sub.push_back(s);
            }
            ans.push_back(sub);
        }
        return ans;
    }
};
