#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    vector<int>ans;
	    int element=0;
	    for(int i=0;i<n;i++){
	        if(element!=a[i] || i==0){
	            element=a[i];
	            ans.push_back(a[i]);
	        }
	    }
	   cout<<ans.size()<<endl;
	   for(int element: ans){
	       cout<<element<<" ";
	   }
	   cout<<endl;
	}
}
