#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    ll blank = 0, count = 0;
    for(int i =0; i<n; i++){
        if(a[i]==0){
            blank++;
        }
        else{
            count = max(count,blank);
            blank = 0;
        }
    }
    count = max(count, blank);
    cout << count << "\n";
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