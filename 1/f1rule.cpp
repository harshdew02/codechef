#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        cin >> x >> y;
        int d;
        d = x * (1.07);
     //   int k;
       // k = d;
     //   cout<<d<<endl;
       // cout<<k<<endl;
        if (y <= d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}