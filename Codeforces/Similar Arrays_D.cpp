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
const int MX = 4e5;
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
    ll n,m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(m);
    map<pll, bool> mp;
    for(ll i=0; i<m; i++){
        cin >> a[i].ff >> a[i].ss;
        mp[a[i]] = 1;
        mp[{a[i].ss, a[i].ff}] = 1;
    }
    ll mx = n*n - n;
    if(n == 1 || (m > mx - 2 && m != 0)){
        cout << "NO\n";
        return;
    }
    ll i1, i2 = -1;
    for(ll i=1; i<=n; i++){
        for(ll j = 1; j<=n; j++){
            if(!mp[{i, j}] && !mp[{j, i}] && i!=j){
                i1 = i - 1, i2 = j - 1;
                break;
            }
        }
        if(i2 != -1)break;
    }
    if(i2 == -1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    ll aa = 1;
    ll ans[n];
    for(ll i=0; i<n; i++){
        if(i == i1)cout << n - 1 << " ";
        else if(i == i2) cout << n << " ";
        else cout << aa++ << " ";
    }
    cout << "\n";
    aa = 1;
    for(ll i=0; i<n; i++){
        if(i == i1)cout << n << " ";
        else if(i == i2) cout << n << " ";
        else cout << aa++ << " ";
    }
    cout << "\n";
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