class Solution {
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int x = grid.size(), y = 0, numIslands = 0;
        if(x) y = grid[0].size();
        
        for(int i=0;i<x;i++){
                for(int j=0;j<y;j++){
                    if(grid[i][j]=='1'){
                        findgrid(i,j,grid);
                        numIslands++;
                    }
                }
            
        }
        return numIslands;
        
     }
private :
    void findgrid(int a,int b, vector<vector<char>>& grid){
        int x = grid.size(), y = grid[0].size();
        if(a<0 or b<0  or a>=x or b>=y or grid[a][b]!='1')
            return;
        grid[a][b]='0';
        int cx[4] = {0,-1,1,0};
        int cy[4] = {-1,0,0,1};
        for(int i=0;i<4;i++){
            findgrid(a+cx[i],b+cy[i],grid);
        }
    }
                    
};