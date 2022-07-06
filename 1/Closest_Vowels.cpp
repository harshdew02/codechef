#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        int cnt;
        for(int i = 0 ; i<n ; i++){
            if(s[i] == 'c'){
                cnt++;
                continue;

            }else
            if(s[i] == 'g'){
                cnt++;
                continue;

            }else
            if(s[i] == 'l'){
                cnt++;
                continue;

            }else
            if(s[i] == 'r'){
                cnt++;
                continue;

            }
        }
        long long int m = 1000000007;

        long long int k = pow(2,cnt);

        cout<<( (k)%m)<<endl;
    }
    return 0;
}