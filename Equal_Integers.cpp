#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int x, y , d;
    cin>>x>>y;
    d = abs(x-y);
    if(y>x){
        cout<<d<<endl;
    }else if(x>y){
        if(d%2==0){
            cout<<(d/2)<<endl;
        }else{
            cout<<(d/2+2)<<endl;
        }
    }else{
        cout<<0<<endl;
    }
 
}
 return 0;
}