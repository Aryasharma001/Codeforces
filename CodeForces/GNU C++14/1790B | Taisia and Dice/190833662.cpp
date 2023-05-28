#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int n,s,r;
     cin>>n>>s>>r;
     vector<int>v;
     int max_element=s-r;
     v.push_back(max_element);
     int a=r/(n-1);
     int re=r%(n-1);
    for(int i=1;i<n;i++){
        if(re!=0){
            v.push_back(a+1);
            re--;
        }
        else 
        v.push_back(a);
    }
     for(auto it:v){
         cout<<it<<" ";
     }
     cout<<endl;
 }
 return 0;
}