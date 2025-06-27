#include <bits/stdc++.h>
using namespace std;

int MinOp(int a[],int n){
    int cnt=1,max=1,i=0,index=0;
    sort(a,a+n);
    while(i<n){
        for(index=i+1;a[index]==a[index-1];index++){
            cnt++;
        }
        i=index;
        if(cnt>max)
        max=cnt;
        cnt=1;
    }
    return (n-max);
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
	    cout<<MinOp(A,N)<<endl;
	}
	return 0;
}
