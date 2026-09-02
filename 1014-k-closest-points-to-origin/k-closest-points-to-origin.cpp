class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,vector<int>>>distance;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int dist=x*x+y*y;
            distance.push_back({dist,points[i]});
        }
        sort(distance.begin(),distance.end());
        vector<vector<int>>result;
        for(int i=0;i<k;i++){
            result.push_back(distance[i].second);
        }
        return result;
    }
};