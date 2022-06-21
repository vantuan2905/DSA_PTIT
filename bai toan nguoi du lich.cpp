#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200][200],fopt,b[200];int ok[200];int m;
void ql(int i,int sum){
	//f(i>n) return;
	
	//if(i>n) return;
	for(int j=2;j<=n;j++){
		if(ok[j]==0){
			ok[j]=1;
			b[i]=j;
			if(i==n-1){
				if(sum+a[b[i-1]][j]+a[b[i]][1]<fopt) fopt=sum+a[b[i]][1]+a[b[i-1]][j];
				//for(int x=0;x<n;x++) cout<<b[x]<<" ";cout<<sum<<endl;
			}else
			if(sum+a[b[i-1]][j]+(n-i)*m<fopt) ql(i+1,sum+a[b[i-1]][j]);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){m=1e9;
		cin>>n;fopt=1e9;
		for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){ cin>>a[i][j];if(a[i][j]!=0) m=min(m,a[i][j]);}
		ok[1]=1;b[0]=1;
		ql(1,0);ok[1]=0;
		cout<<fopt<<endl;
	}
}
