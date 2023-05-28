#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int hsh[1000]={0};
        for(int i=0;i<n;i++){
            hsh[int(s[i]-'A')]++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hsh[i]>0){
                count++;
            }
            
        }
        cout<<count+n<<endl;
        
        
        
    }
 return 0;
}