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
    int n;
    cin>>n;
    int a[n];
    int cnt=0 ; 
    for(int i= 0 ; i<n; i++){
     cin>>a[i]; 
     if(a[i]==1){
        cnt++;
     }
    }

    if(cnt%2==0){
        cout<<"YES\n";

    }else{
        cout<<"NO\n";
    }

     






}
}