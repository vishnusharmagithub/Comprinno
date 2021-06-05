#include<bits/stdc++.h>
using namespace std;

#define lli long long int
int main(){
	lli t,c,d,l;
	lli legs;
	cin>>t;
	while(t--){
		cin>>c>>d>>l;
		if(d<=2*c)
			legs=d*4;
		else
			legs=(c-d)*4;
		if((l%4==0)&&(l>=legs)&&(l<=4*(c+d))){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
}