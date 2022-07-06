#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 
#define l 

// int a[10000];

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
    map<int , int> m;
    // for(int i =0 ; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;


        int x;
    for(int i = 0 ; i<n; i++)
    {
        cin>>x;
        m[x]++;

    }
    int rep = m[x];
    

    for(auto itr = m.begin() ; itr != m.end() ;  ++itr){
        if(itr->second > rep)
        rep = itr->second;
    }

    // int rep = *max_element(a , a+1001);
    cout<<n-rep<<endl;
}
}