#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int dig =0;
        for(int i = 0 ; i<n ; i++){
                cin>>a[i];
                if(a[i] != 0){
                    dig = i; 
                }
        }
        cout<<dig<<endl;
    }
    return 0;
}