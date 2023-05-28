#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int ,int>>m;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            m.push_back({a,b});
        }
        //for(auto it:m)
        //cout<<it.first<<" "<<it.second<<endl;
        bool flag=0;
        int p=0,c=0;
        for(int i=0;i<n-1;i++){
            p+=m[i].first-p;
            c+=m[i].second-c;
            if(m[i+1].second<c || m[i+1].first<p){
                flag=1;
                break;
            }
            if((m[i+1].first==m[i].first) && (m[i+1].second!=m[i].second) ){
                flag=1;
                break;
            }
            if((m[i+1].second-m[i].second)>(m[i+1].first-m[i].first)){
                flag=1;
                break;
            }
            
        }
        for(int i=0;i<n;i++){
            if(m[i].second>m[i].first){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}