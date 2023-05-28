#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int g=0;
        for(int i=0;i<n;i++){
            g=__gcd(g,arr[i]);
        }
        int maxi=*max_element(arr,arr+n);
        cout<<maxi/g<<"\n";
    }
    return 0;
}