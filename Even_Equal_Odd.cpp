#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 

ll ev = pow(2 , 29);


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)

{   multiset<ll> v;
    ll n;
    cin>>n;
    ll a[2*n];
    ll even = 0;



    for(int i=0 ; i<2*n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0){
            even++;
            v.insert(log2(__gcd(ev , a[i])));
        }
    }

    ll odd = 2*n - even;
    if(odd>=even){
        cout<<odd-n<<endl;
    }else{
        // ll pl = even - n;
        ll ans =0; 
        int i = 1 ;
        for(auto u : v){
            ans += u;
            if(i==(even - n)){
                break;
            }            
            i++;
        }
        cout<<ans<<endl;
    }
}
}