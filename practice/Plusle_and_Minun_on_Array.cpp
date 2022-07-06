#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 
 
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
    ll n;
    cin>>n;
   vector<ll> m ,p;

    for(int i= 0 ;i<n;i++){
        ll x;
        cin>>x;
        if(i%2==0){
            p.push_back(abs(x));
        }else{
            m.push_back(abs(x));
        }
    }
    if(*max_element(m.begin() , m.end()) > *min_element(p.begin( ), p.end()))
    swap(*max_element(m.begin() , m.end()), *min_element(p.begin( ), p.end() ));
    
    cout<<accumulate(p.begin() , p.end(),0) - accumulate(m.begin() , m.end(),0) <<endl;
    



}
}