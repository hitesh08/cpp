// https://leetcode.com/problems/greatest-common-divisor-of-strings/description/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // if a + b is same as b + a, then we can just pick the substring of any string
        // from zero to the gcd of those two lengths
        if(str1+str2 == str2+str1)
            return str1.substr(0,gcd(str1.length(),str2.length()));
        else return "";
    }
};
