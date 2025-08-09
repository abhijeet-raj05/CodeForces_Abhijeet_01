#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution() {
    ll n;
    cin >> n;
    string s = to_string(n);
    ll len = s.size();
    ll start = s[0] - '0';
    ll ans = 9 * (len - 1) + start;
    cout << ans << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
