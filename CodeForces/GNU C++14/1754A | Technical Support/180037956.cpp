#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, q=0,a=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='Q')
            {
                q++;
                a=0;
            }
            else
            {
                q--;
                a++;
            }
            if(q<0)
            q=0;
        }
        if(q>0)
        cout << "No" << endl;
        else
        cout << "Yes" << endl;
    }
 return 0;
}