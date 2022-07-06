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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";

    for(int i = 0 ; i<n; i++){
        if(s[i] == 'A'){
            ans.push_back('T');

        }else if(s[i] == 'T' ){
             ans.push_back('A');

            
        }else if(s[i] == 'C'){
             ans.push_back('G');

        }else {
             ans.push_back('C');

        }

    }

    cout<<ans<<endl;



}
}