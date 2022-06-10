#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000],b[2000];int ok;int k;
void sinh(){
	int i=n-1;
	while(a[i]==1){
		a[i]=0;i--;
	}
	if(i==-1){
		ok=1;return;
	}
	a[i]++;
}
int dk(){
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) c+=b[i];
	}
	if(c==k) return 1;return 0;
}
main(){
	int t;
	t=1;
	while(t--){ok=0;
		cin>>n>>k;int cnt=0;
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++) a[i]=0;
		while(ok==0){
			if(dk()){ for(int i=0;i<n;i++) if(a[i]==1) cout<<b[i]<<" ";
				cout<<endl;cnt++;
			}
			sinh();
		}
		cout<<cnt<<endl;
	}
}
