class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        int s = 0;
        int e = cols - 1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            // Find row having maximum element in mid column
            int maxRow = 0;

            for (int i = 1; i < rows; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int left = (mid == 0) ? -1 : mat[maxRow][mid - 1];
            int right = (mid == cols - 1) ? -1 : mat[maxRow][mid + 1];

            if (mat[maxRow][mid] > left && mat[maxRow][mid] > right) {
                return {maxRow, mid};
            }
            else if (left > mat[maxRow][mid]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return {-1, -1};
    }
};