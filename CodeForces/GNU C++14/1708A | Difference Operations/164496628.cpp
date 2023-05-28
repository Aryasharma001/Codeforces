#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool flag=1;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        
        for(int i=2;i<=n;i++){
            if(arr[i]%arr[1]!=0){
                flag=0;
                break;
                }
            else{
                continue;
                }
            }
            
        
       if(flag==1){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
        
    }
 
 return 0;
}