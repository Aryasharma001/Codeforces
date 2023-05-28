#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     long long n;
     cin>>n;
     long long arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     long long min_count=0,max_count=0;
     long long mini=*min_element(arr,arr+n);
     long long maxi=*max_element(arr,arr+n);
     for(int i=0;i<n;i++){
         if(arr[i]==mini)
         min_count++;
         if(arr[i]==maxi)
         max_count++;
     }
     if(mini==maxi)
     cout<<n*(n-1)<<endl;
     else
     cout<<2*min_count*max_count<<endl;
     
 }
 return 0;
}