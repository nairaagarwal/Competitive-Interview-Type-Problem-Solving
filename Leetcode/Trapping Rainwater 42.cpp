class Solution {
public:
    int trap(vector<int>& h)
    {
        int n = h.size();
        if(n == 0)
            return 0;
        vector<int > l(n),r(n);
        int mx = h[n-1];
        r[n-1] = mx;
        for(int i = n - 2 ;i >= 0;i--)
        {
            if(h[i] > mx)
                mx = h[i];
            r[i] = mx;
            
        }
        mx = h[0];
        l[0] = mx;
        
        for(int i = 1 ;i < n ;i++)
        {
            if(h[i] > mx)
                mx = h[i];
            l[i] = mx;
            
        }
        int ans = 0;
        for(int i = 0 ;i < n;i++)
            // cout<< l[i]<<" "<<r[i]<<" "<<h[i]<<endl;
            ans += -h[i] + min(l[i],r[i]);
        return ans;
        
        
    }
};
