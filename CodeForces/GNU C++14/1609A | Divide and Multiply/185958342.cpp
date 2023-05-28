#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,c=0;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
            
        long long sum =0, ans =0;
        for(int i=0; i<n; i++)
        {
            while(a[i]%2 ==0)
            {
                a[i] /= 2;
                c++;
            }
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        sum += a[i];
        ans = a[n-1];
        cout <<fixed<<setprecision(0)<<sum+ ans*(pow(2,c)) << endl;
        
    }
 // your code goes here
 return 0;
}