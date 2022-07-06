#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    
    long long int x,n,k;
    cin>>x>>n;
  //  k= n-x;

//    if(x==1){
//         cout<<0<<endl;
//     }
//     //else if(x==n){
//     //cout<<(n-1)*n<<endl;
//    // }
//     else{
          //  m = n*(n-1);
           // l = k*(k+1);
       // cout<<(m-l)<<endl;
       cout<<x*(2*n-x+1)-2*n<<endl;
    // }
 
}
 return 0;
}