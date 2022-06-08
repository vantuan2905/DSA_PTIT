#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int i=0,cnt=0;int m=0;
		while(i<n-1){
			cnt=0;//cout<<i<<"  ";
			while(a[i]<a[i+1]&&i<n-1){ cnt++;i++;}
			while(a[i]>a[i+1]&&i<n-1){ cnt++;i++;}
			while(a[i]==a[i+1]&&i<n) i++;
			m=max(cnt+1,m);
		}
		cout<<m<<endl;
	}
}
