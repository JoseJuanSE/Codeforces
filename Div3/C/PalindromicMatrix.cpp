/* url: https://codeforces.com/contest/1118/problem/C */
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t,centro,x,arre[22][22];
	cin>>t;
	vector<int> a(1002,0);
	vector<pair<int,int> > res;
	bool g=false;
	for(int i=0;i<t*t;i++){
		cin>>x;
		a[x]++;
	}
	for(int i=0;i<1001;i++){
		if((a[i]%2 and g) or (a[i]%2 and t%2==0)){cout<<"NO";return 0;}
		else if(a[i]%2 and !g){
			centro=i;
			a[i]--;
			res.push_back({a[i],i});
			g=true;
		}
		else if(a[i]>0){res.push_back({a[i],i});}
	}
	sort(res.rbegin(),res.rend());
	int ap=0;
	for(int i=1;i<=t/2;i++){
		for(int j=1;j<=t/2;j++){
			while(res[ap].first<4 and ap<res.size())ap++;
			if(ap==res.size()){cout<<"NO";return 0;}
			arre[i][j]=res[ap].second;
			res[ap].first-=4;
		}
	}
	cout<<"YES"<<endl;
	int s=t%2?2:1;
	for(int i=t/2;i>=1;i--,s+=2)
		for(int j=1;j<=t/2;j++)
			arre[i+s][j]=arre[i][j];	
	for(int i=1;i<=t;i++){
		int s=t%2?2:1;
		for(int j=t/2;j>=1;j--,s+=2)
			arre[i][j+s]=arre[i][j];
	}
	if(t%2){
		arre[t/2+1][t/2+1]=centro;
		ap=0;
		for(int i=1;i<=t/2;i++){
			while(res[ap].first<2)ap++;
			if(ap==res.size()){cout<<"NO";return 0;}
			arre[i][t/2+1]=res[ap].second;
			arre[t-i+1][t/2+1]=res[ap].second;
			res[ap].first-=2;
			while(res[ap].first<2 and ap<res.size())ap++;
			if(ap==res.size()){cout<<"NO";return 0;}
			arre[t/2+1][i]=res[ap].second;
			arre[t/2+1][t-i+1]=res[ap].second;
			res[ap].first-=2;
		}
	}
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			cout<<arre[i][j]<<" ";
		}	
		cout<<endl;
	}
	return 0;
}
