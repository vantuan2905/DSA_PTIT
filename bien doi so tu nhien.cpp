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
		int n;
		cin>>n;map<int,int> mp;
		queue<gt> q;
		q.push({n,0});
		while(q.size()){
			gt p=q.front();
			
			//cout<<p.num<<" "<<p.cnt<<endl;
			q.pop();
			if(p.num==1){
				cout<<p.cnt<<endl;break;
			}
			if(p.num-1==1){
				cout<<p.cnt+1<<endl;break;
			}
			if(mp[p.num-1]==0){
				mp[p.num-1]=1;q.push({p.num-1,p.cnt+1});
			}
			for(int i=2;i<=sqrt(p.num);i++){
				if(p.num%i==0){
					if(1){
						int x=max(i,p.num/i);
						if(mp[x]) continue;
						mp[x]=1;
						q.push({x,p.cnt+1});
					}
				}
			}
		}
	}
}
