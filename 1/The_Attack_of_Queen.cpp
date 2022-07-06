#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int b;
    while (t--)
    {
        long int n, x, y;
        cin >> n >> x >> y;
        if ((x + y) > n+1)
        {
            for (int i = n+2; i <= 2*n; i++)
            {
                if (x+y == i)
                {
                     b = (x + y) - 2 * (i-n);
                    break;
                }
            }

        }
        else{
             b= x+y-2;
        }
         cout << 2 * (n - 1) + ((n - abs(x - y)) - 1) + b << endl;
    }
}