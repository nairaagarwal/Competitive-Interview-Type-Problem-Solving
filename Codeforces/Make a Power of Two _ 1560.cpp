#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll min(ll a, ll b) {
    if(a < b)
        return a;
    return b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin >> t;
    ll a[60];
    for(int i = 0 ; i < 60 ; i++) {
        a[i] = pow(2,i);
    }
    while(t--) {
        ll n;
        cin >> n;
        
        vector<int>v;
        ll cp = n;;
        while (cp > 0) {
            v.push_back(cp % 10);
            cp /= 10;
        }
        reverse(v.begin(),v.end());
        
        ll mn = 1e10 + 7;
        for(int i = 0 ; i < 60 ;i++) {
            
            ll x = a[i];
            cp = x;
            vector<int>r;
            while (cp > 0) {
                r.push_back(cp % 10);
                cp /= 10;
            }
            reverse(r.begin(),r.end());
            int j = 0 , k = 0 ;
            int cnt = 0;
            while(j < v.size() && k < r.size()) {
                
                if(v[j] == r[k]) {
                    k++;
                    j++;
                    continue;
                }
                j++;
                cnt++;
            }
            cnt += (r.size() - k) + (v.size() - j);
            // cout << a[i] << "\t" << cnt << endl;
            mn = min(mn,cnt);
        }
        cout << mn <<endl;
        
    }
}