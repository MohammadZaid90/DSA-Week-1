#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
	{
	 public:
		 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
			 vector<int>ans;
			 int val;
			 for (int i = 0; i < nums.size(); i++)
			 {
				 val = 0;
				 for (int j = 0; j < nums.size(); j++)
				 {
					 if (nums[j] < nums[i] && j != i)
						 val++;
				 }
				 ans.push_back(val);
			 }
			 return ans;
		 }
	 };

	 /*ostream &operator<<(ostream &out, vector<int> nums)
	 {
	     for (int i = 0; i < nums.size(); i++)
	     {
	         out << nums[i] << endl;
	     }
	     return out;
	 }*/

	 int main()
	 {
	     Solution sol;
	     vector<int> newNums = { 8,1,2,2,3 };
	     vector<int> nums = sol.smallerNumbersThanCurrent(newNums);
		 
		 for (int i = 0; i < nums.size(); i++)
		 {
			 cout << nums[i]<<endl;
		 }
	 }

