//Problem's link -> https://leetcode.com/problems/implement-strstr
//Problem's code -> 28. Implement strStr() (Leetcode#28)
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
