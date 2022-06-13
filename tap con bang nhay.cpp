#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[2000];int k;int ok;
void ql(int i,int sum){
	if(sum>k||ok==1) return;
	if(k==sum){ ok=1;return;}
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
		cin>>n;k=0;ok=0;
		for(int i=1;i<=n;i++){ cin>>b[i];k+=b[i];}
		cout<<k<<endl;
		if(k%2==0){
			k/=2;
			ql(1,0);
		}
		cout<<k<<"  "<<ok<<endl;
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
