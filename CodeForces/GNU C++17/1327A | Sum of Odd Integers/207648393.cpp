#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,k;
        cin>>n>>k;
        if((n+k)%2==0 && (k*k)<=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}