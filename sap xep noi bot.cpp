#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	t=1;
	while(t--){
		int n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=n-1;i>0;i--){
			int kt=1;
			for(int j=0;j<i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);kt=0;
				}
			}
			if(kt==0){
				cout<<"Buoc "<<n-i<<": ";
				for(int j=0;j<n;j++) cout<<a[j]<<" ";
				cout<<endl;
			}else break;
		}
	}
}
