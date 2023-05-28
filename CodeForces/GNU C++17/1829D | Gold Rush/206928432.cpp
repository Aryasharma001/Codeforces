#include <bits/stdc++.h>
using namespace std;
bool check(int n,int x){
    if(n==x)
    return true;
    if(n%3!=0 || x>n)
    return false;
    int temp=n/3;
    bool flag1=check(temp,x);
    bool flag2=check(n-temp,x);
    if(flag1==true || flag2==true)
    return true;
    else
    return false;
}
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n,m;
      cin>>n>>m;
      bool ans=check(n,m);
      if(ans==true)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
  }
  return 0;
 
}