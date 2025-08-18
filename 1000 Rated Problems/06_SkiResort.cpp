#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution(){
    ll n, k, q; 
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll result = 0, count = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] <= q){
            count++;
        } else {
            if(count >= k){
                result += (count - k + 1) * (count - k + 2) / 2;
            }
            count = 0;
        }
    }
    if(count >= k){
        result += (count - k + 1) * (count - k + 2) / 2;
    }

    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solution();
    }
    return 0;
}
