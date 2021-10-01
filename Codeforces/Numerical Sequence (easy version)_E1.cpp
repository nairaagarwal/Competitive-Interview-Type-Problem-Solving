#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ff first
#define ss second
#define INF 1000000000000000000
using vll=vector<ll>;
using vi=vector<int>;
using vpl = vector<pair<ll, ll>>;
using pll = pair<ll, ll>;
ll mod = 1000000007;
ll mod2 = 998244353;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int MX = 3e4;
ll ipow(ll base, ll k, ll M) {
    base %= M;
    k = k % (M - 1);
    ll total = 1;
    while(k) {
        if(k & 1) {
            total = (total * base) % M;
        }
        base = (base * base) % M;
        k >>= 1;
    }
    return total;
}
 
ll fact(ll n){
    ll ans = 1;
    for(ll i = 1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}
 
ll modu(ll a,ll b) {
  ll c = a % b;
  return (c < 0) ? c + b : c;
}
 
ll getsize(ll n){
    string temp = to_string(n);
    ll cur = 0;
    ll sub = 0;
    ll ans = 0;
    for(ll i=0; i<temp.size() - 1; i++){
        cur = cur*10 + 9;
        ans += (cur - sub)*(i + 1);
        sub = cur;
    }
    ans += (n - cur)*temp.size();
    return ans;
}
 
void solve(){
    ll k;
    cin >> k;
    ll l = 0, r = 100000;
    ll full = 0;
    ll pre[100000 + 1];
    pre[0] = 0;
    for(ll i = 1; i<100000; i++){
        full += getsize(i);
        pre[i] = full;
        if(full >= k){
            full -= getsize(i);
            for(ll num = 1; num <= i; num++){
                string tempp = to_string(num);
                if(full + tempp.length() >= k){
                    cout << tempp[k - full - 1] << "\n";
                    return;
                }
                full += tempp.size();
            }
        }
    }
}

int main(){ 
    fast
    ll tc=1;
    cin>>tc;
    ll caseno = 1;
    while(tc--){
        solve();
        caseno++;
    }
}