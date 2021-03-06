//link: https://codeforces.com/contest/1419/problem/C
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

void solve(){
    int n,x,a;
    cin>>n>>x;
    int men=0,may=0,inf=0,dif=0;
    forn(i,n){
        cin>>a;
        if(a==x)
            inf++;
        else if(a>x)
            may++;
        else
            men++;
        dif+=x-a;
    }
    cout<<endl;
    if(inf and !men and !may)
        cout<<0<<endl;
    else if(inf or (!inf and dif==0))
        cout<<1<<endl;
    else
        cout<<2<<endl;
}
int main(){
    //OJ;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}