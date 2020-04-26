/*link: https://codeforces.com/contest/1342/problem/C*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;
ll a,b,q,l,r,t;
void solve(){	
	cin>>a>>b>>q;
	ll mcm=a*b/__gcd(a,b),blo=mcm-max(a,b);
	while(q--){
		cin>>l>>r;
		ll rr=r%mcm,lll=l%mcm;
		rr=rr>=max(a,b)?rr-max(a,b)+1:0;
		lll=lll>=max(a,b)?lll-max(a,b):0;
		cout<<r/mcm*blo-l/mcm*blo+blo/mcm+rr-lll<<" ";
	}
	cout<<endl;
}
int main(){
	fast
	cin>>t;
	while(t--)
		solve();
	return 0;
}
