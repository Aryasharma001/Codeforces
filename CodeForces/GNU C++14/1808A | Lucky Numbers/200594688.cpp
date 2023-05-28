#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int computeLuckyNumber(int num) {
    int maxDigit = 0, minDigit = 9;
    while (num > 0) {
        int digit = num % 10;
        maxDigit = max(maxDigit, digit);
        minDigit = min(minDigit, digit);
        num /= 10;
    }
    return maxDigit - minDigit;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        int vk=-1,p,k;
        cin >> l >> r;
        vector<pair<int,int>> mp;
        for (int i = l; i <= r; i++) {
            int lucky = computeLuckyNumber(i);
            if(lucky>vk){
                k=i;
                vk=lucky;
            }
            if(vk==9)
            break;
        }
        cout<<k<<endl;
    }
    return 0;
}