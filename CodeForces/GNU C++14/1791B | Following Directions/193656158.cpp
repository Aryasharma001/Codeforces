#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
     int x=0,y=0;
     int n;
     cin>>n;
     string s;
     cin>>s;
     bool flag=0;
     for(int i=0;i<s.size();i++){
         if(s[i]=='L')
         x=x-1;
         if(s[i]=='R')
         x++;
         if(s[i]=='U')
         y++;
         if(s[i]=='D')
         y=y-1;
         if(x==1 &&y==1){
            flag=1;
            break;
         }
     }
     if(flag==0)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
 }
 return 0;
}