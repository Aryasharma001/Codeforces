#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 string s;
 cin>>s;
 string ans="";
 for(int i=0;i<s.size();i++){
     if(s.substr(i,3)=="WUB"){
         i=i+2;
         if(ans.back()!=' ')
         ans+=" ";
     }
     else
     ans+=s[i];
     
     
     
 }
    if(ans[0]==' ')
    ans.erase(0,1);
    if(ans.back()==' ')
    ans.pop_back();
 cout<<ans;
 return 0;
}