#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back;
#define l

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n;
        cin >> s;
        string v = "";
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == s[i+1])
            {
                v.push_back(s[i]);
                i++;
            }
            else
            {
                v.push_back(s[i]);
            }
        }
    cout << v.size()<< endl;
    }

   
}