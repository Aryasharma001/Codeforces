#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        long long sum=0;
        int l=0,r=n-2*k;
        for(int i=0;i<r;i++){
            sum+=arr[i];
        }
        long long max_sum=sum;
        while(r<n-1){
            sum+=arr[r]+arr[r+1];
            sum-=arr[l++];
            max_sum=max(sum,max_sum);
            r+=2;
        }
        cout<<max_sum<<endl;
    }
  return 0;
 
}