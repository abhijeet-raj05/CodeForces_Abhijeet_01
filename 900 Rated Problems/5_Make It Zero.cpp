#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// Bhang phunk ke question ka testcase die hai lagta hai 
void solve(){
    ll n; cin >> n;
    ll a[n];
    for(ll i = 0; i<n ; i++){
        cin  >> a[i];
    }

    if(n%2==0){
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }

    else{
        cout << 4 << "\n";
        cout << 1 << " " << n-1 << "\n";
        cout << 1 << " " << n-1 << "\n";
        cout << n-1 << " " << n << "\n";
        cout << n-1 << " " << n << "\n";
    }
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