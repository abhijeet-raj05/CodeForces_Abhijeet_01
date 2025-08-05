#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution() {
   int n, p;
   cin >> n >> p;
   vector<pair<int, int>> a(n);
   for (int i = 0; i < n; i++) cin >> a[i].second;
   for (int i = 0; i < n; i++) cin >> a[i].first;
   sort(a.begin(), a.end());
   int rem = n - 1;
   ll cost = p;
   for (auto &it : a) {
      if (rem == 0) break;
      if (p <= it.first) {
         cost += 1LL * rem * p;
         break;
      } else {
         ll per = min(rem, it.second);
         cost += 1LL * it.first * per;
         rem -= per;
      }
   }
   cout << cost << endl;
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
   while (t--) solution();
   return 0;
}
