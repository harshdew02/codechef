#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 
#define l 
 

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

    if(n%2 !=0){
        cout<<-1<<endl;
    }
    else{
        cout<<0<<" "<<0<<" "<<n/2<<endl;
    }
}
}