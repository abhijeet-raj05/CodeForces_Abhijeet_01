#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pi  = pair<ll, ll>;
using vi  = vector<ll>;
using vpi = vector<pi>;
using vvi = vector<vi>;
using vc  = vector<char>;
using mpi = map<ll, ll>;
using mps = map<string, ll>;
using mpc = map<char, ll>;

#define tc(t)             ll t; cin >> t; while(t--)
#define f(i, a, b)          for(ll i = a; i < b; i++)
#define endl                "\n"
#define pb                  push_back
#define fi                  first
#define sec                 second
#define speed               ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes                 cout<<"DA"<<endl
#define no                  cout<<"NET"<<endl
#define no2                 cout << -1 << endl
#define print(x)            cout << x << endl
#define printv(v)           for(auto &x : v) cout << x << " "; cout << endl
#define vectin(v)            for(auto &x : v) cin >> x
#define sortv(v)            sort(v.begin(), v.end())
#define rsortv(v)           sort(v.rbegin(), v.rend())
#define sortcomp(v, comp)   sort(v.begin(), v.end(), comp)
#define maxii(v)            *max_element(v.begin(), v.end())
#define minii(v)            *min_element(v.begin(), v.end())

const ll MOD1 = 1e9 + 7;
const ll MOD2 = 998244353;
const ll inf  = 1e18;
const ll ninf = -1e18;
const ld PI   = 3.141592653589793238462643383279502884L;

void solve(){
    string bs; cin>>bs;
    ll c1=0;ll c0=0;
    f(i,0,bs.size()){
        if(bs[i]=='0') c0++;
        else c1++;
    }
    if(min(c1,c0)%2!=0) yes;
    else no;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    speed;
    tc(t){
        solve();
    }
    return 0;
}
