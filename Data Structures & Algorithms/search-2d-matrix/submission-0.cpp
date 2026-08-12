class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int l = 0;
        int r = matrix.size() - 1;

        while (l <= r) {

            int m = l + (r - l) / 2;

            if (target >= matrix[m][0] &&
                target <= matrix[m].back()) {

                int x = 0;
                int y = matrix[m].size() - 1;

                while (x <= y) {

                    int z = x + (y - x) / 2;

                    if (matrix[m][z] == target) {
                        return true;
                    }
                    else if (matrix[m][z] < target) {
                        x = z + 1;
                    }
                    else {
                        y = z - 1;
                    }
                }

                return false;
            }
            else if (target > matrix[m].back()) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }

        return false;
    }
};
