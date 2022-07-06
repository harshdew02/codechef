#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
#define ll long long int;
#define vi vector<int>;
#define in insert;
#define pb push_back;
#define REP(i, a, b)            \
    for (int i = a; i < n; i++) \
        ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int i = x;
        string sl;
        if (x > n / 2 || x >= (n / 2) + 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                for (char c = 'a'; c < 'z'; ++c)
                {
                    sl.push_back(c);
                    i--;
                    if (i == 1)
                    {
                        break;
                    }
                }
                if (x != n / 2)
                {
                    for (char c = 'a'; c < 'z'; ++c)
                    {
                        sl.push_back(c);
                        int k = (n / 2 - x);
                        k--;
                        if (k == 1)
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                for (char c = 'a'; c < 'z'; ++c)
                {
                    sl.push_back(c);
                    i--;
                    if (i == 1)
                    {
                        break;
                    }
                }
                if (x != (n / 2)+1)
                {
                    for (char c = 'a'; c < 'z'; ++c)
                    {
                        sl.push_back(c);
                        int k = ((n / 2)+1 - x);
                        k--;
                        if (k == 1)
                        {
                            break;
                        }
                    }
                }

            }

            cout<<sl+strrev(sl)
        }
    }
}