#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
#define ll long long int;
#define vi vector<int>;
#define in insert;
#define pb push_back;
#define REP(i, a, b)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int d = (n / 5);
        int i;
        if (k % 5 == 0)
        {
             i = (k / 5);
        }
        else
        {
             i = (k / 5) + 1;
        }

        if (k > d * 5)
        {
            cout << 0 << endl;
        }
        else
        {
            if(n%5==0){
                cout<<d-i<<endl;
            }else{
                cout<<d-i+1<<endl;
            }
        }
    }
}
