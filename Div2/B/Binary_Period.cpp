/*link: https://codeforces.com/contest/1342/problem/B*/
#include<bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ALL(v) v.begin(), v.end()
#define ALLR(v) v.rbegin(), v.rend()
#define deb cout<<"HOLA\n";
#define UNIQUE(v) (v).resize(unique(ALL(v))-(v).begin())
#define forn(i,n) for (int i = 0; i < n; i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define bs(v,f) binary_search(ALL(v),f)
#define lb(v,f) lower_bound(ALL(v),f)
#define ub(v,f) upper_bound(ALL(v),f)
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef long double ld;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<ii> vii;
bool alleq(str x){
	forr(i,1,x.size()-1)
		if(x[0]!=x[i])return false;
	return true;
}
void solve(){
	str x;
	cin>>x;
	if(alleq(x))cout<<x;
	else{
		forn(i,x.size()-1){
			if(x[i]=='0' and x[i+1]=='0'){
				cout<<0<<1;
			}
			else if(x[i]=='1' and x[i+1]=='1'){
				cout<<1<<0;
			}else cout<<x[i];
		}
		cout<<x[x.size()-1];
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
