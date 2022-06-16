#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200],cot[200],d1[200],d2[200],b[200][200],f;
void ql(int i,int sum){//cout<<sum<<endl;
	if(i==n){
		f=max(f,sum);return;
	}
	for(int j=0;j<n;j++){
		if(cot[j]==0&&d1[i+j-1]==0&&d2[i-j+n]==0){
			cot[j]=d1[i+j-1]=d2[i-j+n]=1;
			a[i]=j;
			ql(i+1,sum+b[i][j]);
			cot[j]=d1[i+j-1]=d2[i-j+n]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){ n=8;f=0;
		//cin>>n;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>b[i][j];
		ql(0,0);
		cout<<f<<endl;
	}
}
