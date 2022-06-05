#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
void merge(int a[],int l,int mid,int r){ 
	int i=l,j=mid+1,k=l;int b[1000005];r++;mid++;
	while(i<mid&&j<r){
		if(a[i]<a[j]){
			b[k++]=a[i];i++;
		}else{
			b[k++]=a[j];j++;
		}
		while(i==mid&&j<r){
			b[k++]=a[j++];
		}
		while(j==r&&i<mid){
			b[k++]=a[i++];
		}
	}
	for(int i=l;i<r;i++) a[i]=b[i];
}
void merge_sort(int a[],int l,int r){
	if(l<r){
	int mid=(l+r)/2;
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);
	merge(a,l,mid,r);
}
}
main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		merge_sort(a,0,n-1);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
