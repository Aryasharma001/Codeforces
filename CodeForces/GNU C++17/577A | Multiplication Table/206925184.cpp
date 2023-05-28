#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long n,x;
  cin>>n>>x;
  long long count=0;
  for(long long i=1;i<=n;i++){
      long long start=0,end=n;
      long long mid=start+(end-start)/2;
      while(start<=end){
          if((i*mid)==x){
             count++;
             //cout<<i<<" "<<mid<<" ";
          }
         
          if((i*mid)>x)
          end=mid-1;
          else
          start=mid+1;
          mid=start+(end-start)/2;
      }
  }
  cout<<count<<endl;
  return 0;
 
}