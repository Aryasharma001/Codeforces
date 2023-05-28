#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int hsh[26]={0};
        for(int i=0;i<n;i++){
            hsh[int(s[i]-'A')]++;
        }
        int count =0;
        for(int i=0;i<26;i++){
            if(hsh[i]==1){
                count=count+2;
            }
            else if(hsh[i]>1){
                count=count+1+hsh[i];
            }
            
        }
        cout<<count<<endl;
        
        
    }
 
    return 0;
}
 