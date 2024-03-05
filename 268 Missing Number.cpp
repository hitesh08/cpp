// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=(nums.size()*(nums.size()+1)/2);
        for(auto i=0;i<nums.size();i++) sum-=nums[i];
        return sum;
    }
};
