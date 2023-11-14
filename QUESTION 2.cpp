#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 class Solution
 {
 public:
     int removeElement(vector<int> &nums, int val)
     {
         int index = 0;
         for (int i = 0; i < nums.size(); i++)
         {
             if (nums[i] != val)
             {
                 nums[index] = nums[i];
                 index++;
             }
         }
         return index;
     }
 };


 int main()
 {
     Solution sol;
     vector<int> newNums = {5, 1, 2, 3, 45};
     int number = sol.removeElement(newNums, 45);
     for (int i = 0; i < number; i++)
     {
         cout << newNums[i] << endl;
     }
 }

