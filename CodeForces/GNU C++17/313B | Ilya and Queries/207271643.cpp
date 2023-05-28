#include <bits/stdc++.h>
using namespace std;
int main() {
 // your code goes here
 string s;
 cin>>s;
 int dp[1000005];
 dp[0]=0;
 for(int i=1;i<s.size();i++){
     if(s[i]==s[i-1])
     dp[i]=dp[i-1]+1;
     else
     dp[i]=dp[i-1];
 }
 int m;
 cin>>m;
 while(m--){
     int count=0;
     int l,r;
     cin>>l>>r;
     cout<<dp[r-1]-dp[l-1]<<endl;
     }
 
 
 return 0;
}