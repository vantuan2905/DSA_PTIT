#include<iostream>
#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		} int cnt=0;
		for(int i=0;i<n;i++){
			int m=a[i],x=i;
			for(int j=i+1;j<n;j++){
				if(m>a[j]){
					m=a[j];x=j;//cnt++;
				}
			}
			if(x!=i){cnt++; swap(a[x],a[i]);}
		}
		cout<<cnt<<endl;
	}
}
