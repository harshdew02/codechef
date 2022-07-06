#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n , x;
    cin>>n>>x;
    int cnt;
    cnt = n/6;
    if(n%6!=0){
        cout<<x*cnt+x<<endl;
    }else{
cout<<x*cnt<<"\n";
    }
    
    
}
 return 0;
}