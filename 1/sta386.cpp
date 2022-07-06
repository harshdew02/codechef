#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int M = 1e5+7;
long long int arr[M];

int main()
{
    arr[0] = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        for(int i = 1; i<=n ; i++){
            long long int x;
            cin>>x;
            arr[i] = arr[i-1]+x;            
        }
  long long int k =  *find(arr+1, arr+n+1 , x*n);
  if(k == 0){
      cout<<"NO"<<endl;
  }else{
      cout<<"YES"<<endl;
  }

    }
    return 0;
}