#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
  int T;
  cin >> T;
  while(T--){
   int n;
   cin>>n;
   string arr;
   cin>>arr;
   bool flag=1;
   int hsh[100]={0}; 
   for(int i=0;i<n;i++){
       if(arr[i]=='T'||arr[i]=='i'||arr[i]=='m'||arr[i]=='u'||arr[i]=='r'){
           if(arr[i]=='T'){
               hsh[arr[i]-'A']++;
               
           }
           else{
               hsh[arr[i]-'a']++;
           }
           
           continue;
       }
       else{
           flag=0;
       }
       
   }
   for(int i=0;i<100;i++){
       if(hsh[i]>1){
           flag=0;
       }
   }
  
   if(n!=5){
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