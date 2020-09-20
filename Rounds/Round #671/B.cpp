//link:https://codeforces.com/contest/1419/problem/B
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
#define OJ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
ll area(ll n){return n*(n+1)/2;}
void solve(){
    ll n,ans=0,w=0;
    cin>>n;
    for(ll i=1;1;i*=2){
        w+=i;
        if(n<area(w))break;
        ans++;
        n-=area(w);
    }
    cout<<ans<<endl;
}
int main(){
    //OJ;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}