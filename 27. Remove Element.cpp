// https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                result.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<count;i++) nums[i]=result[i];
        return count;
    }
};

// memory optimised
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
