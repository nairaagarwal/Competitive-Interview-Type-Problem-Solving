class Solution {
public:
    void sum(vector<int>& candidates,int target,vector<vector<int>>& ans,int i,vector<int> &t)
    {
        if(i >= candidates.size() || target < 0)
            return;
        
        if(target == 0){
            ans.push_back(t);
            return;
        }
        t.push_back(candidates[i]);
       
        sum(candidates,target-candidates[i],ans,i,t);
        t.pop_back();
        sum(candidates,target,ans,i+1,t);
        return;
 

        
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> t;
        sum(candidates,target,ans,0,t);
        return ans;
    }
};
