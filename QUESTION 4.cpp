#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int a = 0;
        for (int b = 1; b < nums.size(); b++)
        {
            if (nums[a] != nums[b])
            {
                a++;
                nums[a] = nums[b];
            }
        }
        return a + 1;
    }
};
int main()
{
    Solution s;
    vector<int> v = { 0,0,1,1,1,2,2,3,3,4 };
    int a = s.removeDuplicates(v);
    for (int i = 0; i < a; i++)
    {
        cout << v[i] << " ";
    }
}