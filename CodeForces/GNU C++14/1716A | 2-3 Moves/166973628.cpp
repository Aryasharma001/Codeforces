#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0;
        bool flag=n%3!=0;
        if(n==1){
            cout<<"2"<<endl;
        }
        else{
            cout<<(n/3)+flag<<endl;
        }
    
    }
 
 return 0;
}