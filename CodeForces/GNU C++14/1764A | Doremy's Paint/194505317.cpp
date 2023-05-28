#include <bits/stdc++.h>
using namespace std;
int dist(int n,int arr[],int l,int r){
    int hsh[n+1]={0};
    for(int i=l;i<=r;i++)
    hsh[arr[i]]++;
    int count=0;
    for(int i=0;i<n;i++){
        if(hsh[i]>0)
        count++;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int arr[n];
            for(int i=1;i<=n;i++)
            cin>>arr[i];
            cout<<"1"<<" "<<n<<endl;
        }  
            
    
    return 0;
}