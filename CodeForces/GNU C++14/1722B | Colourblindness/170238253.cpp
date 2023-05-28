#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
  int T;
  cin >> T;
  while(T--){
   int n;
   cin>>n;
   string arr;
   string arr2;
   cin>>arr;
   cin>>arr2;
   bool flag=1;
   
   for(int i=0;i<n;i++){
       if(arr[i]==arr2[i]||arr[i]=='G'&&arr2[i]=='B'||arr[i]=='B'&&arr2[i]=='G'){
           continue;
       }
       else{
           flag=0;
       }
       
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