#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>;
#define in insert;
#define pb push_back; 


 
 int check(int j   , int fron[] , int back[] , int n ){
    if(j==0){
        return back[j+1];
    }
    if(j==n-1){
        return fron[j-1];
    }else{
        return __gcd(fron[j-1] , back[j+1]);
    }
 }

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
    int ar[n];
    for(int i =0 ; i<n; i++){
        cin>>ar[i];
    }

    int fron[n];
    int back[n];

    //makt(fron , back , ar , n);

     fron[0] = ar[0];
        //  cout<<fron[0]<<endl;

    for(int i =1 ; i<n; i++){
        fron[i] = __gcd(fron[i-1] , ar[i]);
    }
    back[n-1] = ar[n-1];
    for(int i = n-2; i>=0 ; i--){
        back[i] = __gcd(back[i+1] , ar[i] );
    }


    int cnt =0 ;

    for(int i = 0 ; i < n; i++){
        //    cout<<1<<endl;
        if(check(i , fron , back , n) > 1){
            cnt++;
        }
    }

    cout<<cnt<<endl;


}
}