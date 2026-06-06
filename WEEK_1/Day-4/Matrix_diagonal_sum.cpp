#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int primary = 0;
        int secondary = 0;
        for (int i = 0; i < n; i++) {
            primary += mat[i][i];
            secondary += mat[i][n - 1 - i];
        }
        if (n % 2 != 0) {
            return (primary + secondary) - mat[n / 2][n/2];
        }
        return (primary+secondary);
    }
};