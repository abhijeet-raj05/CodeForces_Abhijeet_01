#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void goblin(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    ll zeros = 0;
    for(int i = 0; i<n; i++){
        if(a[i]==0){
            zeros++;        
        }
    }

    bool is_found = false;
    ll l = 0, r = n - 1;
    while(a[l]==0){
        l++;
    }
    while(a[r]==0){
        r--;
    }
    for(int i = l; i<=r; i++){
        if(a[i]==0){
            is_found = true;
        }
    }
    if(zeros==n){
        cout << 0 << "\n";
    }
    else if(is_found==false){
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
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
        goblin();
    }
    return 0;
}