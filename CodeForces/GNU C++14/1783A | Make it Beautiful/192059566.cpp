#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0;
    bool flag=0;
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
        if(sum==arr[i+1])
        flag=1;
        
    }
    if(flag==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    else{
        if(s.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            sort(arr, arr+n, greater<int>());
            cout<<arr[0]<<" "<<arr[n-1]<<" ";
            for(int i=1;i<n-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
}