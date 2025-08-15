#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    ll x, n;
    cin >> x >> n;

    ll r = n % 4;
    if (x % 2 == 0) {
        if (r == 1) {
            x -= n;
        } else if (r == 2) {
            x += 1;          // <-- fixed
        } else if (r == 3) {
            x += n + 1;
        }
    } else {
        if (r == 1) {
            x += n;
        } else if (r == 2) {
            x -= 1;          // <-- fixed
        } else if (r == 3) {
            x -= n + 1;
        }
    }

    cout << x << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
