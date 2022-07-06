#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 
#define l 
const ll M = 1e9+7;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
    ll n, x;
    cin>>n>>x;
    n--;
    // ll a = pow(2, n/2);
    // ll b = pow(2, n-n/2);

    // ll k = pow(2, n);
ll k = pow(2%M,n);
    ll m = k%M;

    if(k > M ){
        cout<<m<<endl;
    }else{
        cout<<x*pow(2,n)<<endl;
    }




}
}