#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n),b(n);
	    for(int i = 0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i = 0;i<n;i++){
	        cin>>b[i];
	    }
	    map<pair<int,int>,int> m;
	    long long int ans = 0;
	    for(int i = 0;i<n;i++){
	        ans+=m[{a[i],b[i]}];
            cout<<"test"<<ans<<endl;
	        m[{b[i],a[i]}]++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}