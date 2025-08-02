#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    ll sum = 0;
    char c;
    for (int i = 0; i<10; i++) {

        for(int j = 0; j<10; j++){
            cin >> c;
            if (c == 'X')

                {
                  ll value = 1 + min({i, j, 9 - i, 9 - j});
                  sum += value;

                }
        }
        
    }


    cout << sum << "\n";
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
