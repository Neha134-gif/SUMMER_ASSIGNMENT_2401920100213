#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(); // row size
        int n = mat[0].size(); // col size
        if (m * n != r * c) {
            return mat;
        }
        vector<int> temp;
        // 2D-->1D
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                temp.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r, vector<int>(c));
        int k = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = temp[k];
                k++;
            }
        }
        return ans;
    }
};