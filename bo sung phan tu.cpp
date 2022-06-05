#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;set<int> s;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		int a=*s.begin(),b=*s.rbegin();
		cout<<(b-a+1)-s.size()<<endl;
	}
}

