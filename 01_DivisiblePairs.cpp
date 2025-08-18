#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n,x,y;
    cin >> n >> x >> y;
    vector<ll> a(n);

    for(ll i =0;i<n;i++) cin >> a[i];
    ll ans = 0;
    map<ll,map<ll,ll>> mpp;
    for(ll i =0;i<n;i++){
        ll p = a[i] % x;
        ll q = a[i] % y;
        ans += mpp[(x-p)%x][q];
        mpp[p][q]++;
    }
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
    ll t; cin >> t;
    while(t--){
        solution();
    }

    return 0;
}