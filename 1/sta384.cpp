#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        ll l, k;
        l = abs(b - a);
        k = m - l;
         if (k < l)
        {
            cout<<k<<endl;
        }
        else{
            cout<<l<<endl;
        }
    }
    return 0;
}