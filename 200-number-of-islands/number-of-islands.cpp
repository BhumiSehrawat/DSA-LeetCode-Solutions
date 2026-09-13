class Solution {
public:
    void bfs(vector<vector<char>>& grid,int r,int c){
        queue<pair<int,int>>q;
        q.push({r,c});
        grid[r][c]='0';
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            //up
            if(r-1>=0 && grid[r-1][c]=='1'){
                grid[r-1][c]='0';
                q.push({r-1,c});
            }//down
            if(r+1<grid.size() && grid[r+1][c]=='1'){
                grid[r+1][c]='0';
                q.push({r+1,c});
            }
            //right
            if(c+1<grid[0].size() && grid[r][c+1]=='1'){
                grid[r][c+1]='0';
                q.push({r,c+1});
            }
            //left
            if(c-1>=0 && grid[r][c-1]=='1'){
                grid[r][c-1]='0';
                q.push({r,c-1});
            }

        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(grid,i,j);
                }
            }
        }
        return count;
        
    }
};