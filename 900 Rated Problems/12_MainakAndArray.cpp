#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void ScoutxJohny(){
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << 0 << "\n";
        return;
    }
    ll ans = a[n] - a[1]; 
    for(int i = 2; i <= n; i++){
        ans = max(ans, a[i] - a[1]);
    }
    for(int i = 1; i <= n - 1; i++){
        ans = max(ans, a[n] - a[i]);
    }
    for(int i = 2; i <= n; i++){
        ans = max(ans, a[i - 1] - a[i]);
    }
    ans = max(ans, a[n] - a[1]);
    cout << ans << "\n";
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
    while(t--){
        ScoutxJohny();
    }
    return 0;
}
