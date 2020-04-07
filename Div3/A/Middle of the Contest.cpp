/*url: https://codeforces.com/problemset/problem/1133/A*/
#include<bits/stdc++.h>
using namespace std;
int n,m,n1,m1,n2,m2,t,t1,t2;
int main(){
	string a,b;
	cin>>a>>b;
	n=int(a[0]-'0')*10+int(a[1]-'0');
	m=int(a[3]-'0')*10+int(a[4]-'0');;
	n1=int(b[0]-'0')*10+int(b[1]-'0');
	m1=int(b[3]-'0')*10+int(b[4]-'0');
	t=(60*n)+m;
	t1=(60*n1)+m1;
	t=(t1+t)/2;
	int h=t/60;
	int m=t%60;
	if(h<10)cout<<0;
	cout<<h<<":";
	if(m<10)cout<<0;
	cout<<m;
	return 0;
}
