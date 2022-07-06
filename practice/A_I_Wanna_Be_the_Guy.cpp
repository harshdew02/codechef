#include<bits/stdc++.h>
using namespace std;


int main(){
        int n;
        set<int> s;
        cin>>n;
        int p , q;
        cin>>p;
        int x;
        for(int i=0 ; i<p ; ++i){
            cin>>x;
            s.insert(x);
        }
        cin>>q;
        for(int i = 0; i<q ; ++i){
            cin>>x;
            s.insert(x);
        }

        if(s.size()==n){
            cout<<"I become the guy."<<endl;
        }else{
            cout<<"Oh, my keyboard!"<<endl;
        }
         

 return 0;
}