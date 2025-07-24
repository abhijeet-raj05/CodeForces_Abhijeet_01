#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};

void solve() {
    ll a, b;
    cin >> a >> b;
    ll xk, yk, xq, yq;
    cin >> xk >> yk;
    cin >> xq >> yq;

    set<pair<int, int>> king, queen;

    for (int i = 0; i < 4; i++) {
        king.insert({xk + dx[i] * a, yk + dy[i] * b});
        king.insert({xk + dx[i] * b, yk + dy[i] * a});

        queen.insert({xq + dx[i] * a, yq + dy[i] * b});
        queen.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    int ans = 0;
    for (auto it : king) {
        if (queen.find(it) != queen.end()) {
            ans++;
        }
    }

    cout << ans << '\n';
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
