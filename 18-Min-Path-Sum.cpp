class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int INF = 1e9+5;
        int x = grid.size(),y=grid[0].size();
        vector<vector<int>> dp(x,vector<int>(y));
        for (int r=0;r<x;r++){
            for(int c=0;c<y;c++){
                if(r==0 && c==0)
                    dp[r][c]=grid[r][c];
                else
                    dp[r][c] = grid[r][c]+min(r==0?INF:dp[r-1][c],c==0?INF:dp[r][c-1]);
            }
        }
        
        return dp[x-1][y-1];
        
    }
};