#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     int count=0;
     string test="314159265358979323846264338327";
     for(int i=0;i<s.size();i++){
         if(s[i]==test[i]){
             count++;
         }
         else{
             break;
         }
     }
     cout<<count<<endl;
 }
 return 0;
}