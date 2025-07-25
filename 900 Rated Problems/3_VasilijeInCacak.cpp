#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    ll min_sum = k * (k + 1) / 2;
    ll max_sum = k * (2 * n - k + 1) / 2;

    if (x >= min_sum && x <= max_sum){
        cout << "yEs\n";
    } 
    else {
        cout << "nO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
