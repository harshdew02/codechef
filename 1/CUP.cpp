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
        if(x == 0 && y == 0){
            cout<<"NO"<<endl;
        }else if (x == y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}