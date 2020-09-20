//link: https://codeforces.com/contest/1419/problem/A
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
    int n;
    str s;
    cin>>n>>s;
    if(n%2==0){//last play Breach
        int imp=0;
        for(int i=1;i<n;i+=2){
            imp+= int(s[i]-'0')%2==0?0:1;
        }
        if(imp==n/2)cout<<1;
        else cout<<2;
        cout<<endl;
    }else{//Raze
        int p=0;
        for(int i=0;i<n;i+=2){
            int x=int(s[i]-'0');
            p+= x%2==0?1:0;
        }
        if(p==(n/2+1))cout<<2;
        else cout<<1;
        cout<<endl;
    }
}
int main(){
    //OJ;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}