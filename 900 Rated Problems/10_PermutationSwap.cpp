#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    vector<ll> p(n);
    for(int i = 0; i<n;i++){
        cin >> p[i];
    }
    int gcd = 0;
    for(int i = 0; i<n; i++){
        int diff = abs((i+1)-p[i]);
        gcd = __gcd(gcd,diff);
    }
    cout << gcd << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}