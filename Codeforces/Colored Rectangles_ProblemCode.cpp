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
 
void solve(){
    ll R,G,B;
    cin >> R >> G >> B;
    ll r[R], g[G], b[B];
    map<ll, ll> cntr, cntg, cntb;
    vll a;
    for(ll i=0; i<R; i++){
        cin >> r[i];
        a.pb(r[i]);
        cntr[r[i]]++;
    }
    for(ll i=0; i<G; i++){
        cin >> g[i];
        a.pb(g[i]);
        cntg[g[i]]++;
    }
    for(ll i=0; i<B; i++){
        cin >> b[i];
        a.pb(b[i]);
        cntb[b[i]]++;
    }
    sort(r, r + R);
    sort(g, g + G);
    sort(b, b + B);
    ll dp[R + 1][G + 1][B + 1] = {0};
    for(ll i = 0; i<=R; i++){
        for(ll j = 0; j<=G; j++){
            for(ll k = 0; k<=B; k++){
                ll val = 0;
                if(i > 0 && j > 0){
                    val = max(val, dp[i - 1][j - 1][k] + r[R - i]*g[G - j]);
                }
                if(i > 0 && k > 0){
                    val = max(val, dp[i - 1][j][k - 1] + r[R - i]*b[B - k]);
                }
                if(k > 0 && j > 0){
                    val = max(val, dp[i][j - 1][k - 1] + g[G - j]*b[B - k]);
                }
                dp[i][j][k] = val;
            }
        }
    }
    ll ans = 0;
    for(ll i = 0; i<=R; i++){
        for(ll j = 0; j<=G; j++){
            for(ll k = 0; k<=B; k++){
                ans = max(ans, dp[i][j][k]);
            }
        }
    }
    cout << ans << "\n";
}
 
int main(){ 
    fast
    ll tc=1;
    ll caseno = 1;
    while(tc--){
        solve();
        caseno++;
    }
}