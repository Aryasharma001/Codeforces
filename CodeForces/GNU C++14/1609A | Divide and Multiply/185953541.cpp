#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;    
        long long mx=0;
        long long x=0;
        long long  sum=0;
        long long arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            while(arr[i]%2==0){
                x++;
                arr[i]=arr[i]/2;
            }
            mx=max(arr[i],mx);
            sum=sum+arr[i];
        }
        sum=sum-mx;
        sum=sum+mx*(pow(2,x));
        cout<<sum<<endl;
        
    }
      
return 0;
}