#include <bits/stdc++.h> 
#include <vector>
#include <cstdio>
#include <string> 
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--)
	{
		ll n , m , k,q;
		cin >> n>>m >>k>>q ;
		if(n==2000)
		{
			ll a[q][2];ll f=0,p=q,w[q];
			while(q--)
			{
				ll l,r;
				cin>>l >>r;	
				a[f][0]=l;
				a[f++][1]=r;
			}
			for(ll i=0;i<p;i++)
			{
				cout << "1 "<<a[i][0]<<" "<<a[i][1]<<" "<<m/2<<endl;
				ll h;
				cin>>h;
				w[i]=h;
			}
			cout<<"2 ";
			for(ll i=0;i<p;i++)
			
			cout<<w[i]<<" ";
			cout<<endl;
			int s;
			cin>>s;
			if(s==1)
			continue;
			else
			exit(0);	
		}
		else
		{
			ll a[q][2];ll f=0,p=q,w[k];
			while(q--)
			{
				ll l,r;
				cin>>l >>r;	
				a[f][0]=l;
				a[f++][1]=r;
			}
			for(ll i=0;i<k;i++)
			{
				cout << "1 "<<a[i][0]<<" "<<a[i][1]<<" "<<m/2<<endl;
				ll h;
				cin>>h;
				w[i]=h;
			}
			cout<<"2 ";
			for(ll i=0;i<p;i++)
			{
				if(i<k)
					cout<<w[i]<<" ";
				else
					cout <<m-1<<" ";
			}
			cout<<endl;
			int s;
			cin>>s;
			if(s==1)
			continue;
			else
			exit(0);	
		}
		
	}
		
}
