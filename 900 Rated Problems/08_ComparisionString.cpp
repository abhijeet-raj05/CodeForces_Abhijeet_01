#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    string s; cin>> s;
    int maxi = 1;
    int real = 1;
    for(int i = 0; i<n-1; i++){
        if(s[i]==s[i+1]){
            real++;
        }
        else{
            real = 1;
        }

        maxi = max(maxi,real);
    }
    cout << maxi + 1 << "\n";
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
