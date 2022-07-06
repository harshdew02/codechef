#include <bits/stdc++.h>
using namespace std;
// int arr[1e5];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m, l;
        cin >> n;
        l = n;
        int arr[n+1];
        //arr[0]=0;
        if (n % 2 == 0)
        {
            k = n / 2;
            m = n-k;
        }
        else
        {
            k = n / 2 + 1;
            m = n - k;
        }
        for (int i = 1; i <= k; i++)
        {
            arr[2*(k-i+1)-1] = l;
            l--;
        }

        for (int j = 1; j <= m; j++)
        {
            arr[2 * j] = l;
            l--;
        }
        for(int i = 1 ; i<=n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}