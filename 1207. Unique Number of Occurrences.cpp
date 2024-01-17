// https://leetcode.com/problems/unique-number-of-occurrences/description/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto i:arr) freq[i]++;
        unordered_set<int> st;
        for(auto i:freq){
            if(st.count(i.second)) return fal¯se;
            st.insert(i.second);
        }
        return true;
    }
};
