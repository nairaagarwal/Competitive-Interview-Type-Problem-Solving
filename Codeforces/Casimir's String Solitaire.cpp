/* Written by Galaxy
    Country: India */


/*....................HEADER FILES....................*/
#include<bits/stdc++.h>
#include<algorithm>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
/*...................Shortcut Keys....................*/
#define ll long long
#define endl "\n"
#define ld long double
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define bg begin
#define ed end
#define f first
#define s second
#define all(x) x.bg(),x.ed()
#define mpl map<ll,ll>
#define pll pair<ll,ll>
#define sep ' '
#define mod 1000000007
#define MAX 1000000000
/*.................Function Shortcuts................*/
ll max(ll a, ll b){
    return a>b?a:b;
}
ll min(ll a, ll b){
    return a<b?a:b;
}
ll power(ll a, ll b){
    if(b == 0)return 1;
    ll ref = power(a,b/2);
    if(b&1)
        return ref*ref*a;
    else
        return ref*ref;
}
bool isPrime(ll n){
    if(n == 0 || n == 1)return false;
    for(ll i = 2; i*i <= n; i++){
        if(n%i == 0)return false;
    }
    return true;
}
vll vinput(ll n){
    ll ref;
    vll v;
    for(ll i = 0; i < n; i++){
        cin >> ref;
        v.pb(ref);
    }
    return v;
}
ll fac(ll n){
    if(n == 0 || n == 1)return 1;
    return n*fac(n-1);
}
ll binarysearch(ll a[], ll l, ll r, ll x){
    if(r >= l){
    ll mid = (l+r)/2;
    if(a[mid] == x)return mid;
    if(a[mid] > x)return binarysearch(a,l,mid-1,x);
    if(a[mid] < x)return binarysearch(a,mid+1,r,x);
    }
    return -1;
}
ll gcd(ll a, ll b){
    if(b == 0)return a;
    return gcd(b,a%b);
}
void psum(ll a[], ll n){
    for(ll i = 1; i < n; i++){
        a[i] += a[i-1];
    }
}
void printans(vll a){
    for(auto x:a){
        cout << x << sep;
    }
    cout << endl;
}

/*....................Syntax Shortcuts...................*/

#define For(n) for(ll i = 0; i < n; i++)
#define rev(n) for(ll i = n-1; i > -1; i--)
#define order(x) sort(all(x))
#define array(a,n) sort(a,a+n)
#define rsort(v) sort(v.rbegin(),v.rend())

/*...................FAST I/O...........................*/
#define ios ios_base::sync_with_stdio(0); cin.tie(0);

/*..........Some extra things from cp handbook..........*/
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

/*----------------------------------------Actual Code Starts from here--------------------------------------*/

void solve(){

    ll counta=0,countb=0,countc=0;
    string a;
    cin >> a;

    For(a.length()){
        if(a[i]=='A')
            counta++;
        if(a[i]=='B')
            countb++;
        if(a[i]=='C')
            countc++;
    }
        if(counta+countc==countb)
            cout <<"YES\n";
        else
            cout<<"NO\n";
 
}

int main(){
    ios
    ll n;
    cin >> n;
    while(n--)solve();
}