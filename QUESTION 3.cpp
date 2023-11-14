#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool matrixSearch(vector<vector<int>>& matrix, int target)
    {
        int i = 0;
        int j = matrix[0].size()-1;

        while (i < matrix.size() && j >= 0)
        {
            if (target == matrix[i][j])
            {
                return true;
            }
            else if (target > matrix[i][j])
            {
                i++;
            }
            else {
                j--;
            }
        }
        return 0;
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> newnums = { {1,2,3,4,5},
                                    {3,4,6,7,9} };
    bool val = sol.matrixSearch(newnums, 6);
    cout << val;
}