#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void NehaDhupia(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll ops=0;
    for(int i = n-2; i>=0 ; i--){
        while(a[i]>=a[i+1] and a[i]>0){
            a[i]/=2;
            ops++;

        }
        if(a[i] == a[i+1]){
            cout << -1 << '\n';
            return;
        }
    }
    cout << ops << "\n";


    
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
        NehaDhupia();
    }

    return 0;
}