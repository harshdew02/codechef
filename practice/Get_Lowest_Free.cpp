#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 
#define loop(i , a, b) for(int i = a ; i<b; i++);
#define line "\n"
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
    ll a[3];
    
    cin>>a[0]>>a[1]>>a[2];

    sort(a , a+3);

    cout<<a[1]+a[2]<<line;

}
}