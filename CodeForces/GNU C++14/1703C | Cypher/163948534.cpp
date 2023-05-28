#include <bits/stdc++.h>
 
using namespace std;
 
void printArray(int a[], int n);
void printArrayS(string a[], int n);
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
 
        // input line 1
        cin >> n;
        
        int arr[n];
        int moves[n];
        string com[n];
 
        // input line 2
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        // input n line
        for (int i = 0;i < n; i++) {
            cin >> moves[i] >> com[i];
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cin >> moves[j] >> com[j];
        //     }
        // }
 
        
        
        // cout << "Test RUN: " << t << endl;
        // printArray(moves,n);
        
        for (int i = 0; i < n; i++) {
            string temp = com[i];
            for (int j = 0; j < moves[i]; j++) {
                if (temp[j] == 'D') {
                    arr[i]++;
                    if (arr[i] == 10) {
                        arr[i] = 0;
                    }
                } else {
                    arr[i]--;
                    if (arr[i] == -1) {
                        arr[i] = 9;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
 
    return 0;
}
 
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
 
void printArrayS(string a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}