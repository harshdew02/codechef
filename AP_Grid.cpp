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
    int n, m;
    cin>>n>>m;

    if(n<=m){
        int z = 1, dd = n+1;
        int l = 1;
        for(int i = 1 ; i<=n ; i++){
            cout<<z<<" ";
            for(int j =1; j<m ; j++){
                cout<<z+(i*l)<<" ";
                l++;
            }
            l =1;
            z = z+dd;
            cout<<endl;
        }
    }
    else{
        int p =1  ,dd = m+1 , x =1;
        for(int i =1 ; i<=n; i++){
            cout<<i<<" ";
            for(int j=1 ; j<m ; j++){
                cout<<i+dd*x<<" ";
                x++;
            }
            x=1;
            dd++;
            cout<<endl;
        }
    }
}
}