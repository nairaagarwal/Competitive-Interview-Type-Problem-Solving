//Problem's link - https://leetcode.com/problems/implement-strstr/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()) {
            if(haystack.find(needle) != std::string::npos)
                return(haystack.find(needle));
            return(-1);
        }
        return(0);
    }
};
