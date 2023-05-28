#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> voc;
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        voc.insert({a,b});
    }
    vector<string> sentence;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        sentence.push_back(a);
    }
    string ans="";
 
    for(auto words: sentence){
        for(auto it:voc){
            if(it.first==words){
                if(it.first.size()>it.second.size())
                ans+=it.second+" ";
                else
                ans+=it.first+" ";
            }
        }
    }
    cout<<ans<<endl;
    
    
 
  return 0;
 
}