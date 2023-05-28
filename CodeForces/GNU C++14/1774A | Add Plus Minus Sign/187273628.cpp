#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;    
        string s;
        cin>>s;
        string ans="";
        int sum = s[0]-'0';
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                if(sum>0){
                    ans=ans+"-";
                    sum=sum-s[i];
                }
                else{
                    ans=ans+"+";
                    sum=sum+s[i];
                    
                }
                    
            }
            else{
                ans=ans+"+";
            }
        }
        
        cout<<ans<<endl;
        
    }
      
return 0;
}