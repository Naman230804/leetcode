#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int,int>> zeros;

        // Step 1: Store coordinates of all zeroes
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        // Step 2: For each zero coordinate, set row and column to zero
        for(auto &p : zeros) {
            int x = p.first;
            int y = p.second;

            // Convert entire row x to zero (x++, x-- conceptually)
            for(int col = 0; col < n; col++) {
                matrix[x][col] = 0;
            }

            // Convert entire column y to zero (y++, y-- conceptually)
            for(int row = 0; row < m; row++) {
                matrix[row][y] = 0;
            }
        }
    }
};