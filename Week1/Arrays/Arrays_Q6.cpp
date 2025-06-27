#include <bits/stdc++.h>
using namespace std;

int MaxNoOfFriend(int a[],int n){
    set<int> days;
    for(int i=0;i<n;i++){
        days.insert(a[i]);
    }
    return (days.size());
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    cout<<MaxNoOfFriend(A,N)<<endl;
	}
	return 0;

}
