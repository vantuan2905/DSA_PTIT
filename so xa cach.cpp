#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int ok[2000];
int check(){
	for(int i=0;i<n-1;i++){
		if(abs(a[i]-a[i+1])==1) return 0;
	}
	return 1;
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(ok[j]==0){
			ok[j]=1;a[i]=j;
			if(i==n-1){
				if(check()){ //cout<<n;
				for(int x=0;x<n;x++) cout<<a[x];
				cout<<endl;
			}
			}else ql(i+1);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ql(0);
	}
}
