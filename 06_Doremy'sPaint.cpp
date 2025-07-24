#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        map<int, int> m;
        for (int i = 0; i < n; i++){ cin >> a[i];
        m[a[i]]++;
        }
        if(n==2){
            cout << "yEs" << "\n";
        }
        else if(m.size()>=3){
            cout << "NO" << "\n";
        }
        else if (m.size() == 1) {
            cout << "YES" << "\n";
        } 
         else {
            vector<int> freq;
            for (auto it: m)
                freq.push_back(it.second);

            if (abs(freq[0] - freq[1]) <= 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}