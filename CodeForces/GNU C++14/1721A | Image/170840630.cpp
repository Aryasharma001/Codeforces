#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int hsh[100]={0};
        for(int i=0;i<2;i++){
            hsh[int(s1[i]-'a')]++;
        }
        for(int i=0;i<2;i++){
            hsh[int(s2[i]-'a')]++;
        }
        int count=0;
        for(int i=0;i<100;i++){
            if(hsh[i]>0){
                count++;
            }
 
        }
        //for(int i=0;i<100;i++){
           // cout<<hsh[i]<<" ";
        
        //cout <<count<<" ";
        
        cout<<count-1<<endl;
    }
    return 0;
}