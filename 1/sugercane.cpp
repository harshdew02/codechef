#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, y;
        cin>>n>>x>>y;
       // int cont = 2 * (n - 1);
        int c1 = 0;
            while(x<=n && y<=n)
            {
                x = x + 1;
                y = y + 1;
                c1 = c1+1;
                cout<<"1c"<<c1<<endl;
            }
            c1--;

            while(x>=1 && y>=1){
                x = x - 1;
                y = y - 1;
                c1 = c1 +1;
            }
            c1--;
            while(x<=n && y>=1){
                x = x+1;
                y = y-1;
                 c1 = c1 +1;
            }
            c1--;
            while(x>=1 && y<=n){
                x = x-1;
                y = y+1;
                c1 = c1 +1;                
            }
            c1--;

cout<<2*(n-1)+c1<<endl;
        
    }
    return 0;
}