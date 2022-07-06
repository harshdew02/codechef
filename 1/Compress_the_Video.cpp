#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        int cnt = n;
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                cnt--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}