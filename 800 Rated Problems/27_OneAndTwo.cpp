#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    ll n; 
    cin >> n;
    vector<ll> a(n);
    ll total_twos = 0;

    for (ll &x : a) {
        cin >> x;
        if (x == 2) total_twos++;
    }

    if (total_twos % 2 != 0) { 
        cout << -1 << "\n";
        return;
    }

    ll target_twos = total_twos / 2;
    ll prefix_twos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 2) prefix_twos++;
        if (prefix_twos == target_twos) {
            cout << i + 1 << "\n"; 
            return;
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
    while (t--) {
        solution();
    }
    return 0;
}
