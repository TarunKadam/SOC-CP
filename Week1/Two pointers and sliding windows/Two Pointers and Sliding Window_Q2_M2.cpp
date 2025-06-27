#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n,k,sum=0,max=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<k;i++){
	        sum+=a[i];
	    }
	    max=sum;
	    for(int i=k;i<n;i++){
	        sum+=a[i]-a[i-k];
	        if(max<sum)
	        max=sum;
	    }
	    cout<<max<<endl;
	}
}
