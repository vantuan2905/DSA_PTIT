#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[20000];char s;string ds="1ABCDEFGHIJKLMNOPQSTUVWXYZ";
void ql(int i){
	for(int j=a[i-1];ds[j]<=s;j++){
		a[i]=j;
		if(i==k){
			for(int x=1;x<=i;x++) cout<<ds[a[x]];cout<<endl;
		}else ql(i+1);
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>s>>k;
		a[0]=1;ql(1);
	}
}
