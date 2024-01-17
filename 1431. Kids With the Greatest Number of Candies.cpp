// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandies = INT_MIN;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandies)
                maxCandies = candies[i];
        }
        for (int j = 0; j < candies.size(); j++) {
            if (candies[j] + extraCandies >= maxCandies)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
