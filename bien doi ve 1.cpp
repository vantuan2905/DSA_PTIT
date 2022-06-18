#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int num,step;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<gt> q;
		q.push({n,0});
		while(1){
			gt tmp=q.front();q.pop();
			if(tmp.num==1){
				cout<<tmp.step<<endl;break;
			}
			int x=tmp.num;
			if(x%2==0)
			q.push({tmp.num/2,tmp.step+1});
			if(x%3==0)
			q.push({tmp.num/3,tmp.step+1});
			q.push({tmp.num-1,tmp.step+1});
		}
	}
}
