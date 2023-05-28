#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
            count++;
        }
        int sum=0;
        if(count==1){
            sum=n;
        }
        else if(count%2!=0)
            sum=(count/2)+(n-count)+1;
        else
            sum=(count/2)+(n-count);
        //cout<<sum<<" "<<count<<" ";    
        cout<<min(sum,n)<<endl;
    }
    return 0;
}