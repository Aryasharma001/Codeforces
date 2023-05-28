#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     long long int n;
     cin>>n;
     long long ans=0;
     map<long long int,long long int>m;
     for(int i=0;i<n;i++){
         long long int a;
         cin>>a;
         long long int b=log2(a);
         ans+=m[b];
         m[b]++;
     }
     cout<<ans<<endl;
 }
 return 0;
}