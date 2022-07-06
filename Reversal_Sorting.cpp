#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back;
#define l


// int ans(ll a[] ,  ll n , ll x){
    
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        ll count = 1;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                if (arr[i] + arr[i + 1] > x)
                {
                     count = 0;
                }
                else
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }

        if(count ==0){
            cout<<"NO\n";
        }else {
            cout<<"YES\n";
        }

    }
}