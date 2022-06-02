#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int a,c;
};
int cmp(gt x,gt y){
	return x.c<y.c;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;vector<gt> v;int x;
		cin>>n>>x;
		for(int i=0;i<n;i++){
			gt aa;
			cin>>aa.a;aa.c=abs(aa.a-x);v.push_back(aa);
		}
		stable_sort(v.begin(),v.end(),cmp);
		for(int i=0;i<n;i++) cout<<v[i].a<<" ";cout<<endl;
	}
}
