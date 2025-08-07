#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b;
    for(int i = 0; i < n; i++) {
    b.pb(n + 1 - a[i]);
    }

    for(int i = 0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
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
        solution();
    }
    

    return 0;
}