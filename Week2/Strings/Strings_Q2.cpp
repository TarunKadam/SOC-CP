#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n;
	string s;
	cin>>n;
	cin>>s;
	
	for(int i=0;i<n;i++){
	    if(s[i]!='a'){
	        for(int j=i+1;j<n;j++){
	            if(s[j]<s[i]){
	                cout<<"YES"<<endl;
	                cout<<i<<" "<<j;
	                return 0;
	            }
	        }
	        
	    }
	}
	cout<<"NO";
	return 0;

}
