#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

bool comp(pll &a, pll &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;  
    }
    return a.first > b.first;      
}

void solution(){
    ll n,k;
    cin >> n >> k;
    vector<pll> a(n);
    for(ll i = 0; i<n; i++) {
        cin >> a[i].first;
        a[i].first %= k;
        if(a[i].first==0){
            a[i].first = k;
        }
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end(), comp); 
    for(auto i : a){
        cout << i.second << " ";
    }
    cout << "\n";
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
