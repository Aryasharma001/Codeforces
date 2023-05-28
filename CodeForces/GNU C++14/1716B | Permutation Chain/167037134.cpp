#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
           arr[i]=i;
        
        }
       
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
               cout<<arr[j]<<" ";
            }
            cout<<endl;
            if(i!=n){
                swap(arr[i],arr[i+1]);
            }
        }
       
       
        }
 
return 0;
}