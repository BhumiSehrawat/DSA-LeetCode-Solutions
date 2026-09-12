class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalcolor=image[sr][sc];
        if(originalcolor==color){
            return image;
        }
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r-1>=0 && image[r-1][c]==originalcolor){
                image[r-1][c]=color;
                q.push({r-1,c});
            }
            if(r+1<image.size() && image[r+1][c]==originalcolor){
                image[r+1][c]=color;
                q.push({r+1,c});
            }
            if(c-1>=0 && image[r][c-1]==originalcolor){
                image[r][c-1]=color;
                q.push({r,c-1});
            }
            if(c+1<image[0].size() && image[r][c+1]==originalcolor){
                image[r][c+1]=color;
                q.push({r,c+1});
            }
        } 
        return image;   
    }
};