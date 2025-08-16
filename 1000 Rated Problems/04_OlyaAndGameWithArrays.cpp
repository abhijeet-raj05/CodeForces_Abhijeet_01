#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
using ll = long long;

void solution()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    ll mini = LLONG_MAX;

    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        vector<ll> b(m);

        for (ll j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        ll min_el = *min_element(all(b));
        mini = min(mini, min_el);

        b.erase(find(all(b), min_el));
        arr.pb(*min_element(all(b))); 
    }

    ll ans = mini + accumulate(all(arr), 0LL) - *min_element(all(arr));
    cout << ans << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}
