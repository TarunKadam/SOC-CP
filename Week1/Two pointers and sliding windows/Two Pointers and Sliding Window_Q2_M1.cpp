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
	    for(int i=0;i<=n-k;i++){
	        for(int j=i;j<i+k;j++){
	            sum+=a[j];
	        }
	        if(max<sum)
	        max=sum;
	        sum=0;
	    }
	    cout<<max<<endl;
	}
	

}
