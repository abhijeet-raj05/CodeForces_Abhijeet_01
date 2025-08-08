#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll n; cin >> n;
    string s; cin >> s;
    ll start = 0, end = n - 1;
    while(end>=start){
        if(s[start]!=s[end]){
            n -= 2;
            start++; end--;
            
        }
        else {
            break; 
        }
    }
    
    cout << n << "\n";
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