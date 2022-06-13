#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[200];set<int> s;int cnt=0;
void sinh(){
	int i=k-1;
	while(a[i]==n-k+i+1){//cout<<n-k+i+1<<" ";
		i--;
	}
	if(i==-1){
		cnt=0;
	}else{
		a[i]++;s.insert(a[i]);
		for(int j=i+1;j<k;j++){ a[j]=a[j-1]+1;s.insert(a[j]);}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){s.clear();
		cin>>n>>k;cnt=0;
		for(int i=0;i<k;i++){
			cin>>a[i];s.insert(a[i]);
		}
		cnt=s.size();
		sinh();
	///	for(int i=0;i<k;i++) cout<<a[i]<<" ";
		//cout<<endl;
		cout<<s.size()-cnt<<endl;
	}
}
