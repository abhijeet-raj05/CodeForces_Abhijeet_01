#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
__int128 lcm(__int128 a, __int128 b) {
    return (a / gcd((ll)a, (ll)b)) * b;
}

void solve() {
    ll n;
    cin >> n;

    int ans = 1;

    for (int i = 1; i <= 100; i++) {
        __int128 cur_lcm = 1;
        for (int len = 0; i + len <= 100; ++len) {
            int num = i + len;
            cur_lcm = lcm(cur_lcm, (__int128)num);

            if (cur_lcm > n) break;
            if (n % cur_lcm == 0) {
                ans = max(ans, len + 1);
            }
        }
    }

    cout << ans << "\n";
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
