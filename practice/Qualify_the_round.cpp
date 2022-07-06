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
    ll x,a,b;
    cin>>x>>a>>b;
    ll sc = a+2*b;
    if(sc>=x){
        cout<<"Qualify\n";
        
    }else{
        cout<<"NotQualify\n";
    }

}
}