#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; 
    cin>>t;
    while(t--){
        long int x , y;
        cin>>x>>y;
        
        if((y-x)%8==0){
            cout << (y-x)/8<<endl;
        }else {
            long int n = (y-x)/8;
            cout<<(n+1)<<endl;
        }
    }
 return 0;
}