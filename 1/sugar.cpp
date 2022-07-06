#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, y;
        cin >> n >> x >> y;
        pair<int, int> p;
        p = {x, y};
    //    int a = p.first;
    //    int b = p.second;
        int cnt = 0;

        while ((p.first < n && p.second < n))
        {
            p.first++;
            p.second++;
            cnt++;
           // cout << "c1 " << cnt << endl;
        }
        p.first = x;
        p.second = y;
        while ((p.first > 1 && p.second > 1))
        {
            // p.first = p.first - 1;
            --p.first;
            // p.second = p.second - 1;
            --p.second;
            cnt++;
          //  cout << "c2 " << cnt << endl;
        }

       /* p.first = x;
        p.second = y;
        while ((p.first < n && p.second > 1))
        {
            p.first++;
            p.second--;
            cnt++;
           // cout << "c3 " << cnt << endl;
        }
        p.first = x;
        p.second = y;
        while ((p.first > 1 && p.second < n))
        {
            p.first--;
            p.second++;
            cnt++;
          //  cout << "c4 " << cnt << endl;
        } */

        cout << 2 * (n - 1) + cnt + (x+y-2)<< endl;
    }
    return 0;
}