#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
       
        int sum=0;
        int k=9;
        if(s<=9){
            cout<<s<<endl;
        }
        else{
            while(k<s){
                s=s-(k--);
            }
            cout<<s;
            while(k<9)cout<<++k;
            cout<<'\n';
  }
                
          
            
        }
    
   
    return 0;
}