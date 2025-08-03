#include <bits/stdc++.h>
using namespace std;

#define pb push_back
using ll = long long;

void godlike(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> temp;
    for(int i =0; i<n; i++){
        cin >> v[i];
    }
    temp.push_back(v[0]);
    for (int i=1; i<n; i++) {
        if (v[i] < v[i-1]){
        temp.push_back(v[i]);
    }
        temp.push_back(v[i]);
        }
        cout << temp.size() << endl;
        for (int i=0; i<temp.size(); i++){
            cout << temp[i] << " ";
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
        godlike();
    }

    return 0;
}
