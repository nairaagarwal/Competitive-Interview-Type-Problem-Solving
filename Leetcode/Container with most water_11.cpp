//problem link :- https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int temp,min,length;
        int i=0,j=n-1;
        while(i < j){
            temp = 0;
            length = 0;
            length = j - i;
            (height[i] < height[j])? min=height[i]:min=height[j];
            temp = length * min;
            if(area < temp){
                area = temp;
            }
            if(height[i] == min){
                i++;
            }else{
                j--;
            }
        }
        return area; 
    }
};