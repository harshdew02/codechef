#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
     //   int ab = 0, ba =0;
        long int AB = (500-2*x)+(1000-4*(x+y));
        long int BA = (1000-4*y)+(500-2*(x+y));
        if(AB>BA){
            cout<<AB<<endl;
        }else{
            cout<<BA<<endl;
        }
    }
    return 0;
}