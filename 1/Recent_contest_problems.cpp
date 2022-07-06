#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s = 0, l = 0;

        for (int i = 0; i < n; i++)
        {
            string S = "START38";
            string x, L = "LTIME108";
            cin >> x;
            if (x == S)
            {
                s++;
            }
            if(x == L){
                l++;
            }
        }
        cout<<s<<" "<<l<<endl;
    }
    return 0;
}