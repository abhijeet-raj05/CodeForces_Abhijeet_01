#include <bits/stdc++.h>
using namespace std;

#define pb push_back
using ll = long long;

void godlike() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if(a[0] == a[n - 1]) {
        cout << -1 << "\n";
        return;
    }

    vector<ll> b, c;
    ll maxi = a[n - 1];

    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == maxi) {
            c.pb(maxi);
        } else {
            b.pb(a[i]);
        }
    }

    cout << b.size() << " " << c.size() << "\n";

    for(auto val : b) cout << val << " ";
    cout << "\n";

    for(auto val : c) cout << val << " ";
    cout << "\n";
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

    while(t--) {
        godlike();
    }

    return 0;
}
