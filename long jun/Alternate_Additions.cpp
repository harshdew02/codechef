#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a , b;
    cin>>a>>b;
    int kk = b-a;
    int div = kk/3;
    if(kk%3==0){
        cout<<"YES\n";
    }else{
        if((div*3+1)==kk){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
 
}
 return 0;
}