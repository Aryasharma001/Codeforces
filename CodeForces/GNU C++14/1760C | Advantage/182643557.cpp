#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int v[n];
      for(int i=0;i<n;i++){
          v[i]=arr[i];
      }
     sort(v,v+n);
     int max1=v[n-1];
     int max2=v[n-2];
     for(int i=0;i<n;i++){
         if(arr[i]==max1){
             cout<<arr[i]-max2<<" ";
         }
         else{
             cout<<arr[i]-max1<<" ";
         }
     }
    
     cout<<endl;
      
  }
return 0;
}