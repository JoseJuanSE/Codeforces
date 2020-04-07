/*url: https://codeforces.com/problemset/problem/1157/B */
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
#define ub(v,f) upper_bound(v.begin(), v.end(),f)
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

int main(){
	int n;
	cin>>n;
	str a;
	cin>>a;
	vi b(10,0);
	forn(i,9){
		cin>>b[i+1];
	}
	forn(i,n){
		int nn=int(a[i]-'0');
		if(nn<b[nn]){
			while(i<n and nn<=b[nn]){
				nn=int(a[i]-'0');		
				if(nn>b[nn])break;
				a[i]=char(b[nn]+'0');	
				i++;
			}
			cout<<a;
			return 0;
		}
	}
	cout<<a;
	return 0;
}
