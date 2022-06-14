#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	long long num,du;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int n;queue<gt> q;
		cin>>n; 
		q.push({9,9%n});int kt=0;
		while(1&&kt<100){
			gt s=q.front();q.pop();
			//cout<<s.num<<"  "<<s.du<<endl;
			if(s.du==0){
				cout<<s.num<<endl;break;
			}
			q.push({s.num*10+0,(s.du*10)%n});
			q.push({s.num*10+9,((s.du*10)%n+9%n)%n});
		}
	}
}
