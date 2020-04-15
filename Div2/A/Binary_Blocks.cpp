// url: https://codeforces.com/contest/838/problem/A
#include<bits/stdc++.h>
using namespace std;
int mapa[5002][5002];
int cons(int x,int y,int i,int j){
	return mapa[x][y]-mapa[x][j-1]-mapa[i-1][y]+mapa[i-1][j-1];
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;		
		for(int j=1;j<=m;j++){
				mapa[i][j]=s[j-1]-'0';
		}
	}
	for(int i=1;i<=5000;i++)
		for(int j=1;j<=5000;j++)
			mapa[i][j]+=mapa[i-1][j]+mapa[i][j-1]-mapa[i-1][j-1];
	int np=n,mp=m,mini=INT_MAX,tot=0;
	for(int k=2;k<=max(n,m);k++){
		tot=0;np=n;mp=m;
		int esp=k*k;
		if(np%k)np+=k-(np%k);
		if(mp%k)mp+=k-(mp%k);
		for(int i=k;i<=np;i+=k){
			for(int j=k;j<=mp;j+=k){
				int ob=cons(i,j,i-k+1,j-k+1);
				tot+=min(esp-ob,ob);
			}
		}
		mini=min(tot,mini);
	}
	cout<<mini;
	return 0;
}
