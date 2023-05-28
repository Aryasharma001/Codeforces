#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int seq=0;
     int num=1;
     for(int i=0;i<n;i++){
         if(arr[i]==num){
             num++;
             seq++;
         }
     }
     long long s=n-seq;
     if(s%k==0)
     cout<<s/k<<endl;
     else
     cout<<1+(s/k)<<endl;
 }
 return 0;
}