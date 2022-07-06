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
    int p;
    cin>>p ;
    int a = p/100;
    int b = p%100;
    if(b<=(10-a)){
        cout<<a+b<<endl;
    }else{
        cout<<-1<<endl;
    }





}
}