#include<iostream>
using namespace std;

int main() {
	// your code goes here
	float bs,da,hr,gs,t;
	cin >>t;
	for(int i=0; i<t; i++){
	    cin>>bs;
	    if(bs<1500){
	        hr=bs/10;
	        da=0.900*bs;
	        gs=bs+hr+da;
	       printf("%.2f\n",gs);
	    }
	    else{
	        hr=500;
	        da=0.980*bs;
	        gs=bs+hr+da;
	       printf("%.2f\n",gs);
	    }
	}
	
	        
	return 0;
}