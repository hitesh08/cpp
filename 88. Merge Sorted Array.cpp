// https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }
        // copy the leftovers from here
        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }
        for(int it=0;it<m+n;it++) nums1[it]=result[it];
    }
};
