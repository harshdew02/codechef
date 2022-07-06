#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    cin>>arr[i];

    if(n%2!=0){
        cout<<-1<<endl;
    }else{
        int cnt1 = 0;
        int cntn1 = 0;

        for(int i=0 ; i<n; i++){
            if(arr[i]==1){
                cnt1++;
            }else{
                cntn1++;
            }
        }
        int k;
        k= abs(cnt1-cntn1);
        cout<<k/2<<endl;
    }
 
}
 return 0;
}