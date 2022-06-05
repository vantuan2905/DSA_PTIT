#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		multiset<int> a,b;
		cin>>n>>m;
		for(int i=0;i<n+m;i++){
			int x;
			cin>>x;
			a.insert(x);
		}
		for(set<int>::iterator i=a.begin();i!=a.end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
	}
}

