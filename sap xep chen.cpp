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
		for(int i=0;i<n;i++){
			int id=i,m=a[i];
			while(id>0&&m<a[id-1]){ a[id]=a[id-1];id--;}
			a[id]=m;
			cout<<"Buoc "<<i<<": ";
			for(int j=0;j<=i;j++) cout<<a[j]<<" ";
			cout<<endl;
		}
	}
}
