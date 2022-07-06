#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        k = 0;
        d = 0;
        set<char> s;
        string a, b;
        cin >> n;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                s.insert(b[i]);
            }
        }

        cout << s.size() << endl;
    }

    return 0;
}