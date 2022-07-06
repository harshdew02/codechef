#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n);
        int ma;

        for (int i = 0; i < n; i++)
        {
            if (s[i] < m < s[i + 1])
            {
                ma = s[i + 1];
                break;
            }
        }
        cout << 2 * ma << endl;
    }
    return 0;
}