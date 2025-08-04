#include <bits/stdc++.h>
using namespace std;

#define pb push_back
using ll = long long;

void godlike() {
    ll a,b,c;
    cin >> a >> b >> c;
    if(c%2!=0){
        if(a<b){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }

    else{
        if(a>b){
            cout << "First\n";
        }
        else{
            cout << "Second\n";
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

    ll t;
    cin >> t;

    while(t--) {
        godlike();
    }

    return 0;
}
