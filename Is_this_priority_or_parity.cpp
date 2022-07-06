#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (k > 2)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            if (k == 2)
            { 
                cout << "ODD\n";
            }
            else
            {
                if (n % 2 == 0)
                    cout << "EVEN" << endl;
                else
                    cout << "ODD\n";
            }
        }
    }
    return 0;
}