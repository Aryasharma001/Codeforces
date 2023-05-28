#include <bits/stdc++.h>
using namespace std;
 
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<n;i++){
            arr[i]=i+1;
    }   arr[n]=1;
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    
        
    }
    return 0;
}