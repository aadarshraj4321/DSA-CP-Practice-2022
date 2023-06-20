#include<bits/stc++.h>


// leetcode
class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                std::cout << matrix[i][j] << '\n';
                if(matrix[i][j] == target)
                    return true;
            }
        }
        return false;
    }
};