#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution()
{
    ll a, b, c;
    cin >> a >> b >> c;
    bool ok = false;


    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
        ok = true;

    if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
        ok = true;

    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
        ok = true;

    cout << (ok ? "YES\n" : "NO\n");
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