#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll goodLen = 1, currLen = 1;
    for(int i = 1; i<n; i++){
        if(arr[i]-arr[i-1]<=k){
            currLen++;
        }
        else{
            currLen = 1;
        }
        goodLen = max(goodLen,currLen);
    }
    cout << (n-goodLen) << "\n";

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