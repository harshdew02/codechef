#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int b;
    while (t--)
    {
        int n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int id2;
        for (int id = 0; id < n; id++)
        {
            if (id == 0)
            {
                id2 = id;
            }
            for (int i = 0; i < n; i++)
            {
                if (i == id2)
                {
                    continue;
                }
                else
                {
                    arr[i]++;
                }
            }
            auto it = find(arr, arr + n, (arr[id2] + 1));
            if(it != end(arr))
            id2 = distance(arr, it);
        }
    }
}