#include <bits/stdc++.h>
using namespace std;
void solve(string a ,string b){
        int n1=a.size();
     int n2=b.size();
     if(a[0]==b[0]){
         cout<<"YES\n"<<a[0]<<"*\n";
         return;
     }
     if(a[n1-1]==b[n2-1]){
         cout<<"YES\n"<<"*"<<a[n1-1]<<"\n";
         return;
     }
     for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             if((a[i]==b[j])&&(a[i+1]==b[j+1])){
                 cout<<"YES\n"<<"*"<<a[i]<<a[i+1]<<"*\n";
                 return;
             }
         }
     }
     cout<<"NO"<<endl;
     return;
     
     
}
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     string a ,b;
     cin>>a;
     cin>>b;
     solve(a,b);
 }
 return 0;
}