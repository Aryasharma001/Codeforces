#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      char a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int hsh[26]={0};
      for(int i=0;i<n;i++){
          hsh[int(a[i]-'a')]++;
      }
      int maxi=INT_MIN;
      for(int i=0;i<26;i++){
          if(hsh[i]>0){
              maxi=max(maxi,i);
          }
      }
      cout<<maxi+1<<endl;
  }
return 0;
}