#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if((d-c-b+a>=0) and (d-b>=0)){
        cout << 2*d - 2*b + a - c << "\n";
    }
    else{
        cout << -1 << "\n";
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

    ll t; cin >> t;
    while(t--){
        solution();
    }
    

    return 0;
}