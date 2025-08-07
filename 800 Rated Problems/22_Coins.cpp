#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n ,k;
    cin >> n >> k;
    if(n%2!=0 and k%2==0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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
    while (t--)
    {
        solution();
    }
    return 0;
}