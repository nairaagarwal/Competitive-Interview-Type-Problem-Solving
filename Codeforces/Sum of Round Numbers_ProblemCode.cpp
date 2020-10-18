#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector <int> v;
		int n,cnt,d;
		cnt=0;
		cin>>n;
	
		while(n>0){
			d=pow(10,cnt);
			if(n%10!=0){
				v.push_back(n%10*d);
			}
			cnt++;
			n=n/10;
		}
		cout<<v.size()<<endl;
		for(auto i:v){
			cout<<i<<" ";
		}
	}
}
