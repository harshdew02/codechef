#include<bits/stdc++.h>
using namespace std;


int main(){
       long long int n;
        cin>>n;
        //long long int a[n];
        long long int k=0;
        for(int i = 0 ; i<(n-1) ; ++i){
        long long int x;
        cin>>x;
        k += x;
        }
       cout<<k<<endl;
       cout<<((n*(n+1)/2)-k)<<endl;
 return 0;
}