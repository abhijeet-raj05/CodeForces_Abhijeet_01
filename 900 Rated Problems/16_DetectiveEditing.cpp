#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solution(){
    string s,t; cin >> s>> t;
    map<char,ll> freq;
    for(char ch : t){
        freq[ch]++;
    }
    for(int i = s.size()-1; i>=0; i--){
        if(freq[s[i]]>0){
            freq[s[i]]--;
        }
        else{
            s[i] = '.';
        }
    }

    string res = "";
    for(char ch:s){
        if(ch!='.'){
            res+=ch;
        }
    }
    if(res==t){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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
    ll t; cin >> t;
    while(t--){
        solution();
    }

    return 0;
}