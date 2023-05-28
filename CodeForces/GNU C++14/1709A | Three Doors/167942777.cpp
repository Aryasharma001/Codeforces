#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        bool flag=0;
        int arr[3];
        for(int i=1;i<=3;i++){
            cin>>arr[i];
        }
        if(arr[x]==0){
            flag=1;
        }
      
        int k=arr[x];
        if(arr[k]==0){
            flag=1;
        }
      
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    
   
    return 0;
}