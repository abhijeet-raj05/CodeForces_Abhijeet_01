#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    string s; cin >> s;
    ll n = s.length();
    ll freq0 = count(s.begin(),s.end(),'0');
    ll freq1 = n - freq0;

    for(int i =0; i<n; i++){
        if(s[i]=='0'){
            freq1--;
        }
        else{
            freq0--;
        }
        if(freq1<0 or freq0<0){
            cout << n - i << "\n";
            return;
        }
    }
    cout << 0 << "\n";
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
