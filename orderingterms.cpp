#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int a[3],b[3],c[3];
	    cin >> a[0] >> a[1] >> a[2];
	    cin >> b[0] >> b[1] >> b[2];
	    cin >> c[0] >> c[1] >> c[2];
	    int s1=a[0]+a[1]+a[2];
	    int s2=b[0]+b[1]+b[2];
	    int s3=c[0]+c[1]+c[2];
	    if(s1==s2 || s2==s3 || s1==s3)
	        cout << "no" <<endl;
	    else{
	        if(s1>s2 && s1>s3){
	            if(s2>s3){
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]>=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]>=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	        }
	        else if(s2>s1 && s2>s3){
	            if(s1>s3){
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]>=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]<=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	        }
	        else if(s3>s1 && s2<s3){
	            if(s1>s2){
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]<=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]<=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	        }
	    }
	}
	return 0;
}