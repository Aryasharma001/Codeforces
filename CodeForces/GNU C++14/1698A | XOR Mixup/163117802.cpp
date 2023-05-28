#include <iostream>
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int x=0,x1=0,x2=0;
     for(int i=0;i<n;i++){
         if(i==0){
             for(int j=1;j<n;j++){
                 x=x^arr[j];
             }
         }
         else{
             for(int j=0;j<i;j++){
                 x1=x1^arr[j];
             }
             for(int k=i+1;k<n;k++){
                 x2=x2^arr[k];
             }
             x=x1^x2;
             
         }
         
         if(x==arr[i]){
             cout<<x<<endl;
             break;
         }
         
 }
 }
 
 return 0;
}