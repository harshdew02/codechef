#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i,m, solv;
        cin >> a >> b;
        int n = 0;
        solv = 0;
        int k = abs(a - b);

        if (k == 1)
        {
            solv = 1;
        }
        else
        {
            m = sqrt(k);
            for (int i = 1; i <=m; i++)
            {
                if (k % i == 0)
                    n++;
            }
            if(m*m == k){
                        solv = 2*n-1;
                    }else{
                        solv = 2*n;
                    }
        }
        cout << solv << "\n";
    }
    return 0;
}