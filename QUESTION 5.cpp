#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            currSum = max(currSum + nums[i], nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
int main()
{
    Solution s;
    vector<int> v = { -2,1,-3,4,-1,2,1,-5,4 };
    int a = s.maxSubArray(v);
    cout << a;
}