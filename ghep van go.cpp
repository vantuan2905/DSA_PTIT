#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int> st,st1;
		int l[2000],r[2000];
		for(int i=0;i<n;i++){//cout<<endl<<i<<":  ";
		if(st.size()) //cout<<a[i]<<" "<<a[st.top()]<<"--"<<endl;
			while(st.size()&&a[i]<=a[st.top()]){//cout<<a[i]<<" "<<a[st.top()]<<endl;
				st.pop();
			}
			if(st.size()==0) l[i]=0;
			else{cout<<st.top()<<endl; l[i]=st.top();}
			st.push(i);
			//cout<<l[i]<<endl;
		}
		for(int i=n-1;i>=0;i--){
			while(st1.size()&&a[i]<=a[st1.top()]){
				st1.pop();
			}
			if(st1.size()==0) r[i]=n;
			else r[i]=st1.top();
			st1.push(i);
		}
		int ans=0;
		for(int i=0;i<n;i++){//cout<<l[i]<<" "<<r[i]<<endl;
			int res=r[i]-l[i];
			if(res>=a[i]) ans=max(ans,a[i]);
		}
		cout<<ans<<endl;
	}
}
