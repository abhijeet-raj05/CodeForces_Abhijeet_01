#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (n == m && x.find(s) != string::npos)
        {
            cout << 0 << "\n";
        }
        else if (n == m)
        {
            x = x + x;
            if (x.find(s) != string::npos)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (n < m)
        {
            int count = 0;
            while (x.length() < m)
            {
                x += x;
                count++;
            }
            if (x.find(s) != string::npos)
            {
                cout << count << "\n";
            }
            else{

                x += x;

                if(x.find(s) != string::npos){

                    cout<<count + 1<<endl;

                }

                else cout<<-1<<endl;

            }

        }
        
        else
        {
            if (x.find(s) != string::npos)
            {

                cout << 0 << endl;
            }

            else
            {

                x += x;

                if (x.find(s) != string::npos)
                {

                    cout << 1 << endl;
                }

                else
                    cout << -1 << endl;
            }
        }
    }

    return 0;
}
