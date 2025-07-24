#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;cin >> s;
        int mx = 0;   
        int cur = 0;  
        int dot = 0; 
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                mx = max(mx, cur);
                cur = 0;
            } else {
                cur++;
                dot++;
            }
        }
        mx = max(mx, cur); 
        if (mx >= 3) {
            cout << 2 << endl;
        } else {
            cout << dot << endl;
        }
    }

    return 0;
}
