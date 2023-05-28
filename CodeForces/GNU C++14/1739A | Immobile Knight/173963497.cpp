#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans1,ans2;
        if(n==2 &&m==3){
            ans1=1;
            ans2=2;
        }
        else if(n==3 && m==3){
            ans1=2;
            ans2=2;
        }
        else if(n==3 && m==2){
            ans1=2;
            ans2=1;
        }
        else{
            ans1=n;
            ans2=m;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
 
 return 0;
}