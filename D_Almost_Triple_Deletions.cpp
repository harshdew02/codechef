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
    ll a[n];
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i =0 ; i<n-1; i++){
        if(a[i] != -1 || a[i+1] !=-1)
        {
            if(a[i] != a[i+1]){
            a[i]=-1;
            }
        }else{
            i++;
        }
    }

cout<<n-count(a, a+n, -1)<<endl;


}
}