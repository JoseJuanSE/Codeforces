/* url: https://codeforces.com/problemset/problem/1108/B */
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

void solve(){
	
}
int main(){
	int t;
	cin>>t;
	vi a(10005,0);
	int x,maxi=INT_MIN;
	forn(i,t){
		cin>>x;
		maxi=max(maxi,x);
		a[x]++;
	}
	cout<<maxi<<" ";
	forr(i,1,10000){
		if(maxi%i==0)a[i]--;
	}
	for(int i=10000;i>0;i--){
		if(a[i]){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
