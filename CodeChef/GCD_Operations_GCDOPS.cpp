/**
Consider a sequence A1,A2,…,AN, where initially, Ai=i for each valid i. You may perform any number of operations on this sequence (including zero). In one operation, you should choose two valid indices i and j, compute the greatest common divisor of Ai and Aj (let's denote it by g), and change both Ai and Aj to g.

You are given a sequence B1,B2,…,BN. Is it possible to obtain this sequence, i.e. change A to B, using the given operations?
 * */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v(n+1);
        bool flag = true;
        for(ll i=1; i<=n; i++)
            cin>>v[i];
            
        for(ll i=1; i<=n; i++)
            if(v[i] != i)
            {
                if(gcd(v[i], i) != v[i])
                    flag = false;
            }
            
        cout<<(flag ? "YES" : "NO")<<endl;
    }
	return 0;
}