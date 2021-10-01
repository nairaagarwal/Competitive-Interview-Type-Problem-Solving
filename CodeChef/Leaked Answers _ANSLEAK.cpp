#include <bits/stdc++.h> 
#include <vector>
#include <cstdio>
#include <string> 
using namespace std;
typedef long long ll;
ll countSubArrayProduct(ll  a[],int n) ;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int n,m,k;
		cin >> n >>m >>k;
		int a[n][k];
		for(int i=0;i<n;i++)
			for(int j=0;j<k;j++)
				cin >>a[i][j];
		
			for(int i=1;i<=n;i++)
			{
				cout <<(i%m)+1 <<" ";
			}
		
		
		cout<<"\n";
	}
}