#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,t;
        cin>>a>>b>>c;
        int k=a-1;
        t=abs(b-c)+c-1;
        if(k>t){
            cout<<"2"<<endl;
        }
        else if(k==t){
            cout<<"3"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
 
 return 0;
}