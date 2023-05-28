#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
  cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>neg;
  for(int i=0;i<n;i++){
      if(arr[i]<=-1)
      neg.push_back(abs(arr[i]));
  }
  int ans=0;
  sort(neg.begin(),neg.end(),greater<int>());
  int p=neg.size();
  int k=min(p,m);
  for(int i=0;i<k;i++){
      ans=ans+neg[i];
  }
  cout<<ans<<endl;
}