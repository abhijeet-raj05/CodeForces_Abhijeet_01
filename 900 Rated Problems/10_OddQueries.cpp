#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> prefix(n + 1, 0); 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    ll initial_Sum = prefix[n]; 

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        l--, r--;

        ll sum_lr = prefix[r + 1] - prefix[l];
        ll len = r - l + 1;
        ll new_sum = initial_Sum - sum_lr + (k * len);

        if (new_sum % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
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
