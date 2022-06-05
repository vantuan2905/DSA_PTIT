#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[2000],n;
int xuli(int a[],int l,int r,int key){
	int i=l,j=r;
	while(i<=j){
		while(a[i]<key) i++;
		while(a[j]>key) j--;
		if(i<=j){
			swap(a[i],a[j]);i++;j--;
		}
	}
	return i;
}
void q_sort(int a[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		int k=xuli(a,l,r,a[mid]);
		q_sort(a,l,k-1);
		q_sort(a,k,r);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		q_sort(a,0,n-1);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
