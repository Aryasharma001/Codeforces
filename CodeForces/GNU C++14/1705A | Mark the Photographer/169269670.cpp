#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int k=2*n;
        int h[k];
        for(int i=0;i<k;i++){
            cin>>h[i];
        }
        sort(h,h+k);
        bool flag=0;
        for(int i=0;i<n;i++){
            if((h[n+i]-h[i])>=x){
               continue;
            }
            else{
                flag=1;
            }
            
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
 return 0;
}