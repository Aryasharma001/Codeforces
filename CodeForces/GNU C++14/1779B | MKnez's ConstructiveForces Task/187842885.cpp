#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     int arr[n];
     if(n%2==0){
         cout<<"YES"<<endl;
         for(int i=0;i<n;i++){
            if(i%2==0)
            arr[i]=-n;
            else
            arr[i]=n;
         }
         for(int i=0;i<n;i++)
           cout<<arr[i]<<" ";
         cout<<endl;  
     }
     else if(n==3)
     cout<<"NO"<<endl;
     else{
         cout<<"YES"<<endl;
         for(int i=0;i<n;i++){
            if(i%2==0)
            arr[i]=(n/2)-1;
            else
            arr[i]=-(n/2);
         }
         for(int i=0;i<n;i++)
         
           cout<<arr[i]<<" ";
         cout<<endl; 
     }
     
     
 }
 return 0;
}