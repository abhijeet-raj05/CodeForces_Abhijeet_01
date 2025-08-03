#include <bits/stdc++.h>
using namespace std;

#define pb push_back
using ll = long long;



int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        arr[i] = abs(arr[i]); 
    }
    ll mini = *min_element(arr.begin(),arr.end());
    cout << mini << "\n";

    return 0;
}
