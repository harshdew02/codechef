#include <bits/stdc++.h>
using namespace std;
char x(char a, char b)
{
    if (a == b)
    {
        return '0';
    }
    else
    {
        return '1';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < (n-1-i); i++)
        {
            cnt += s[i] != s[n-1-i];
            cout<<cnt<<endl;
        }
        cout << (cnt+1)/2 << endl;
    }

    return 0;
}