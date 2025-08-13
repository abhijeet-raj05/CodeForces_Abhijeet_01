#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void bitCoin(){
    ll n; cin >> n;
    ll mini, maxi;
    if(n%2!=0){
        cout << -1 << "\n";
    }
    else if(n==2){
        cout << -1 << "\n";
    }
    else{
        ll maxi = n/4;
        ll mini = n/6;
        if(n%6!=0){
            mini++;
        }
        cout << mini << " " << maxi << "\n";
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
        bitCoin();
    }
    

    return 0;
}