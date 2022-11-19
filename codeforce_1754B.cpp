#include<iostream>
using namespace std;

int main() {
    #ifndef codeforce
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t --) {
        int n; 
        cin >> n;
        int p; 
        p = n / 2;
        if (n & 1) cout << n << " ";
        for (int i = p; i >= 1; i --)
            cout << i << " " << i + p << " ";
        cout << endl;
    }
    return 0;
}