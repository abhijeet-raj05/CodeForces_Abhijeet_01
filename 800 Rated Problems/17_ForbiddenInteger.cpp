#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES\n";
        cout << n << "\n";
        while (n--) cout << 1 << " ";
        cout << "\n";
        return;
    }

    if (k == 1) {
        cout << "NO\n";
        return;
    }

    if (k == 2) {
        if (n % 2 == 0) {
            cout << "YES\n";
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
            cout << "\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    if (n % 2 == 0) {
        cout << "YES\n";
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
        cout << "\n";
    } else {

        if (k >= 3) {
            cout << "YES\n";
            cout << (n - 3) / 2 + 1 << "\n";
            cout << 3 << " ";
            for (int i = 0; i < (n - 3) / 2; ++i) cout << 2 << " ";
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        solution();
    }
    

    return 0;
}