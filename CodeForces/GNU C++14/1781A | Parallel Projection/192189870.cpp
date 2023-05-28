#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int w,d,h;
     cin>>w>>d>>h;
     int a,b,f,g;
     cin>>a>>b>>f>>g;
     int d1=d-b+d-g;
     int d2=b+g;
     int d3=2*w-a-f;
     int d4=a+f;
     int dis=min(d1,d2)+abs(a-f);
     int dis2=min(d3,d4)+abs(b-g);
     int dis_f=min(dis,dis2);
     cout<<(dis_f+h)<<"\n";
 }
 return 0;
}