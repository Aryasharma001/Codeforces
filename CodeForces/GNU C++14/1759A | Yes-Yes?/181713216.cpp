#include <bits/stdc++.h>
using namespace std;
string strings(string s ,int n){
    string s1=s;
    while(n--){
        s=s+s1;
    }
    return s;
}
int main() {
  int n;
  cin>>n;
  while(n--){
      string s;
      cin>>s;
      int t=s.size();
      string p="Yes";
      string repeat;
      repeat=strings(p,50);
      bool flag=1;
      if(s[0]=='Y'){
          for(int i=0;i<t;i++){
            if(s[i]!=repeat[i]){
                flag=0;
            }  
          }
      }
      else if(s[0]=='e'){
          for(int i=0;i<t;i++){
              if(s[i]!=repeat[i+1]){
                  flag=0;
              }
          }
      }
      else if(s[0]=='s'){
          for(int i=0;i<t;i++){
              if(s[i]!=repeat[i+2]){
                  flag=0;
              }
          }
      }
      else{
          flag=0;
      }
      if(flag==0){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
      }
      
  }
return 0;
}