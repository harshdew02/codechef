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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i = 0; i < n/2; i++)
        {
            int j = 2*i;
            string r = s.substr(j, 2);

            if (r == "00")
            {
                ans.push_back('A');
            }
            else if (r == "01")
            {
                ans.push_back('T');
            }
            else if (r == "10")
            {
                ans.push_back('C');
            }
            else if (r == "11")
            {
                ans.push_back('G');
            }
        }

        cout<<ans<<endl;
    }
}

// mai nit raipur me padhta hu mera name harsh dewangan hai mere papa ka name kamal chand dewangan hai meri mummy ka name 
// savita dewangan hai mere bhai ka name dewanshu dewangan hai 