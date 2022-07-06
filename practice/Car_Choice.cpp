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
    float x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if((y1/x1) < (y2/x2))
    cout<<-1<<endl;
    else if ((y1/x1) > (y2/x2))
    cout<<1<<endl;
    else
    cout<<0<<endl;
}
}