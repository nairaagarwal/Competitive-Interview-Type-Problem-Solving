	#include <bits/stdc++.h>
		
		using namespace std;
		
		void fileioe()
		{
		    freopen("input.txt", "r", stdin);
		    freopen("OUTPUT.txt", "w", stdout);
		    freopen("error.txt","w",stderr);
		}
		#ifndef ONLINE_JUDGE
		#define fioe() fileioe()
		#else
		#define fioe() 1
		#endif
		
		#define ub upper_bound
		#define lb lower_bound
		#define bs binary_search
		#define mp make_pair
		#define eb emplace_back
		#define pb push_back
		#define endl "\n"
		#define pi 3.1415926535897932384626433832795
		#define mod 1000000007
		#define ff first
		#define ss second 
		#define mem(ar) memset(ar,0,sizeof ar)
		#define one(x) __builtin_popcount(x)
		#define rep(i, a, b) for (int i=a; i<(b); i++)
		#define all(a) (a).begin(),(a).end()
		#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
		#define w(n) while(n--)
		
		typedef long long int ll;
		typedef unsigned long long ull;
		typedef double db;
		typedef vector<int> vl;
		typedef vector<ll> v;
		typedef set<ll> st;
		#define PI 3.14159265
		typedef pair<ll,ll> pll;
		int main() 
		{		
			int t;
			cin >> t;
	
			while(t--)
			{
				ll n,l,k;
				cin >> n >> k >> l;
				ll v [n];
				map<ll,ll>mp;int f=0;
				if(k==1)
				{
					if(n==1)
					{
						cout<<"1\n";
						continue;
					}
					else
					{
						cout<<-1<<endl;
						continue;
					}
				}
				for(int i=0;i<n;i++)
				{
					v[i]=i%k + 1 ;
					mp[v[i]]++;
					if(mp[v[i]]>l)
					{
						f=1;
						break;
					}
				}
				if(f==1)
					cout<<-1<<endl;
				else
				{
					for(int i=0;i<n;i++)
						cout<<v[i]<<" ";
					cout<<endl;
				}
			
			}}
