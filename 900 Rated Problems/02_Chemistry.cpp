#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    int odd = 0;
    for (auto& p : freq)
        if (p.second % 2 != 0) odd++;
    ll rem = n - k;
    int allowed_odd = rem % 2;

    if(odd>k+allowed_odd){
        cout << "NO\n";
    }
    else{
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
