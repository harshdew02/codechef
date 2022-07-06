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
    int x1 ,y1,x2 ,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if(x1==y1 && abs(y2-x2)%2==0 && (y2-x2)<=4) cout<<"YES"<<endl;
    if(x2==y2 && abs(y1-x1)%2==0 && (y1-x1)<=4) cout<<"YES"<<endl;
    if(x1==y1 && y1==y2 && abs(y2-x2)==3) cout<<"YES\n";

    if(abs(y2-x2)==3 && abs(y1-x1)==1) cout<<"YES"<<endl;
    if(abs(y2-x2)==3 && abs(y1-x1)==1) cout<<"YES"<<endl;
    if(abs(x2-x1)==3 && abs(y1-x1)==1) cout<<"YES"<<endl;
    if(abs(y2-x2)==3 && abs(y1-x1)==1) cout<<"YES"<<endl;
}
}