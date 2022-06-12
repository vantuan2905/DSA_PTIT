#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[2000];int k;int ok;
void ql(int i,int sum){
	if(sum==k){ ok++;
//	cout<<sum<<"  "<<i<<endl;
	 cout<<"[";
		for(int x=1;x<i-1;x++) cout<<b[a[x]]<<" ";cout<<b[a[i-1]]<<"] ";
	}
	for(int j=a[i-1]+1;j<=n;j++){
		if(sum+b[j]<=k){ a[i]=j;
			ql(i+1,sum+b[j]);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;ok=0;
		for(int i=0;i<n;i++) cin>>b[i+1];
		sort(b+1,b+n+1);
		ql(1,0);
		if(ok==0) cout<<-1<<endl;
		cout<<endl;
	}
}
