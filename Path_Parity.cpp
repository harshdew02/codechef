#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else if (k == 0)
        {
            cout << "No" << endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}