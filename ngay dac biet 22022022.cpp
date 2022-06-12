#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20];
int check(){
	if(a[4]==0) return 0;
	if(a[0]==a[1]&&a[0]==0) return 0;
	if(a[2]==a[3]&&a[3]==0) return 0;
	int x=a[2]*10+a[3];
	if(x>12) return 0;
	return 1;
}
void ql(int i){
	for(int j=0;j<=2;j+=2){
		a[i]=j;//cout<<1;
		if(i==n){
			if(check()){
				for(int x=0;x<8;x++){
					if(x==2||x==4) cout<<"/";
					cout<<a[x];
				}cout<<endl;
			}//else ql(i+1);
		}else ql(i+1);
	}
}
main(){
	n=7;
	ql(0);
}
