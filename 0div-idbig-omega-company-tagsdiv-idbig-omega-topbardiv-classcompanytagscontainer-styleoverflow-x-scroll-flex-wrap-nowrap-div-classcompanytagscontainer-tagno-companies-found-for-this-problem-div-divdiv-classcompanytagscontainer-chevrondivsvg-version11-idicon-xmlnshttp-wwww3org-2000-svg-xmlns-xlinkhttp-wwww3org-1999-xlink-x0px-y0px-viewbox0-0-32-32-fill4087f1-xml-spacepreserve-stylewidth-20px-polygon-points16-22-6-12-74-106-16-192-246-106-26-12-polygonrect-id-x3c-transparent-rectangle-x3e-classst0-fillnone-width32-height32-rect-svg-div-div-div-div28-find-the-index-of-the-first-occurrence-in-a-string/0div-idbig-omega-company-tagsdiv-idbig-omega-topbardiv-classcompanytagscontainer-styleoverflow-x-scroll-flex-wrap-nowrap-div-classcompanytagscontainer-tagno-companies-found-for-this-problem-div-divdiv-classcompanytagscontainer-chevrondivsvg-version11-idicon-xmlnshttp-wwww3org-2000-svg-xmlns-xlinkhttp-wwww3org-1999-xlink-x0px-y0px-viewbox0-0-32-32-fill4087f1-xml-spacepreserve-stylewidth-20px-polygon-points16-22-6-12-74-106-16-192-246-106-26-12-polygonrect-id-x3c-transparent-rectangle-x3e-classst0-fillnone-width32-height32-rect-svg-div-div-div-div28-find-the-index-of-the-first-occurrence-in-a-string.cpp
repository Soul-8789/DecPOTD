class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind=haystack.find(needle);
        
        return ind==haystack.size()?-1:ind;
    }
};