#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        if(a==0 || b==0){
            cout<<0<<endl;
        }else if(a%3==0 || b%3==0){
            cout<<0<<endl;
        }
        else
        {

            int k;
            int cnt = 0;
            while (k % 3 != 0)
            {
                k = abs(a - b);
                if ((a - k) == b)
                {
                    a = k;
                }
                else
                {
                    b = k;
                }
                cnt++;
            }

            cout << cnt << endl;
        
        }
    }
    return 0;
}