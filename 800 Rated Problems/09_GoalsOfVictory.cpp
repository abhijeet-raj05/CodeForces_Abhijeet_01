#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n;
    cin >> n;
    vector<ll> arr(n-1);
    ll sum = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    cout << -(sum) << "\n";

    
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
