#include <bits/stdc++.h>
#define ll long long int;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y ,m;
        double n;

        cin >> x >> y;
        if(x>y){
            swap(x,y);
        }
       // int i = 1;
        if (x != y && (x!=0 && y!=0))
        {
            n = log2(y/x);
            m = n;
        }
        //if(x==0 ||y ==0)

        if (x == y)
        {
            cout << y << endl;
        }
        else if (x * pow(2, m) == y)
        {
            cout << (y + m) << endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}