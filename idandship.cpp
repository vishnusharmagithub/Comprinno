#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    char c;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>c;
        if(c=='b' || c=='B'){
            cout<<"BattleShip"<<endl;
        }
        else if(c=='c' || c=='C'){
            cout<<"Cruiser"<<endl;
        }
        else if(c=='d' || c=='D'){
            cout<<"Destroyer"<<endl;
        }
        else if(c=='f' || c=='F'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}