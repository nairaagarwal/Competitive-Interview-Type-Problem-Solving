#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll>> l;
        for(int i=0;i<m;i++){ 
            ll x,y;
            cin>>x>>y;
            l.push_back({x,y});
        }
        sort(l.begin(),l.end(), greater<pair<ll,ll>>());
        ll lcm=1;
        ll rem=n;
        ll res=0;
        for(ll i=0;i<m && rem>0;i++){
            ll a= l[i].first, b=l[i].second; 
            lcm= lcm*b/__gcd(lcm,b);
            res+=(rem - (n/lcm))*a;
            rem = n/lcm;
        }
        cout<<res<<endl;
        
        
    }
    return 0;
}