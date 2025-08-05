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
    ll diff = INT_MAX;
    for(int i =1; i<n; i++){
        ll sub = a[i]-a[i-1];
        diff = min(sub,diff);
    }

    if(diff<0){
        cout << 0 << "\n";
    }
    else{
        cout << (diff/2)+1 << "\n";
    }
    
    
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