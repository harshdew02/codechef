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
        int a[4];
        int max = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        cout << max << endl;
        }
        return 0;
    }