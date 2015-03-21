#include <bits/stdc++.h>
using namespace std;
int main(){
	long long l,r;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int add=0;
		cin>>l>>r;
		r=l^r;
		int a=1;
		while(a<=r){a=a<<1;++add;}
		while(a<=l){if(l|a)++add; a=a<<1;} 
		cout<<add;
	}
	
	return 0;
}
