#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int num,cnt;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		queue<gt> q;
		q.push({a,0});int ok[10005]={0};
		while(q.size()){
			gt g=q.front();q.pop();//cout<<q.front().num<<endl;
			//cout<<g.num<<endl;
			if(b==g.num){
				cout<<g.cnt<<endl;break;
			}
			if(g.num*2==b||g.num-1==b){
				cout<<g.cnt+1<<endl;break;
			}
			if(g.num<=b&&ok[g.num*2]==0){ q.push({g.num*2,g.cnt+1});ok[g.num*2]=1;}
			if(g.num-1>=0&&ok[g.num-1]==0){ q.push({g.num-1,g.cnt+1});ok[g.num-1]=1;}
		}
	}
}
