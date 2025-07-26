#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    ll max_time = b;
    for (ll i = 0; i < n; i++) {
        max_time += min(x[i], a - 1);
    }
    cout << max_time << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
