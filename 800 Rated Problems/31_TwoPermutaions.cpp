#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void ScoutXJohny(){
    ll n,a,b;
    cin >> n >> a >> b;
    if(a==n and b==n){
        cout << "Yes\n";
    }
    else{
        if(n-(a+b)>=2){
        cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

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
        ScoutXJohny();
    }
    

    return 0;
}